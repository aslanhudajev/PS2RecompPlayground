#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyCreateSofdec
// Address: 0x18c6a8 - 0x18c94c
void mwPlyCreateSofdec_0x18c6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyCreateSofdec");


    ctx->pc = 0x18c6a8u;

    // 0x18c6a8: 0x27bdff80
    ctx->pc = 0x18c6a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18c6ac: 0x24030002
    ctx->pc = 0x18c6acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x18c6b0: 0xffb00020
    ctx->pc = 0x18c6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x18c6b4: 0xffbf0070
    ctx->pc = 0x18c6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x18c6b8: 0x80802d
    ctx->pc = 0x18c6b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c6bc: 0xffb40060
    ctx->pc = 0x18c6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x18c6c0: 0xffb30050
    ctx->pc = 0x18c6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x18c6c4: 0xffb20040
    ctx->pc = 0x18c6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x18c6c8: 0xffb10030
    ctx->pc = 0x18c6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x18c6cc: 0x8e020000
    ctx->pc = 0x18c6ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18c6d0: 0x14430003
    ctx->pc = 0x18C6D0u;
    {
        const bool branch_taken_0x18c6d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x18C6D4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x18c6d0) {
            ctx->pc = 0x18C6E0u;
            goto label_18c6e0;
        }
    }
    ctx->pc = 0x18C6D8u;
    // 0x18c6d8: 0xc063dda
    ctx->pc = 0x18C6D8u;
    SET_GPR_U32(ctx, 31, 0x18C6E0u);
    ctx->pc = 0x18C6DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953712));
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C6E0u; }
        else if (ctx->pc != 0x18C6E0u) { ctx->pc = 0x18C6E0u; }
    }
    if (ctx->pc != 0x18C6E0u) { return; }
    ctx->pc = 0x18C6E0u;
label_18c6e0:
    // 0x18c6e0: 0xc063184
    ctx->pc = 0x18C6E0u;
    SET_GPR_U32(ctx, 31, 0x18C6E8u);
    ctx->pc = 0x18C610u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFD_GetLibWorkPtr_0x18c610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C6E8u; }
        else if (ctx->pc != 0x18C6E8u) { ctx->pc = 0x18C6E8u; }
    }
    if (ctx->pc != 0x18C6E8u) { return; }
    ctx->pc = 0x18C6E8u;
    // 0x18c6e8: 0x24541210
    ctx->pc = 0x18c6e8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4624));
    // 0x18c6ec: 0x3c020024
    ctx->pc = 0x18c6ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18c6f0: 0x24512934
    ctx->pc = 0x18c6f0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 10548));
    // 0x18c6f4: 0x8e220004
    ctx->pc = 0x18c6f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18c6f8: 0x1040000b
    ctx->pc = 0x18C6F8u;
    {
        const bool branch_taken_0x18c6f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18C6FCu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18c6f8) {
            ctx->pc = 0x18C728u;
            goto label_18c728;
        }
    }
    ctx->pc = 0x18C700u;
    // 0x18c700: 0x26250004
    ctx->pc = 0x18c700u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 4));
    // 0x18c704: 0x220202d
    ctx->pc = 0x18c704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18c708:
    // 0x18c708: 0x24630001
    ctx->pc = 0x18c708u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x18c70c: 0x24a50090
    ctx->pc = 0x18c70cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 144));
    // 0x18c710: 0x28620020
    ctx->pc = 0x18c710u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 32));
    // 0x18c714: 0x10400004
    ctx->pc = 0x18C714u;
    {
        const bool branch_taken_0x18c714 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18C718u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 144));
        if (branch_taken_0x18c714) {
            ctx->pc = 0x18C728u;
            goto label_18c728;
        }
    }
    ctx->pc = 0x18C71Cu;
    // 0x18c71c: 0x8ca20000
    ctx->pc = 0x18c71cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18c720: 0x1440fff9
    ctx->pc = 0x18C720u;
    {
        const bool branch_taken_0x18c720 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18C724u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18c720) {
            ctx->pc = 0x18C708u;
            goto label_18c708;
        }
    }
    ctx->pc = 0x18C728u;
