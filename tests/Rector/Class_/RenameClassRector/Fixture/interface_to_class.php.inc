<?php

namespace Rector\Tests\Rector\Class_\RenameClassRector\Fixture;

class InterfaceToClass implements \Countable
{
    public function run(\Countable $dateTime): \Countable
    {
    }

    public function count()
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\Rector\Class_\RenameClassRector\Fixture;

class InterfaceToClass implements \Countable
{
    public function run(\stdClass $dateTime): \stdClass
    {
    }

    public function count()
    {
    }
}

?>
