#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPVP_SearchPsc
// Address: 0x19a5e8 - 0x19a784
void SFMPVP_SearchPsc_0x19a5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPVP_SearchPsc");


    ctx->pc = 0x19a5e8u;

    // 0x19a5e8: 0x27bdffb0
    ctx->pc = 0x19a5e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19a5ec: 0x382d
    ctx->pc = 0x19a5ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a5f0: 0xffb20030
    ctx->pc = 0x19a5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x19a5f4: 0xffb10020
    ctx->pc = 0x19a5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x19a5f8: 0xa0902d
    ctx->pc = 0x19a5f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a5fc: 0xffb00010
    ctx->pc = 0x19a5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19a600: 0xc0882d
    ctx->pc = 0x19a600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a604: 0xffbf0040
    ctx->pc = 0x19a604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19a608: 0x24903d10
    ctx->pc = 0x19a608u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 15632));
    // 0x19a60c: 0x2a280004
    ctx->pc = 0x19a60cu;
    SET_GPR_U32(ctx, 8, SLT32(GPR_S32(ctx, 17), 4));
    // 0x19a610: 0x24040003
    ctx->pc = 0x19a610u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x19a614: 0x8e030004
    ctx->pc = 0x19a614u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19a618: 0x228200b
    ctx->pc = 0x19a618u;
    if (GPR_U32(ctx, 8) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 17));
    // 0x19a61c: 0x8e02000c
    ctx->pc = 0x19a61cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19a620: 0x8e050008
    ctx->pc = 0x19a620u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19a624: 0x92060010
    ctx->pc = 0x19a624u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19a628: 0x431021
    ctx->pc = 0x19a628u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19a62c: 0xae02000c
    ctx->pc = 0x19a62cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x19a630: 0xae050004
    ctx->pc = 0x19a630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x19a634: 0xae000008
    ctx->pc = 0x19a634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x19a638: 0xa3a60000
    ctx->pc = 0x19a638u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x19a63c: 0x92020011
    ctx->pc = 0x19a63cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x19a640: 0xa3a20001
    ctx->pc = 0x19a640u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x19a644: 0x92030012
    ctx->pc = 0x19a644u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x19a648: 0xa3a30002
    ctx->pc = 0x19a648u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x19a64c: 0x92420000
    ctx->pc = 0x19a64cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19a650: 0xa3a20003
    ctx->pc = 0x19a650u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x19a654: 0x92430001
    ctx->pc = 0x19a654u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x19a658: 0xa3a30004
    ctx->pc = 0x19a658u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x19a65c: 0x92420002
    ctx->pc = 0x19a65cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x19a660: 0x1880001e
    ctx->pc = 0x19A660u;
    {
        const bool branch_taken_0x19a660 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x19A664u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x19a660) {
            ctx->pc = 0x19A6DCu;
            goto label_19a6dc;
        }
    }
    ctx->pc = 0x19A668u;
    // 0x19a668: 0x2a260003
    ctx->pc = 0x19a668u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 17), 3));
    // 0x19a66c: 0x3a71021
    ctx->pc = 0x19a66cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
label_19a670:
    // 0x19a670: 0x90430000
    ctx->pc = 0x19a670u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a674: 0x14600011
    ctx->pc = 0x19A674u;
    {
        const bool branch_taken_0x19a674 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x19A678u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x19a674) {
            ctx->pc = 0x19A6BCu;
            goto label_19a6bc;
        }
    }
    ctx->pc = 0x19A67Cu;
    // 0x19a67c: 0x3a51021
    ctx->pc = 0x19a67cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x19a680: 0x90430000
    ctx->pc = 0x19a680u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a684: 0x1460000e
    ctx->pc = 0x19A684u;
    {
        const bool branch_taken_0x19a684 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x19A688u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x19a684) {
            ctx->pc = 0x19A6C0u;
            goto label_19a6c0;
        }
    }
    ctx->pc = 0x19A68Cu;
    // 0x19a68c: 0xfd1021
    ctx->pc = 0x19a68cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x19a690: 0x24040001
    ctx->pc = 0x19a690u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a694: 0x90430002
    ctx->pc = 0x19a694u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x19a698: 0x54640009
    ctx->pc = 0x19A698u;
    {
        const bool branch_taken_0x19a698 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x19a698) {
            ctx->pc = 0x19A69Cu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
            ctx->pc = 0x19A6C0u;
            goto label_19a6c0;
        }
    }
    ctx->pc = 0x19A6A0u;
    // 0x19a6a0: 0x90430003
    ctx->pc = 0x19a6a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x19a6a4: 0x14600006
    ctx->pc = 0x19A6A4u;
    {
        const bool branch_taken_0x19a6a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x19A6A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x19a6a4) {
            ctx->pc = 0x19A6C0u;
            goto label_19a6c0;
        }
    }
    ctx->pc = 0x19A6ACu;
    // 0x19a6ac: 0x8e020008
    ctx->pc = 0x19a6acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19a6b0: 0x24420001
    ctx->pc = 0x19a6b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x19a6b4: 0x1000000a
    ctx->pc = 0x19A6B4u;
    {
        const bool branch_taken_0x19a6b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19A6B8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x19a6b4) {
            ctx->pc = 0x19A6E0u;
            goto label_19a6e0;
        }
    }
    ctx->pc = 0x19A6BCu;
