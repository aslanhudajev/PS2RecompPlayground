#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADX_DecodeInfoSpsd
// Address: 0x168730 - 0x168840
void ADX_DecodeInfoSpsd_0x168730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADX_DecodeInfoSpsd");


    ctx->pc = 0x168730u;

    // 0x168730: 0x80602d
    ctx->pc = 0x168730u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168734: 0x8fae0000
    ctx->pc = 0x168734u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168738: 0x91820007
    ctx->pc = 0x168738u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 7)));
    // 0x16873c: 0x21100
    ctx->pc = 0x16873cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x168740: 0xa4c20000
    ctx->pc = 0x168740u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x168744: 0x24060001
    ctx->pc = 0x168744u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x168748: 0x91820009
    ctx->pc = 0x168748u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 9)));
    // 0x16874c: 0x8fad0008
    ctx->pc = 0x16874cu;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168750: 0x30420003
    ctx->pc = 0x168750u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
    // 0x168754: 0x8fa50010
    ctx->pc = 0x168754u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168758: 0x24420001
    ctx->pc = 0x168758u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x16875c: 0xa1420000
    ctx->pc = 0x16875cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x168760: 0x9583002a
    ctx->pc = 0x168760u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 42)));
    // 0x168764: 0xad630000
    ctx->pc = 0x168764u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x168768: 0x91840008
    ctx->pc = 0x168768u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x16876c: 0x1086001d
    ctx->pc = 0x16876Cu;
    {
        const bool branch_taken_0x16876c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 6));
        ctx->pc = 0x168770u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 2));
        if (branch_taken_0x16876c) {
            ctx->pc = 0x1687E4u;
            goto label_1687e4;
        }
    }
    ctx->pc = 0x168774u;
    // 0x168774: 0x50400005
    ctx->pc = 0x168774u;
    {
        const bool branch_taken_0x168774 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x168774) {
            ctx->pc = 0x168778u;
            SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4));
            ctx->pc = 0x16878Cu;
            goto label_16878c;
        }
    }
    ctx->pc = 0x16877Cu;
    // 0x16877c: 0x1080000e
    ctx->pc = 0x16877Cu;
    {
        const bool branch_taken_0x16877c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x168780u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x16877c) {
            ctx->pc = 0x1687B8u;
            goto label_1687b8;
        }
    }
    ctx->pc = 0x168784u;
    // 0x168784: 0x10000020
    ctx->pc = 0x168784u;
    {
        const bool branch_taken_0x168784 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x168788u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x168784) {
            ctx->pc = 0x168808u;
            goto label_168808;
        }
    }
    ctx->pc = 0x16878Cu;
label_16878c:
    // 0x16878c: 0x1040001d
    ctx->pc = 0x16878Cu;
    {
        const bool branch_taken_0x16878c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x168790u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x16878c) {
            ctx->pc = 0x168804u;
            goto label_168804;
        }
    }
    ctx->pc = 0x168794u;
    // 0x168794: 0x24040002
    ctx->pc = 0x168794u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x168798: 0xa1030000
    ctx->pc = 0x168798u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x16879c: 0x91420000
    ctx->pc = 0x16879cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1687a0: 0xa1220000
    ctx->pc = 0x1687a0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1687a4: 0xada40000
    ctx->pc = 0x1687a4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x1687a8: 0xa4a40000
    ctx->pc = 0x1687a8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1687ac: 0x8d82000c
    ctx->pc = 0x1687acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x1687b0: 0x10000013
    ctx->pc = 0x1687B0u;
    {
        const bool branch_taken_0x1687b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1687B4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x1687b0) {
            ctx->pc = 0x168800u;
            goto label_168800;
        }
    }
    ctx->pc = 0x1687B8u;
label_1687b8:
    // 0x1687b8: 0xa1030000
    ctx->pc = 0x1687b8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1687bc: 0x81420000
    ctx->pc = 0x1687bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1687c0: 0x21040
    ctx->pc = 0x1687c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1687c4: 0xa1220000
    ctx->pc = 0x1687c4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1687c8: 0xada60000
    ctx->pc = 0x1687c8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
    // 0x1687cc: 0xa4a00000
    ctx->pc = 0x1687ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1687d0: 0x8d82000c
    ctx->pc = 0x1687d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x1687d4: 0x21fc2
    ctx->pc = 0x1687d4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x1687d8: 0x431021
    ctx->pc = 0x1687d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1687dc: 0x10000008
    ctx->pc = 0x1687DCu;
    {
        const bool branch_taken_0x1687dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1687E0u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x1687dc) {
            ctx->pc = 0x168800u;
            goto label_168800;
        }
    }
    ctx->pc = 0x1687E4u;
label_1687e4:
    // 0x1687e4: 0x24020008
    ctx->pc = 0x1687e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1687e8: 0xa1020000
    ctx->pc = 0x1687e8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1687ec: 0x91430000
    ctx->pc = 0x1687ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1687f0: 0xa1230000
    ctx->pc = 0x1687f0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1687f4: 0xada40000
    ctx->pc = 0x1687f4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x1687f8: 0xa4a40000
    ctx->pc = 0x1687f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1687fc: 0x8d82000c
    ctx->pc = 0x1687fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 12)));
label_168800:
    // 0x168800: 0xadc20000
    ctx->pc = 0x168800u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
label_168804:
    // 0x168804: 0x24020002
    ctx->pc = 0x168804u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_168808:
    // 0x168808: 0x24030001
    ctx->pc = 0x168808u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16880c: 0xa1220000
    ctx->pc = 0x16880cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x168810: 0x24060010
    ctx->pc = 0x168810u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x168814: 0xada30000
    ctx->pc = 0x168814u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x168818: 0x2405ffff
    ctx->pc = 0x168818u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16881c: 0x102d
    ctx->pc = 0x16881cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168820: 0x8d83000c
    ctx->pc = 0x168820u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x168824: 0x327c2
    ctx->pc = 0x168824u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 3), 31));
    // 0x168828: 0x641821
    ctx->pc = 0x168828u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16882c: 0x31843
    ctx->pc = 0x16882cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x168830: 0xadc30000
    ctx->pc = 0x168830u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x168834: 0xa1060000
    ctx->pc = 0x168834u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x168838: 0x3e00008
    ctx->pc = 0x168838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16883Cu;
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16878Cu: goto label_16878c;
            case 0x1687B8u: goto label_1687b8;
            case 0x1687E4u: goto label_1687e4;
            case 0x168800u: goto label_168800;
            case 0x168804u: goto label_168804;
            case 0x168808u: goto label_168808;
            default: break;
        }
        return;
    }
    ctx->pc = 0x168840u;
}
