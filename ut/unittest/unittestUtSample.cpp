/** 
 *  Copyright (c) 1999~2017, Altibase Corp. and/or its affiliates. All rights reserved.
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Affero General Public License, version 3,
 *  as published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU Affero General Public License for more details.
 *
 *  You should have received a copy of the GNU Affero General Public License
 *  along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
 
#include <idl.h>
#include <act.h>

/*
 * Function to demonstrate UnitTest framework
 */
SInt unittestUtGetOne()
{
    return 1;
}

/*
 * ACT_CHECK and ACT_CHECK_DESC demonstration function
 */
void unittestUtTestCheck()
{
    SInt sRet;

    ACT_CHECK(unittestUtGetOne() == 1);

    sRet = unittestUtGetOne();
    ACT_CHECK_DESC(sRet == 1, ("unittestUtGetOne() should return 1 but %d", sRet));
}

/*
 * ACT_ERROR demonstration function
 */
void unittestUtTestError()
{
    if (unittestUtGetOne() == 1)
    {
        ACT_CHECK(unittestUtGetOne() == 1);
    }
    else
    {
        ACT_ERROR(("Error: unittestUtGetOne() should return 1 but %d", unittestUtGetOne()));
    }
}

/*
 * ACT_ASSERT and ACT_ASSERT_DESC demonstration function
 */
void unittestUtTestAssert()
{
    SInt sRet;

    ACT_ASSERT(unittestUtGetOne() == 1);

    sRet = unittestUtGetOne();
    ACT_ASSERT_DESC(sRet == 1, ("unittestUtGetOne() should return 1 but %d", sRet));
}

/*
 * ACT_DUMP and ACT_DUMP_DESC demonstration function
 */
void unittestUtTestDump()
{
    UChar sBuf[] = {'A', 'B', 'C', 'D', 'E',
                    'A', 'B', 'C', 'D', 'E',
                    'A', 'B', 'C', 'D', 'E',
                    'A', 'B', 'C', 'D', 'E',
                    'A', 'B', 'C', 'D', 'E',
                    'A', 'B', 'C', 'D', 'E',
                   };

    if (unittestUtGetOne() != 1)
    {
        ACT_DUMP(&sBuf, sizeof(sBuf));

        ACT_DUMP_DESC(&sBuf, sizeof(sBuf), ("Dump description."));
    }
}

int main()
{
    ACT_TEST_BEGIN();

    /* Run function to check ACT_CHECK ACT_CHECK_DESC use */
    unittestUtTestCheck();

    /* Run function to check ACT_ERROR use */
    unittestUtTestError();

    /* Run function to check ACT_ASSERT ACT_ASSERT_DESC use */
    unittestUtTestAssert();

    /* Run function to check ACT_DUMP ACT_DUMP_DESC use */
    unittestUtTestDump();

    ACT_TEST_END();

    return 0;
}
