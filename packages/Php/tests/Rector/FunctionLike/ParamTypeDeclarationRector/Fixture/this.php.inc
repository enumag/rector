<?php

namespace Rector\Php\Tests\Rector\ClassMethod\ParamTypeDeclarationRector\Fixture;

class ThisClass
{
    /**
     * @param $this $param
     * @param null|$this $param2
     * @return $this
     */
    function someFunction($param, $param2)
    {
    }
}

?>
-----
<?php

namespace Rector\Php\Tests\Rector\ClassMethod\ParamTypeDeclarationRector\Fixture;

class ThisClass
{
    /**
     * @param $this $param
     * @param null|$this $param2
     * @return $this
     */
    function someFunction(self $param, ?self $param2)
    {
    }
}

?>
