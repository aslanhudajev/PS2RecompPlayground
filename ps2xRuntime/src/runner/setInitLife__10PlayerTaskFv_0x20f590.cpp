#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setInitLife__10PlayerTaskFv
// Address: 0x20f590 - 0x20f710
void setInitLife__10PlayerTaskFv_0x20f590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setInitLife__10PlayerTaskFv");


    ctx->pc = 0x20f590u;

    // 0x20f590: 0x3c010050
    ctx->pc = 0x20f590u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20f594: 0x8425e504
    ctx->pc = 0x20f594u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x20f598: 0x2403000a
    ctx->pc = 0x20f598u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x20f59c: 0x14a3004e
    ctx->pc = 0x20F59Cu;
    {
        const bool branch_taken_0x20f59c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x20f59c) {
            ctx->pc = 0x20F6D8u;
            goto label_20f6d8;
        }
    }
    ctx->pc = 0x20F5A4u;
    // 0x20f5a4: 0x8f868bcc
    ctx->pc = 0x20f5a4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x20f5a8: 0x24030002
    ctx->pc = 0x20f5a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20f5ac: 0x10c30046
    ctx->pc = 0x20F5ACu;
    {
        const bool branch_taken_0x20f5ac = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        if (branch_taken_0x20f5ac) {
            ctx->pc = 0x20F6C8u;
            goto label_20f6c8;
        }
    }
    ctx->pc = 0x20F5B4u;
    // 0x20f5b4: 0x24050001
    ctx->pc = 0x20f5b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f5b8: 0x10c50006
    ctx->pc = 0x20F5B8u;
    {
        const bool branch_taken_0x20f5b8 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 5));
        if (branch_taken_0x20f5b8) {
            ctx->pc = 0x20F5D4u;
            goto label_20f5d4;
        }
    }
    ctx->pc = 0x20F5C0u;
    // 0x20f5c0: 0x3c010050
    ctx->pc = 0x20f5c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20f5c4: 0x8025fec1
    ctx->pc = 0x20f5c4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966977)));
    // 0x20f5c8: 0x8c831cbc
    ctx->pc = 0x20f5c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20f5cc: 0x10000046
    ctx->pc = 0x20F5CCu;
    {
        const bool branch_taken_0x20f5cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F5D0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 5));
        if (branch_taken_0x20f5cc) {
            ctx->pc = 0x20F6E8u;
            goto label_20f6e8;
        }
    }
    ctx->pc = 0x20F5D4u;
label_20f5d4:
    // 0x20f5d4: 0x8c851cbc
    ctx->pc = 0x20f5d4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20f5d8: 0x24060003
    ctx->pc = 0x20f5d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x20f5dc: 0xaca60044
    ctx->pc = 0x20f5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 6));
label_20f5e0:
    // 0x20f5e0: 0x8c871cb8
    ctx->pc = 0x20f5e0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 7352)));
    // 0x20f5e4: 0x3c050050
    ctx->pc = 0x20f5e4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)80 << 16));
    // 0x20f5e8: 0x24a6fc80
    ctx->pc = 0x20f5e8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 5), 4294966400));
    // 0x20f5ec: 0x24050020
    ctx->pc = 0x20f5ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x20f5f0: 0x73880
    ctx->pc = 0x20f5f0u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 2));
    // 0x20f5f4: 0xc73021
    ctx->pc = 0x20f5f4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x20f5f8: 0x663021
    ctx->pc = 0x20f5f8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x20f5fc: 0x80c60000
    ctx->pc = 0x20f5fcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20f600: 0x10c50017
    ctx->pc = 0x20F600u;
    {
        const bool branch_taken_0x20f600 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 5));
        if (branch_taken_0x20f600) {
            ctx->pc = 0x20F660u;
            goto label_20f660;
        }
    }
    ctx->pc = 0x20F608u;
    // 0x20f608: 0x2405001f
    ctx->pc = 0x20f608u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 31));
    // 0x20f60c: 0x10c5000b
    ctx->pc = 0x20F60Cu;
    {
        const bool branch_taken_0x20f60c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 5));
        if (branch_taken_0x20f60c) {
            ctx->pc = 0x20F63Cu;
            goto label_20f63c;
        }
    }
    ctx->pc = 0x20F614u;
    // 0x20f614: 0x2405001e
    ctx->pc = 0x20f614u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 30));
    // 0x20f618: 0x10c50003
    ctx->pc = 0x20F618u;
    {
        const bool branch_taken_0x20f618 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 5));
        if (branch_taken_0x20f618) {
            ctx->pc = 0x20F628u;
            goto label_20f628;
        }
    }
    ctx->pc = 0x20F620u;
    // 0x20f620: 0x10000024
    ctx->pc = 0x20F620u;
    {
        const bool branch_taken_0x20f620 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F624u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x20f620) {
            ctx->pc = 0x20F6B4u;
            goto label_20f6b4;
        }
    }
    ctx->pc = 0x20F628u;
label_20f628:
    // 0x20f628: 0x8c861cbc
    ctx->pc = 0x20f628u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20f62c: 0x8cc50044
    ctx->pc = 0x20f62cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x20f630: 0x24a50001
    ctx->pc = 0x20f630u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x20f634: 0x1000001e
    ctx->pc = 0x20F634u;
    {
        const bool branch_taken_0x20f634 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F638u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 5));
        if (branch_taken_0x20f634) {
            ctx->pc = 0x20F6B0u;
            goto label_20f6b0;
        }
    }
    ctx->pc = 0x20F63Cu;