label_18c728:
    // 0x18c728: 0x24020020
    ctx->pc = 0x18c728u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x18c72c: 0x14620006
    ctx->pc = 0x18C72Cu;
    {
        const bool branch_taken_0x18c72c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x18c72c) {
            ctx->pc = 0x18C748u;
            goto label_18c748;
        }
    }
    ctx->pc = 0x18C734u;
    // 0x18c734: 0xc0633b4
    ctx->pc = 0x18C734u;
    SET_GPR_U32(ctx, 31, 0x18C73Cu);
    ctx->pc = 0x18C738u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967285));
    ctx->pc = 0x18CED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdSetErrCode_0x18ced0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C73Cu; }
        else if (ctx->pc != 0x18C73Cu) { ctx->pc = 0x18C73Cu; }
    }
    if (ctx->pc != 0x18C73Cu) { return; }
    ctx->pc = 0x18C73Cu;
    // 0x18c73c: 0x3c04002c
    ctx->pc = 0x18c73cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18c740: 0x1000000d
    ctx->pc = 0x18C740u;
    {
        const bool branch_taken_0x18c740 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18C744u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953744));
        if (branch_taken_0x18c740) {
            ctx->pc = 0x18C778u;
            goto label_18c778;
        }
    }
    ctx->pc = 0x18C748u;
label_18c748:
    // 0x18c748: 0xc063a96
    ctx->pc = 0x18C748u;
    SET_GPR_U32(ctx, 31, 0x18C750u);
    ctx->pc = 0x18C74Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18EA58u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyCalcWorkSfd_0x18ea58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C750u; }
        else if (ctx->pc != 0x18C750u) { ctx->pc = 0x18C750u; }
    }
    if (ctx->pc != 0x18C750u) { return; }
    ctx->pc = 0x18C750u;
    // 0x18c750: 0x40902d
    ctx->pc = 0x18c750u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c754: 0x8e130014
    ctx->pc = 0x18c754u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x18c758: 0xc063a7a
    ctx->pc = 0x18C758u;
    SET_GPR_U32(ctx, 31, 0x18C760u);
    ctx->pc = 0x18C75Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18E9E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyCalcWorkCompo_0x18e9e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C760u; }
        else if (ctx->pc != 0x18C760u) { ctx->pc = 0x18C760u; }
    }
    if (ctx->pc != 0x18C760u) { return; }
    ctx->pc = 0x18C760u;
    // 0x18c760: 0x8e030018
    ctx->pc = 0x18c760u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x18c764: 0x2421021
    ctx->pc = 0x18c764u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x18c768: 0x62182a
    ctx->pc = 0x18c768u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x18c76c: 0x10600006
    ctx->pc = 0x18C76Cu;
    {
        const bool branch_taken_0x18c76c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x18C770u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x18c76c) {
            ctx->pc = 0x18C788u;
            goto label_18c788;
        }
    }
    ctx->pc = 0x18C774u;
    // 0x18c774: 0x2484cb40
    ctx->pc = 0x18c774u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953792));
label_18c778:
    // 0x18c778: 0xc063dda
    ctx->pc = 0x18C778u;
    SET_GPR_U32(ctx, 31, 0x18C780u);
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C780u; }
        else if (ctx->pc != 0x18C780u) { ctx->pc = 0x18C780u; }
    }
    if (ctx->pc != 0x18C780u) { return; }
    ctx->pc = 0x18C780u;
    // 0x18c780: 0x1000006a
    ctx->pc = 0x18C780u;
    {
        const bool branch_taken_0x18c780 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18C784u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18c780) {
            ctx->pc = 0x18C92Cu;
            goto label_18c92c;
        }
    }
    ctx->pc = 0x18C788u;
label_18c788:
    // 0x18c788: 0x9202001c
    ctx->pc = 0x18c788u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x18c78c: 0x12200005
    ctx->pc = 0x18C78Cu;
    {
        const bool branch_taken_0x18c78c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x18C790u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        if (branch_taken_0x18c78c) {
            ctx->pc = 0x18C7A4u;
            goto label_18c7a4;
        }
    }
    ctx->pc = 0x18C794u;
    // 0x18c794: 0x220202d
    ctx->pc = 0x18c794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c798: 0x24050090
    ctx->pc = 0x18c798u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 144));
    // 0x18c79c: 0xc050cfe
    ctx->pc = 0x18C79Cu;
    SET_GPR_U32(ctx, 31, 0x18C7A4u);
    ctx->pc = 0x18C7A0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C7A4u; }
        else if (ctx->pc != 0x18C7A4u) { ctx->pc = 0x18C7A4u; }
    }
    if (ctx->pc != 0x18C7A4u) { return; }
    ctx->pc = 0x18C7A4u;
