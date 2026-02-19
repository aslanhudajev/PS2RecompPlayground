#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: cam_orient_to
// Address: 0x269d80 - 0x269e2c
void cam_orient_to_0x269d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x269d80u;

    // 0x269d80: 0x27bdffb0
    ctx->pc = 0x269d80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x269d84: 0xffbf0040
    ctx->pc = 0x269d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x269d88: 0xffb00030
    ctx->pc = 0x269d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x269d8c: 0x241001a0
    ctx->pc = 0x269d8cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 416));
    // 0x269d90: 0x908018
    ctx->pc = 0x269d90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x269d94: 0x3c020034
    ctx->pc = 0x269d94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269d98: 0x2442eb60
    ctx->pc = 0x269d98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x269d9c: 0x2028021
    ctx->pc = 0x269d9cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x269da0: 0xc6000070
    ctx->pc = 0x269da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269da4: 0xe7a00010
    ctx->pc = 0x269da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x269da8: 0xc6000074
    ctx->pc = 0x269da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269dac: 0xe7a00014
    ctx->pc = 0x269dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x269db0: 0xc6000078
    ctx->pc = 0x269db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269db4: 0xe7a00018
    ctx->pc = 0x269db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x269db8: 0xc4a00000
    ctx->pc = 0x269db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269dbc: 0xe7a00020
    ctx->pc = 0x269dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x269dc0: 0xc4a00004
    ctx->pc = 0x269dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269dc4: 0xe7a00024
    ctx->pc = 0x269dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x269dc8: 0xc4a00008
    ctx->pc = 0x269dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269dcc: 0xc09a586
    ctx->pc = 0x269DCCu;
    SET_GPR_U32(ctx, 31, 0x269DD4u);
    ctx->pc = 0x269DD0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->pc = 0x269618u;
    {
        const uint32_t __entryPc = ctx->pc;
        CameraSupervisor_0x269618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269DD4u; }
    }
    if (ctx->pc != 0x269DD4u) { return; }
    ctx->pc = 0x269DD4u;
    // 0x269dd4: 0x27a40010
    ctx->pc = 0x269dd4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x269dd8: 0xc09bef0
    ctx->pc = 0x269DD8u;
    SET_GPR_U32(ctx, 31, 0x269DE0u);
    ctx->pc = 0x269DDCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x26FBC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoShake_0x26fbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269DE0u; }
    }
    if (ctx->pc != 0x269DE0u) { return; }
    ctx->pc = 0x269DE0u;
    // 0x269de0: 0xc7a00020
    ctx->pc = 0x269de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269de4: 0xc7a10010
    ctx->pc = 0x269de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269de8: 0x46010001
    ctx->pc = 0x269de8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x269dec: 0xe7a00000
    ctx->pc = 0x269decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x269df0: 0xc7a00024
    ctx->pc = 0x269df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269df4: 0xc7a10014
    ctx->pc = 0x269df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269df8: 0x46010001
    ctx->pc = 0x269df8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x269dfc: 0xe7a00004
    ctx->pc = 0x269dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x269e00: 0xc7a00028
    ctx->pc = 0x269e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269e04: 0xc7a10018
    ctx->pc = 0x269e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269e08: 0x46010001
    ctx->pc = 0x269e08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x269e0c: 0xe7a00008
    ctx->pc = 0x269e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x269e10: 0x3a0202d
    ctx->pc = 0x269e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269e14: 0xc09cf00
    ctx->pc = 0x269E14u;
    SET_GPR_U32(ctx, 31, 0x269E1Cu);
    ctx->pc = 0x269E18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x273C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        LookInDirection_0x273c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269E1Cu; }
    }
    if (ctx->pc != 0x269E1Cu) { return; }
    ctx->pc = 0x269E1Cu;
    // 0x269e1c: 0xdfbf0040
    ctx->pc = 0x269e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x269e20: 0xdfb00030
    ctx->pc = 0x269e20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x269e24: 0x3e00008
    ctx->pc = 0x269E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269E28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x269E2Cu;
}