label_20f63c:
    // 0x20f63c: 0x8c861cbc
    ctx->pc = 0x20f63cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20f640: 0x8cc50044
    ctx->pc = 0x20f640u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x20f644: 0x24a50001
    ctx->pc = 0x20f644u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x20f648: 0xacc50044
    ctx->pc = 0x20f648u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 5));
    // 0x20f64c: 0x8c861cbc
    ctx->pc = 0x20f64cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20f650: 0x8cc50044
    ctx->pc = 0x20f650u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x20f654: 0x24a50001
    ctx->pc = 0x20f654u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x20f658: 0x10000015
    ctx->pc = 0x20F658u;
    {
        const bool branch_taken_0x20f658 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F65Cu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 5));
        if (branch_taken_0x20f658) {
            ctx->pc = 0x20F6B0u;
            goto label_20f6b0;
        }
    }
    ctx->pc = 0x20F660u;
label_20f660:
    // 0x20f660: 0x8c861cbc
    ctx->pc = 0x20f660u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20f664: 0x8cc50044
    ctx->pc = 0x20f664u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x20f668: 0x24a50001
    ctx->pc = 0x20f668u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x20f66c: 0xacc50044
    ctx->pc = 0x20f66cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 5));
    // 0x20f670: 0x8c861cbc
    ctx->pc = 0x20f670u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20f674: 0x8cc50044
    ctx->pc = 0x20f674u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x20f678: 0x24a50001
    ctx->pc = 0x20f678u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x20f67c: 0xacc50044
    ctx->pc = 0x20f67cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 5));
    // 0x20f680: 0x8c861cbc
    ctx->pc = 0x20f680u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20f684: 0x8cc50044
    ctx->pc = 0x20f684u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x20f688: 0x24a50001
    ctx->pc = 0x20f688u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x20f68c: 0xacc50044
    ctx->pc = 0x20f68cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 5));
    // 0x20f690: 0x8c861cbc
    ctx->pc = 0x20f690u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20f694: 0x8cc50044
    ctx->pc = 0x20f694u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x20f698: 0x24a50001
    ctx->pc = 0x20f698u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x20f69c: 0xacc50044
    ctx->pc = 0x20f69cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 5));
    // 0x20f6a0: 0x8c861cbc
    ctx->pc = 0x20f6a0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20f6a4: 0x8cc50044
    ctx->pc = 0x20f6a4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x20f6a8: 0x24a50001
    ctx->pc = 0x20f6a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x20f6ac: 0xacc50044
    ctx->pc = 0x20f6acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 5));
label_20f6b0:
    // 0x20f6b0: 0x24630001
    ctx->pc = 0x20f6b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_20f6b4:
    // 0x20f6b4: 0x2c610004
    ctx->pc = 0x20f6b4u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 4));
    // 0x20f6b8: 0x1420ffc9
    ctx->pc = 0x20F6B8u;
    {
        const bool branch_taken_0x20f6b8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x20f6b8) {
            ctx->pc = 0x20F5E0u;
            goto label_20f5e0;
        }
    }
    ctx->pc = 0x20F6C0u;
    // 0x20f6c0: 0x1000000a
    ctx->pc = 0x20F6C0u;
    {
        const bool branch_taken_0x20f6c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F6C4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
        if (branch_taken_0x20f6c0) {
            ctx->pc = 0x20F6ECu;
            goto label_20f6ec;
        }
    }
    ctx->pc = 0x20F6C8u;
label_20f6c8:
    // 0x20f6c8: 0x8c831cbc
    ctx->pc = 0x20f6c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20f6cc: 0x24050003
    ctx->pc = 0x20f6ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x20f6d0: 0x10000005
    ctx->pc = 0x20F6D0u;
    {
        const bool branch_taken_0x20f6d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F6D4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 5));
        if (branch_taken_0x20f6d0) {
            ctx->pc = 0x20F6E8u;
            goto label_20f6e8;
        }
    }
    ctx->pc = 0x20F6D8u;
label_20f6d8:
    // 0x20f6d8: 0x3c010050
    ctx->pc = 0x20f6d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20f6dc: 0x8025fec1
    ctx->pc = 0x20f6dcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966977)));
    // 0x20f6e0: 0x8c831cbc
    ctx->pc = 0x20f6e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20f6e4: 0xac650044
    ctx->pc = 0x20f6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 5));
label_20f6e8:
    // 0x20f6e8: 0x8c831cbc
    ctx->pc = 0x20f6e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
label_20f6ec:
    // 0x20f6ec: 0x8c640040
    ctx->pc = 0x20f6ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x20f6f0: 0x24650044
    ctx->pc = 0x20f6f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 68));
    // 0x20f6f4: 0x8c630044
    ctx->pc = 0x20f6f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x20f6f8: 0x83182a
    ctx->pc = 0x20f6f8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x20f6fc: 0x10600002
    ctx->pc = 0x20F6FCu;
    {
        const bool branch_taken_0x20f6fc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20f6fc) {
            ctx->pc = 0x20F708u;
            goto label_20f708;
        }
    }
    ctx->pc = 0x20F704u;
    // 0x20f704: 0xaca40000
    ctx->pc = 0x20f704u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_20f708:
    // 0x20f708: 0x3e00008
    ctx->pc = 0x20F708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F5D4u: goto label_20f5d4;
            case 0x20F5E0u: goto label_20f5e0;
            case 0x20F628u: goto label_20f628;
            case 0x20F63Cu: goto label_20f63c;
            case 0x20F660u: goto label_20f660;
            case 0x20F6B0u: goto label_20f6b0;
            case 0x20F6B4u: goto label_20f6b4;
            case 0x20F6C8u: goto label_20f6c8;
            case 0x20F6D8u: goto label_20f6d8;
            case 0x20F6E8u: goto label_20f6e8;
            case 0x20F6ECu: goto label_20f6ec;
            case 0x20F708u: goto label_20f708;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20F710u;
}
