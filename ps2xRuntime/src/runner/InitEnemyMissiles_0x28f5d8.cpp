#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitEnemyMissiles
// Address: 0x28f5d8 - 0x28f708
void InitEnemyMissiles_0x28f5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28f5d8u;

    // 0x28f5d8: 0x27bdff60
    ctx->pc = 0x28f5d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x28f5dc: 0xffbf0090
    ctx->pc = 0x28f5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x28f5e0: 0xffb60080
    ctx->pc = 0x28f5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x28f5e4: 0xffb50070
    ctx->pc = 0x28f5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x28f5e8: 0xffb40060
    ctx->pc = 0x28f5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x28f5ec: 0xffb30050
    ctx->pc = 0x28f5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x28f5f0: 0xffb20040
    ctx->pc = 0x28f5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x28f5f4: 0xffb10030
    ctx->pc = 0x28f5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x28f5f8: 0xffb00020
    ctx->pc = 0x28f5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x28f5fc: 0x80a02d
    ctx->pc = 0x28f5fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f600: 0x882d
    ctx->pc = 0x28f600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f604: 0x3c020033
    ctx->pc = 0x28f604u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x28f608: 0x24423c08
    ctx->pc = 0x28f608u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15368));
    // 0x28f60c: 0x141880
    ctx->pc = 0x28f60cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 2));
    // 0x28f610: 0x629821
    ctx->pc = 0x28f610u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28f614: 0x3c020035
    ctx->pc = 0x28f614u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28f618: 0x2456e4d8
    ctx->pc = 0x28f618u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294960344));
    // 0x28f61c: 0x3c020035
    ctx->pc = 0x28f61cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28f620: 0x2455f5b0
    ctx->pc = 0x28f620u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294964656));
    // 0x28f624: 0x2402000c
    ctx->pc = 0x28f624u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x28f628: 0x2829018
    ctx->pc = 0x28f628u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28f62c: 0x8e620000
    ctx->pc = 0x28f62cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_28f630:
    // 0x28f630: 0x10400023
    ctx->pc = 0x28F630u;
    {
        const bool branch_taken_0x28f630 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28F634u;
        SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
        if (branch_taken_0x28f630) {
            ctx->pc = 0x28F6C0u;
            goto label_28f6c0;
        }
    }
    ctx->pc = 0x28F638u;
    // 0x28f638: 0xc08dbf4
    ctx->pc = 0x28F638u;
    SET_GPR_U32(ctx, 31, 0x28F640u);
    ctx->pc = 0x28F63Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x236FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyTypeDesc_0x236fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F640u; }
    }
    if (ctx->pc != 0x28F640u) { return; }
    ctx->pc = 0x28F640u;
    // 0x28f640: 0x1138c0
    ctx->pc = 0x28f640u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 17), 3));
    // 0x28f644: 0x3a0202d
    ctx->pc = 0x28f644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f648: 0x2605df58
    ctx->pc = 0x28f648u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294958936));
    // 0x28f64c: 0x40302d
    ctx->pc = 0x28f64cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f650: 0xc0b6252
    ctx->pc = 0x28F650u;
    SET_GPR_U32(ctx, 31, 0x28F658u);
    ctx->pc = 0x28F654u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 22)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F658u; }
    }
    if (ctx->pc != 0x28F658u) { return; }
    ctx->pc = 0x28F658u;
    // 0x28f658: 0x83a20000
    ctx->pc = 0x28f658u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f65c: 0x1040000f
    ctx->pc = 0x28F65Cu;
    {
        const bool branch_taken_0x28f65c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28F660u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28f65c) {
            ctx->pc = 0x28F69Cu;
            goto label_28f69c;
        }
    }
    ctx->pc = 0x28F664u;
    // 0x28f664: 0x3c02003c
    ctx->pc = 0x28f664u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x28f668: 0x2446a781
    ctx->pc = 0x28f668u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294944641));
    // 0x28f66c: 0x80a20000
    ctx->pc = 0x28f66cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28f670: 0x461821
    ctx->pc = 0x28f670u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x28f674: 0x0
    ctx->pc = 0x28f674u;
    // NOP
