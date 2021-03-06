<?php declare(strict_types=1);

namespace Rector\Laravel\Tests\Rector\StaticCall\MinutesToSecondsInCacheRector;

use Rector\Laravel\Rector\StaticCall\MinutesToSecondsInCacheRector;
use Rector\Laravel\Tests\Rector\StaticCall\MinutesToSecondsInCacheRector\Source\LaravelStoreInterface;
use Rector\Testing\PHPUnit\AbstractRectorTestCase;

final class MinutesToSecondsInCacheRectorTest extends AbstractRectorTestCase
{
    public function test(): void
    {
        $this->doTestFiles([__DIR__ . '/Fixture/fixture.php.inc']);
    }

    protected function getRectorClass(): string
    {
        return MinutesToSecondsInCacheRector::class;
    }

    /**
     * @return mixed[]|null
     */
    protected function getRectorConfiguration(): ?array
    {
        return [
            '$storeClass' => LaravelStoreInterface::class, // just for test case
        ];
    }
}