label_19a6bc:
    // 0x19a6bc: 0x24020003
    ctx->pc = 0x19a6bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_19a6c0:
    // 0x19a6c0: 0xa0382d
    ctx->pc = 0x19a6c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a6c4: 0x228100b
    ctx->pc = 0x19a6c4u;
    if (GPR_U32(ctx, 8) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 17));
    // 0x19a6c8: 0xe2102a
    ctx->pc = 0x19a6c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 2)));
    // 0x19a6cc: 0x1440ffe8
    ctx->pc = 0x19A6CCu;
    {
        const bool branch_taken_0x19a6cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19A6D0u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
        if (branch_taken_0x19a6cc) {
            ctx->pc = 0x19A670u;
            goto label_19a670;
        }
    }
    ctx->pc = 0x19A6D4u;
    // 0x19a6d4: 0x10000002
    ctx->pc = 0x19A6D4u;
    {
        const bool branch_taken_0x19a6d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x19a6d4) {
            ctx->pc = 0x19A6E0u;
            goto label_19a6e0;
        }
    }
    ctx->pc = 0x19A6DCu;
label_19a6dc:
    // 0x19a6dc: 0x2a260003
    ctx->pc = 0x19a6dcu;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 17), 3));
label_19a6e0:
    // 0x19a6e0: 0x10c0000a
    ctx->pc = 0x19A6E0u;
    {
        const bool branch_taken_0x19a6e0 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x19A6E4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
        if (branch_taken_0x19a6e0) {
            ctx->pc = 0x19A70Cu;
            goto label_19a70c;
        }
    }
    ctx->pc = 0x19A6E8u;
    // 0x19a6e8: 0x23d2021
    ctx->pc = 0x19a6e8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x19a6ec: 0x90430000
    ctx->pc = 0x19a6ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a6f0: 0x80282d
    ctx->pc = 0x19a6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a6f4: 0xa2030010
    ctx->pc = 0x19a6f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x19a6f8: 0x90820001
    ctx->pc = 0x19a6f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x19a6fc: 0xa2020011
    ctx->pc = 0x19a6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x19a700: 0x90a30002
    ctx->pc = 0x19a700u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x19a704: 0x10000011
    ctx->pc = 0x19A704u;
    {
        const bool branch_taken_0x19a704 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19A708u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x19a704) {
            ctx->pc = 0x19A74Cu;
            goto label_19a74c;
        }
    }
    ctx->pc = 0x19A70Cu;
label_19a70c:
    // 0x19a70c: 0x2322021
    ctx->pc = 0x19a70cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x19a710: 0x9082fffd
    ctx->pc = 0x19a710u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967293)));
    // 0x19a714: 0xa2020010
    ctx->pc = 0x19a714u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x19a718: 0x9083fffe
    ctx->pc = 0x19a718u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967294)));
    // 0x19a71c: 0xa2030011
    ctx->pc = 0x19a71cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x19a720: 0x9082ffff
    ctx->pc = 0x19a720u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x19a724: 0x10000009
    ctx->pc = 0x19A724u;
    {
        const bool branch_taken_0x19a724 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19A728u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x19a724) {
            ctx->pc = 0x19A74Cu;
            goto label_19a74c;
        }
    }
    ctx->pc = 0x19A72Cu;
    // 0x19a72c: 0x0
    ctx->pc = 0x19a72cu;
    // NOP
label_19a730:
    // 0x19a730: 0x24c60004
    ctx->pc = 0x19a730u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    // 0x19a734: 0xd21823
    ctx->pc = 0x19a734u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x19a738: 0x24420001
    ctx->pc = 0x19a738u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x19a73c: 0x2238823
    ctx->pc = 0x19a73cu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x19a740: 0xae020008
    ctx->pc = 0x19a740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x19a744: 0xc0902d
    ctx->pc = 0x19a744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a748: 0x2a280004
    ctx->pc = 0x19a748u;
    SET_GPR_U32(ctx, 8, SLT32(GPR_S32(ctx, 17), 4));
label_19a74c:
    // 0x19a74c: 0x15000007
    ctx->pc = 0x19A74Cu;
    {
        const bool branch_taken_0x19a74c = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x19A750u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19a74c) {
            ctx->pc = 0x19A76Cu;
            goto label_19a76c;
        }
    }
    ctx->pc = 0x19A754u;
    // 0x19a754: 0x220282d
    ctx->pc = 0x19a754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a758: 0xc061676
    ctx->pc = 0x19A758u;
    SET_GPR_U32(ctx, 31, 0x19A760u);
    ctx->pc = 0x19A75Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1859D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_SearchDelim_0x1859d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A760u; }
        else if (ctx->pc != 0x19A760u) { ctx->pc = 0x19A760u; }
    }
    if (ctx->pc != 0x19A760u) { return; }
    ctx->pc = 0x19A760u;
    // 0x19a760: 0x40302d
    ctx->pc = 0x19a760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a764: 0x54c0fff2
    ctx->pc = 0x19A764u;
    {
        const bool branch_taken_0x19a764 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x19a764) {
            ctx->pc = 0x19A768u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x19A730u;
            goto label_19a730;
        }
    }
    ctx->pc = 0x19A76Cu;
label_19a76c:
    // 0x19a76c: 0xdfbf0040
    ctx->pc = 0x19a76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a770: 0xdfb20030
    ctx->pc = 0x19a770u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a774: 0xdfb10020
    ctx->pc = 0x19a774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a778: 0xdfb00010
    ctx->pc = 0x19a778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a77c: 0x3e00008
    ctx->pc = 0x19A77Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A780u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19A670u: goto label_19a670;
            case 0x19A6BCu: goto label_19a6bc;
            case 0x19A6C0u: goto label_19a6c0;
            case 0x19A6DCu: goto label_19a6dc;
            case 0x19A6E0u: goto label_19a6e0;
            case 0x19A70Cu: goto label_19a70c;
            case 0x19A730u: goto label_19a730;
            case 0x19A74Cu: goto label_19a74c;
            case 0x19A76Cu: goto label_19a76c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19A784u;
}