label_18c7a4:
    // 0x18c7a4: 0x9202001c
    ctx->pc = 0x18c7a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x18c7a8: 0x28420007
    ctx->pc = 0x18c7a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 7));
    // 0x18c7ac: 0x54400003
    ctx->pc = 0x18C7ACu;
    {
        const bool branch_taken_0x18c7ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x18c7ac) {
            ctx->pc = 0x18C7B0u;
            SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x18C7BCu;
            goto label_18c7bc;
        }
    }
    ctx->pc = 0x18C7B4u;
    // 0x18c7b4: 0x8e02000c
    ctx->pc = 0x18c7b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18c7b8: 0x24040
    ctx->pc = 0x18c7b8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 2), 1));
label_18c7bc:
    // 0x18c7bc: 0x8e050000
    ctx->pc = 0x18c7bcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18c7c0: 0x240582d
    ctx->pc = 0x18c7c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7c4: 0x8e060004
    ctx->pc = 0x18c7c4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18c7c8: 0x260502d
    ctx->pc = 0x18c7c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7cc: 0x8e070008
    ctx->pc = 0x18c7ccu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18c7d0: 0x220202d
    ctx->pc = 0x18c7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7d4: 0xc063b18
    ctx->pc = 0x18C7D4u;
    SET_GPR_U32(ctx, 31, 0x18C7DCu);
    ctx->pc = 0x18C7D8u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x18EC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlySfdCreate_0x18ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C7DCu; }
        else if (ctx->pc != 0x18C7DCu) { ctx->pc = 0x18C7DCu; }
    }
    if (ctx->pc != 0x18C7DCu) { return; }
    ctx->pc = 0x18C7DCu;
    // 0x18c7dc: 0x40902d
    ctx->pc = 0x18c7dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7e0: 0x16400004
    ctx->pc = 0x18C7E0u;
    {
        const bool branch_taken_0x18c7e0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x18C7E4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
        if (branch_taken_0x18c7e0) {
            ctx->pc = 0x18C7F4u;
            goto label_18c7f4;
        }
    }
    ctx->pc = 0x18C7E8u;
    // 0x18c7e8: 0x3c04002c
    ctx->pc = 0x18c7e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18c7ec: 0x1000001d
    ctx->pc = 0x18C7ECu;
    {
        const bool branch_taken_0x18c7ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18C7F0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953840));
        if (branch_taken_0x18c7ec) {
            ctx->pc = 0x18C864u;
            goto label_18c864;
        }
    }
    ctx->pc = 0x18C7F4u;
label_18c7f4:
    // 0x18c7f4: 0x8e040000
    ctx->pc = 0x18c7f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18c7f8: 0x3a0302d
    ctx->pc = 0x18c7f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7fc: 0x8e050004
    ctx->pc = 0x18c7fcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18c800: 0x37a70004
    ctx->pc = 0x18c800u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 29), 4));
    // 0x18c804: 0x37a80008
    ctx->pc = 0x18c804u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 29), 8));
    // 0x18c808: 0x37a9000c
    ctx->pc = 0x18c808u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 29), 12));
    // 0x18c80c: 0x27aa0010
    ctx->pc = 0x18c80cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 29), 16));
    // 0x18c810: 0xc0639dc
    ctx->pc = 0x18C810u;
    SET_GPR_U32(ctx, 31, 0x18C818u);
    ctx->pc = 0x18C814u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 29), 20));
    ctx->pc = 0x18E770u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlySfdCalcWorkStmBuf_0x18e770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C818u; }
        else if (ctx->pc != 0x18C818u) { ctx->pc = 0x18C818u; }
    }
    if (ctx->pc != 0x18C818u) { return; }
    ctx->pc = 0x18C818u;
    // 0x18c818: 0x8e870008
    ctx->pc = 0x18c818u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x18c81c: 0x220202d
    ctx->pc = 0x18c81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c820: 0x8e860004
    ctx->pc = 0x18c820u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x18c824: 0xc063c3c
    ctx->pc = 0x18C824u;
    SET_GPR_U32(ctx, 31, 0x18C82Cu);
    ctx->pc = 0x18C828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18F0F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlySfdSetCond_0x18f0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C82Cu; }
        else if (ctx->pc != 0x18C82Cu) { ctx->pc = 0x18C82Cu; }
    }
    if (ctx->pc != 0x18C82Cu) { return; }
    ctx->pc = 0x18C82Cu;
    // 0x18c82c: 0xc063d34
    ctx->pc = 0x18C82Cu;
    SET_GPR_U32(ctx, 31, 0x18C834u);
    ctx->pc = 0x18C830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18F4D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlySfdCreateSj_0x18f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C834u; }
        else if (ctx->pc != 0x18C834u) { ctx->pc = 0x18C834u; }
    }
    if (ctx->pc != 0x18C834u) { return; }
    ctx->pc = 0x18C834u;
    // 0x18c834: 0x14400004
    ctx->pc = 0x18C834u;
    {
        const bool branch_taken_0x18c834 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18C838u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
        if (branch_taken_0x18c834) {
            ctx->pc = 0x18C848u;
            goto label_18c848;
        }
    }
    ctx->pc = 0x18C83Cu;
    // 0x18c83c: 0x3c04002c
    ctx->pc = 0x18c83cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18c840: 0x10000008
    ctx->pc = 0x18C840u;
    {
        const bool branch_taken_0x18c840 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18C844u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953880));
        if (branch_taken_0x18c840) {
            ctx->pc = 0x18C864u;
            goto label_18c864;
        }
    }
    ctx->pc = 0x18C848u;
