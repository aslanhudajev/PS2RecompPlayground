#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _pow5mult
// Address: 0x130510 - 0x130610
void _pow5mult_0x130510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130510u;

    // 0x130510: 0x27bdffb0
    ctx->pc = 0x130510u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x130514: 0xffb10010
    ctx->pc = 0x130514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x130518: 0xffb30030
    ctx->pc = 0x130518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x13051c: 0xc0882d
    ctx->pc = 0x13051cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130520: 0xffb20020
    ctx->pc = 0x130520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x130524: 0x80982d
    ctx->pc = 0x130524u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130528: 0xffbf0040
    ctx->pc = 0x130528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13052c: 0x32230003
    ctx->pc = 0x13052cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), 3));
    // 0x130530: 0xffb00000
    ctx->pc = 0x130530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130534: 0x1060000a
    ctx->pc = 0x130534u;
    {
        const bool branch_taken_0x130534 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x130538u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x130534) {
            ctx->pc = 0x130560u;
            goto label_130560;
        }
    }
    ctx->pc = 0x13053Cu;
    // 0x13053c: 0x2463ffff
    ctx->pc = 0x13053cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x130540: 0x3c020017
    ctx->pc = 0x130540u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
    // 0x130544: 0x24425990
    ctx->pc = 0x130544u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22928));
    // 0x130548: 0x31880
    ctx->pc = 0x130548u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x13054c: 0x621821
    ctx->pc = 0x13054cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x130550: 0x8c660000
    ctx->pc = 0x130550u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x130554: 0xc04bfc0
    ctx->pc = 0x130554u;
    SET_GPR_U32(ctx, 31, 0x13055Cu);
    ctx->pc = 0x130558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12FF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x12ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13055Cu; }
    }
    if (ctx->pc != 0x13055Cu) { return; }
    ctx->pc = 0x13055Cu;
    // 0x13055c: 0x40902d
    ctx->pc = 0x13055cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_130560:
    // 0x130560: 0x118883
    ctx->pc = 0x130560u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 2));
    // 0x130564: 0x12200023
    ctx->pc = 0x130564u;
    {
        const bool branch_taken_0x130564 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x130568u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x130564) {
            ctx->pc = 0x1305F4u;
            goto label_1305f4;
        }
    }
    ctx->pc = 0x13056Cu;
    // 0x13056c: 0x8e700048
    ctx->pc = 0x13056cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x130570: 0x16000013
    ctx->pc = 0x130570u;
    {
        const bool branch_taken_0x130570 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x130574u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x130570) {
            ctx->pc = 0x1305C0u;
            goto label_1305c0;
        }
    }
    ctx->pc = 0x130578u;
    // 0x130578: 0x260202d
    ctx->pc = 0x130578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13057c: 0xc04c0aa
    ctx->pc = 0x13057Cu;
    SET_GPR_U32(ctx, 31, 0x130584u);
    ctx->pc = 0x130580u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 625));
    ctx->pc = 0x1302A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _i2b_0x1302a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130584u; }
    }
    if (ctx->pc != 0x130584u) { return; }
    ctx->pc = 0x130584u;
    // 0x130584: 0x40802d
    ctx->pc = 0x130584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130588: 0xae620048
    ctx->pc = 0x130588u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    // 0x13058c: 0x1000000b
    ctx->pc = 0x13058Cu;
    {
        const bool branch_taken_0x13058c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x130590u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x13058c) {
            ctx->pc = 0x1305BCu;
            goto label_1305bc;
        }
    }
    ctx->pc = 0x130594u;
    // 0x130594: 0x0
    ctx->pc = 0x130594u;
    // NOP
label_130598:
    // 0x130598: 0x54400008
    ctx->pc = 0x130598u;
    {
        const bool branch_taken_0x130598 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x130598) {
            ctx->pc = 0x13059Cu;
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x1305BCu;
            goto label_1305bc;
        }
    }
    ctx->pc = 0x1305A0u;
    // 0x1305a0: 0x260202d
    ctx->pc = 0x1305a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305a4: 0x200282d
    ctx->pc = 0x1305a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305a8: 0xc04c0b8
    ctx->pc = 0x1305A8u;
    SET_GPR_U32(ctx, 31, 0x1305B0u);
    ctx->pc = 0x1305ACu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1302E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multiply_0x1302e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1305B0u; }
    }
    if (ctx->pc != 0x1305B0u) { return; }
    ctx->pc = 0x1305B0u;
    // 0x1305b0: 0xae020000
    ctx->pc = 0x1305b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1305b4: 0xac400000
    ctx->pc = 0x1305b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1305b8: 0x40802d
    ctx->pc = 0x1305b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1305bc:
    // 0x1305bc: 0x32220001
    ctx->pc = 0x1305bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
label_1305c0:
    // 0x1305c0: 0x10400008
    ctx->pc = 0x1305C0u;
    {
        const bool branch_taken_0x1305c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1305C4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1305c0) {
            ctx->pc = 0x1305E4u;
            goto label_1305e4;
        }
    }
    ctx->pc = 0x1305C8u;
    // 0x1305c8: 0x260202d
    ctx->pc = 0x1305c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305cc: 0xc04c0b8
    ctx->pc = 0x1305CCu;
    SET_GPR_U32(ctx, 31, 0x1305D4u);
    ctx->pc = 0x1305D0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1302E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multiply_0x1302e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1305D4u; }
    }
    if (ctx->pc != 0x1305D4u) { return; }
    ctx->pc = 0x1305D4u;
    // 0x1305d4: 0x240282d
    ctx->pc = 0x1305d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305d8: 0x260202d
    ctx->pc = 0x1305d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305dc: 0xc04bfb4
    ctx->pc = 0x1305DCu;
    SET_GPR_U32(ctx, 31, 0x1305E4u);
    ctx->pc = 0x1305E0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12FED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x12fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1305E4u; }
    }
    if (ctx->pc != 0x1305E4u) { return; }
    ctx->pc = 0x1305E4u;
label_1305e4:
    // 0x1305e4: 0x118843
    ctx->pc = 0x1305e4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x1305e8: 0x5620ffeb
    ctx->pc = 0x1305E8u;
    {
        const bool branch_taken_0x1305e8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x1305e8) {
            ctx->pc = 0x1305ECu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x130598u;
            goto label_130598;
        }
    }
    ctx->pc = 0x1305F0u;
    // 0x1305f0: 0x240102d
    ctx->pc = 0x1305f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1305f4:
    // 0x1305f4: 0xdfbf0040
    ctx->pc = 0x1305f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1305f8: 0xdfb30030
    ctx->pc = 0x1305f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1305fc: 0xdfb20020
    ctx->pc = 0x1305fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130600: 0xdfb10010
    ctx->pc = 0x130600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130604: 0xdfb00000
    ctx->pc = 0x130604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130608: 0x3e00008
    ctx->pc = 0x130608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13060Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130560u: goto label_130560;
            case 0x130598u: goto label_130598;
            case 0x1305BCu: goto label_1305bc;
            case 0x1305C0u: goto label_1305c0;
            case 0x1305E4u: goto label_1305e4;
            case 0x1305F4u: goto label_1305f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130610u;
}