label_28f678:
    // 0x28f678: 0x90630000
    ctx->pc = 0x28f678u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28f67c: 0x30630002
    ctx->pc = 0x28f67cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2));
    // 0x28f680: 0x2444ffe0
    ctx->pc = 0x28f680u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x28f684: 0x83100b
    ctx->pc = 0x28f684u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x28f688: 0xa0a20000
    ctx->pc = 0x28f688u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28f68c: 0x24a50001
    ctx->pc = 0x28f68cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x28f690: 0x80a20000
    ctx->pc = 0x28f690u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28f694: 0x1440fff8
    ctx->pc = 0x28F694u;
    {
        const bool branch_taken_0x28f694 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28F698u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        if (branch_taken_0x28f694) {
            ctx->pc = 0x28F678u;
            goto label_28f678;
        }
    }
    ctx->pc = 0x28F69Cu;
label_28f69c:
    // 0x28f69c: 0x8e640000
    ctx->pc = 0x28f69cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28f6a0: 0x3a0282d
    ctx->pc = 0x28f6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f6a4: 0xc0847fc
    ctx->pc = 0x28F6A4u;
    SET_GPR_U32(ctx, 31, 0x28F6ACu);
    ctx->pc = 0x28F6A8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F6ACu; }
    }
    if (ctx->pc != 0x28F6ACu) { return; }
    ctx->pc = 0x28F6ACu;
    // 0x28f6ac: 0x111880
    ctx->pc = 0x28f6acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x28f6b0: 0x721821
    ctx->pc = 0x28f6b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x28f6b4: 0x751821
    ctx->pc = 0x28f6b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x28f6b8: 0x10000005
    ctx->pc = 0x28F6B8u;
    {
        const bool branch_taken_0x28f6b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28F6BCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x28f6b8) {
            ctx->pc = 0x28F6D0u;
            goto label_28f6d0;
        }
    }
    ctx->pc = 0x28F6C0u;
label_28f6c0:
    // 0x28f6c0: 0x111080
    ctx->pc = 0x28f6c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x28f6c4: 0x521021
    ctx->pc = 0x28f6c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x28f6c8: 0x551021
    ctx->pc = 0x28f6c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x28f6cc: 0xac400000
    ctx->pc = 0x28f6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_28f6d0:
    // 0x28f6d0: 0x26310001
    ctx->pc = 0x28f6d0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x28f6d4: 0x2a220003
    ctx->pc = 0x28f6d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 3));
    // 0x28f6d8: 0x5440ffd5
    ctx->pc = 0x28F6D8u;
    {
        const bool branch_taken_0x28f6d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28f6d8) {
            ctx->pc = 0x28F6DCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->pc = 0x28F630u;
            goto label_28f630;
        }
    }
    ctx->pc = 0x28F6E0u;
    // 0x28f6e0: 0xdfbf0090
    ctx->pc = 0x28f6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28f6e4: 0xdfb60080
    ctx->pc = 0x28f6e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28f6e8: 0xdfb50070
    ctx->pc = 0x28f6e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28f6ec: 0xdfb40060
    ctx->pc = 0x28f6ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28f6f0: 0xdfb30050
    ctx->pc = 0x28f6f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28f6f4: 0xdfb20040
    ctx->pc = 0x28f6f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28f6f8: 0xdfb10030
    ctx->pc = 0x28f6f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f6fc: 0xdfb00020
    ctx->pc = 0x28f6fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f700: 0x3e00008
    ctx->pc = 0x28F700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F704u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28F630u: goto label_28f630;
            case 0x28F678u: goto label_28f678;
            case 0x28F69Cu: goto label_28f69c;
            case 0x28F6C0u: goto label_28f6c0;
            case 0x28F6D0u: goto label_28f6d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28F708u;
}
