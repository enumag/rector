<?php

use Rector\Symfony\Tests\FrameworkBundle\ContainerGetToConstructorInjectionRector\Source\ContainerAwareParentClass;

final class AnotherCommand extends ContainerAwareParentClass
{
    protected function execute()
    {
        $someService = $this->getContainer()->get('translator');

        $someService = $this->getContainer()->get('translator')->translateSomething();
    }
}

?>
-----
<?php

use Rector\Symfony\Tests\FrameworkBundle\ContainerGetToConstructorInjectionRector\Source\ContainerAwareParentClass;

final class AnotherCommand extends ContainerAwareParentClass
{
    /**
     * @var \Rector\Symfony\Tests\Rector\FrameworkBundle\AbstractToConstructorInjectionRectorSource\SomeTranslatorInterface
     */
    private $someTranslator;
    public function __construct(\Rector\Symfony\Tests\Rector\FrameworkBundle\AbstractToConstructorInjectionRectorSource\SomeTranslatorInterface $someTranslator)
    {
        $this->someTranslator = $someTranslator;
    }
    protected function execute()
    {
        $someService = $this->someTranslator;

        $someService = $this->someTranslator->translateSomething();
    }
}

?>