label_18c848:
    // 0x18c848: 0x202d
    ctx->pc = 0x18c848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c84c: 0xc05efec
    ctx->pc = 0x18C84Cu;
    SET_GPR_U32(ctx, 31, 0x18C854u);
    ctx->pc = 0x18C850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17BFB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJMEM_Create_0x17bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C854u; }
        else if (ctx->pc != 0x18C854u) { ctx->pc = 0x18C854u; }
    }
    if (ctx->pc != 0x18C854u) { return; }
    ctx->pc = 0x18C854u;
    // 0x18c854: 0x14400009
    ctx->pc = 0x18C854u;
    {
        const bool branch_taken_0x18c854 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18C858u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
        if (branch_taken_0x18c854) {
            ctx->pc = 0x18C87Cu;
            goto label_18c87c;
        }
    }
    ctx->pc = 0x18C85Cu;
    // 0x18c85c: 0x3c04002c
    ctx->pc = 0x18c85cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18c860: 0x2484cbc0
    ctx->pc = 0x18c860u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953920));
label_18c864:
    // 0x18c864: 0xc063dda
    ctx->pc = 0x18C864u;
    SET_GPR_U32(ctx, 31, 0x18C86Cu);
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C86Cu; }
        else if (ctx->pc != 0x18C86Cu) { ctx->pc = 0x18C86Cu; }
    }
    if (ctx->pc != 0x18C86Cu) { return; }
    ctx->pc = 0x18C86Cu;
    // 0x18c86c: 0xc063254
    ctx->pc = 0x18C86Cu;
    SET_GPR_U32(ctx, 31, 0x18C874u);
    ctx->pc = 0x18C870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C950u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdDestroy_0x18c950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C874u; }
        else if (ctx->pc != 0x18C874u) { ctx->pc = 0x18C874u; }
    }
    if (ctx->pc != 0x18C874u) { return; }
    ctx->pc = 0x18C874u;
    // 0x18c874: 0x1000002d
    ctx->pc = 0x18C874u;
    {
        const bool branch_taken_0x18c874 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18C878u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18c874) {
            ctx->pc = 0x18C92Cu;
            goto label_18c92c;
        }
    }
    ctx->pc = 0x18C87Cu;
