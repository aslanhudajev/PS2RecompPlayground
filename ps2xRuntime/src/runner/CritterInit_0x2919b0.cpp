#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterInit
// Address: 0x2919b0 - 0x291ad4
void CritterInit_0x2919b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2919b0u;

    // 0x2919b0: 0x27bdfff0
    ctx->pc = 0x2919b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2919b4: 0xffbf0000
    ctx->pc = 0x2919b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2919b8: 0x282d
    ctx->pc = 0x2919b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2919bc: 0x3c020036
    ctx->pc = 0x2919bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2919c0: 0x2446d4c8
    ctx->pc = 0x2919c0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294956232));
    // 0x2919c4: 0x24070018
    ctx->pc = 0x2919c4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2919c8: 0x182d
    ctx->pc = 0x2919c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2919cc: 0x0
    ctx->pc = 0x2919ccu;
    // NOP
label_2919d0:
    // 0x2919d0: 0xa72018
    ctx->pc = 0x2919d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2919d4: 0x0
    ctx->pc = 0x2919d4u;
    // NOP
label_2919d8:
    // 0x2919d8: 0x31080
    ctx->pc = 0x2919d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2919dc: 0x441021
    ctx->pc = 0x2919dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2919e0: 0x461021
    ctx->pc = 0x2919e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2919e4: 0xac400000
    ctx->pc = 0x2919e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2919e8: 0x24630001
    ctx->pc = 0x2919e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2919ec: 0x28620006
    ctx->pc = 0x2919ecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 6));
    // 0x2919f0: 0x1440fff9
    ctx->pc = 0x2919F0u;
    {
        const bool branch_taken_0x2919f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2919f0) {
            ctx->pc = 0x2919D8u;
            goto label_2919d8;
        }
    }
    ctx->pc = 0x2919F8u;
    // 0x2919f8: 0x24a50001
    ctx->pc = 0x2919f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2919fc: 0x28a20009
    ctx->pc = 0x2919fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 9));
    // 0x291a00: 0x1440fff3
    ctx->pc = 0x291A00u;
    {
        const bool branch_taken_0x291a00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x291A04u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x291a00) {
            ctx->pc = 0x2919D0u;
            goto label_2919d0;
        }
    }
    ctx->pc = 0x291A08u;
    // 0x291a08: 0x3c020036
    ctx->pc = 0x291a08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x291a0c: 0xac40d4c0
    ctx->pc = 0x291a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956224), GPR_U32(ctx, 0));
    // 0x291a10: 0x3c040035
    ctx->pc = 0x291a10u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x291a14: 0x24841dc0
    ctx->pc = 0x291a14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7616));
    // 0x291a18: 0x282d
    ctx->pc = 0x291a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291a1c: 0xc0becc6
    ctx->pc = 0x291A1Cu;
    SET_GPR_U32(ctx, 31, 0x291A24u);
    ctx->pc = 0x291A20u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 0), 46848));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291A24u; }
    }
    if (ctx->pc != 0x291A24u) { return; }
    ctx->pc = 0x291A24u;
    // 0x291a24: 0x3c020036
    ctx->pc = 0x291a24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x291a28: 0xac40d5f4
    ctx->pc = 0x291a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956532), GPR_U32(ctx, 0));
    // 0x291a2c: 0x3c040036
    ctx->pc = 0x291a2cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
    // 0x291a30: 0x2484d5a0
    ctx->pc = 0x291a30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294956448));
    // 0x291a34: 0x282d
    ctx->pc = 0x291a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291a38: 0xc0becc6
    ctx->pc = 0x291A38u;
    SET_GPR_U32(ctx, 31, 0x291A40u);
    ctx->pc = 0x291A3Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 84));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291A40u; }
    }
    if (ctx->pc != 0x291A40u) { return; }
    ctx->pc = 0x291A40u;
    // 0x291a40: 0x3c020036
    ctx->pc = 0x291a40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x291a44: 0xa440d5f8
    ctx->pc = 0x291a44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294956536), (uint16_t)GPR_U32(ctx, 0));
    // 0x291a48: 0x3c020036
    ctx->pc = 0x291a48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x291a4c: 0xac40d5fc
    ctx->pc = 0x291a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956540), GPR_U32(ctx, 0));
    // 0x291a50: 0x282d
    ctx->pc = 0x291a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291a54: 0x3c020036
    ctx->pc = 0x291a54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x291a58: 0x2447d600
    ctx->pc = 0x291a58u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294956544));
    // 0x291a5c: 0x24040050
    ctx->pc = 0x291a5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 80));
    // 0x291a60: 0x3c020036
    ctx->pc = 0x291a60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x291a64: 0x2443d740
    ctx->pc = 0x291a64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294956864));
    // 0x291a68: 0xa43018
    ctx->pc = 0x291a68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x291a6c: 0x0
    ctx->pc = 0x291a6cu;
    // NOP
label_291a70:
    // 0x291a70: 0xc71021
    ctx->pc = 0x291a70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x291a74: 0xac400000
    ctx->pc = 0x291a74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x291a78: 0x51080
    ctx->pc = 0x291a78u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x291a7c: 0x431021
    ctx->pc = 0x291a7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x291a80: 0xac400000
    ctx->pc = 0x291a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x291a84: 0x24a50001
    ctx->pc = 0x291a84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x291a88: 0x28a20004
    ctx->pc = 0x291a88u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x291a8c: 0x1440fff8
    ctx->pc = 0x291A8Cu;
    {
        const bool branch_taken_0x291a8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x291A90u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x291a8c) {
            ctx->pc = 0x291A70u;
            goto label_291a70;
        }
    }
    ctx->pc = 0x291A94u;
    // 0x291a94: 0x3c020036
    ctx->pc = 0x291a94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x291a98: 0xac40d750
    ctx->pc = 0x291a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956880), GPR_U32(ctx, 0));
    // 0x291a9c: 0x3c020036
    ctx->pc = 0x291a9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x291aa0: 0xac40d7d8
    ctx->pc = 0x291aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957016), GPR_U32(ctx, 0));
    // 0x291aa4: 0x3c030036
    ctx->pc = 0x291aa4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x291aa8: 0x2402ffff
    ctx->pc = 0x291aa8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x291aac: 0xac62d7dc
    ctx->pc = 0x291aacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957020), GPR_U32(ctx, 2));
    // 0x291ab0: 0x3c020036
    ctx->pc = 0x291ab0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x291ab4: 0xac40d7e0
    ctx->pc = 0x291ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957024), GPR_U32(ctx, 0));
    // 0x291ab8: 0x3c020036
    ctx->pc = 0x291ab8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x291abc: 0xac40d7f8
    ctx->pc = 0x291abcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957048), GPR_U32(ctx, 0));
    // 0x291ac0: 0x3c020036
    ctx->pc = 0x291ac0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x291ac4: 0xac40d804
    ctx->pc = 0x291ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957060), GPR_U32(ctx, 0));
    // 0x291ac8: 0xdfbf0000
    ctx->pc = 0x291ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291acc: 0x80a785e
    ctx->pc = 0x291ACCu;
    ctx->pc = 0x291AD0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x29E178u;
    HealthMeterInit_0x29e178(rdram, ctx, runtime); return;
    ctx->pc = 0x291AD4u;
}