label_18c87c:
    // 0x18c87c: 0x8fa30000
    ctx->pc = 0x18c87cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c880: 0x3c020024
    ctx->pc = 0x18c880u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18c884: 0x24422878
    ctx->pc = 0x18c884u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10360));
    // 0x18c888: 0x24130001
    ctx->pc = 0x18c888u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c88c: 0xae230070
    ctx->pc = 0x18c88cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
    // 0x18c890: 0x240202d
    ctx->pc = 0x18c890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c894: 0xae220000
    ctx->pc = 0x18c894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x18c898: 0x24050003
    ctx->pc = 0x18c898u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18c89c: 0x6a020007
    ctx->pc = 0x18c89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18c8a0: 0x6e020000
    ctx->pc = 0x18c8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18c8a4: 0x6a03000f
    ctx->pc = 0x18c8a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18c8a8: 0x6e030008
    ctx->pc = 0x18c8a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18c8ac: 0x6a060017
    ctx->pc = 0x18c8acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18c8b0: 0x6e060010
    ctx->pc = 0x18c8b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18c8b4: 0x6a07001f
    ctx->pc = 0x18c8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18c8b8: 0x6e070018
    ctx->pc = 0x18c8b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18c8bc: 0xb2220013
    ctx->pc = 0x18c8bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18c8c0: 0xb622000c
    ctx->pc = 0x18c8c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18c8c4: 0xb223001b
    ctx->pc = 0x18c8c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 27); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18c8c8: 0xb6230014
    ctx->pc = 0x18c8c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18c8cc: 0xb2260023
    ctx->pc = 0x18c8ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 35); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18c8d0: 0xb626001c
    ctx->pc = 0x18c8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 28); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18c8d4: 0xb227002b
    ctx->pc = 0x18c8d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 43); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18c8d8: 0xb6270024
    ctx->pc = 0x18c8d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 36); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18c8dc: 0xae33002c
    ctx->pc = 0x18c8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 19));
    // 0x18c8e0: 0x2626006c
    ctx->pc = 0x18c8e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 108));
    // 0x18c8e4: 0xae200068
    ctx->pc = 0x18c8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x18c8e8: 0xae200008
    ctx->pc = 0x18c8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x18c8ec: 0x8e02001c
    ctx->pc = 0x18c8ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x18c8f0: 0xc067570
    ctx->pc = 0x18C8F0u;
    SET_GPR_U32(ctx, 31, 0x18C8F8u);
    ctx->pc = 0x18C8F4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
    ctx->pc = 0x19D5C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_GetTrHn_0x19d5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C8F8u; }
        else if (ctx->pc != 0x18C8F8u) { ctx->pc = 0x18C8F8u; }
    }
    if (ctx->pc != 0x18C8F8u) { return; }
    ctx->pc = 0x18C8F8u;
    // 0x18c8f8: 0x54400001
    ctx->pc = 0x18C8F8u;
    {
        const bool branch_taken_0x18c8f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x18c8f8) {
            ctx->pc = 0x18C8FCu;
            WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
            ctx->pc = 0x18C900u;
            goto label_18c900;
        }
    }
    ctx->pc = 0x18C900u;
label_18c900:
    // 0x18c900: 0xae330074
    ctx->pc = 0x18c900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 19));
    // 0x18c904: 0xa220007c
    ctx->pc = 0x18c904u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 124), (uint8_t)GPR_U32(ctx, 0));
    // 0x18c908: 0xa220007d
    ctx->pc = 0x18c908u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 125), (uint8_t)GPR_U32(ctx, 0));
    // 0x18c90c: 0xa220007e
    ctx->pc = 0x18c90cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 126), (uint8_t)GPR_U32(ctx, 0));
    // 0x18c910: 0xa220007f
    ctx->pc = 0x18c910u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 127), (uint8_t)GPR_U32(ctx, 0));
    // 0x18c914: 0xc05e79a
    ctx->pc = 0x18C914u;
    SET_GPR_U32(ctx, 31, 0x18C91Cu);
    ctx->pc = 0x18C918u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->pc = 0x179E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_Create_0x179e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C91Cu; }
        else if (ctx->pc != 0x18C91Cu) { ctx->pc = 0x18C91Cu; }
    }
    if (ctx->pc != 0x18C91Cu) { return; }
    ctx->pc = 0x18C91Cu;
    // 0x18c91c: 0xae220080
    ctx->pc = 0x18c91cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x18c920: 0xae330004
    ctx->pc = 0x18c920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x18c924: 0x220102d
    ctx->pc = 0x18c924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c928: 0xae200084
    ctx->pc = 0x18c928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
label_18c92c:
    // 0x18c92c: 0xdfbf0070
    ctx->pc = 0x18c92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18c930: 0xdfb40060
    ctx->pc = 0x18c930u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18c934: 0xdfb30050
    ctx->pc = 0x18c934u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18c938: 0xdfb20040
    ctx->pc = 0x18c938u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18c93c: 0xdfb10030
    ctx->pc = 0x18c93cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c940: 0xdfb00020
    ctx->pc = 0x18c940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c944: 0x3e00008
    ctx->pc = 0x18C944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C948u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18C6E0u: goto label_18c6e0;
            case 0x18C708u: goto label_18c708;
            case 0x18C728u: goto label_18c728;
            case 0x18C748u: goto label_18c748;
            case 0x18C778u: goto label_18c778;
            case 0x18C788u: goto label_18c788;
            case 0x18C7A4u: goto label_18c7a4;
            case 0x18C7BCu: goto label_18c7bc;
            case 0x18C7F4u: goto label_18c7f4;
            case 0x18C848u: goto label_18c848;
            case 0x18C864u: goto label_18c864;
            case 0x18C87Cu: goto label_18c87c;
            case 0x18C900u: goto label_18c900;
            case 0x18C92Cu: goto label_18c92c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18C94Cu;
}
