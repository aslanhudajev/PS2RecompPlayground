#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: doAcornFunc
// Address: 0x2c92e0 - 0x2c93c4
void doAcornFunc_0x2c92e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c92e0u;

    // 0x2c92e0: 0x27bdfff0
    ctx->pc = 0x2c92e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c92e4: 0xffbf0000
    ctx->pc = 0x2c92e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c92e8: 0x3c02003a
    ctx->pc = 0x2c92e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c92ec: 0x8c43b634
    ctx->pc = 0x2c92ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294948404)));
    // 0x2c92f0: 0x24020001
    ctx->pc = 0x2c92f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c92f4: 0x1462001b
    ctx->pc = 0x2C92F4u;
    {
        const bool branch_taken_0x2c92f4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2C92F8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2c92f4) {
            ctx->pc = 0x2C9364u;
            goto label_2c9364;
        }
    }
    ctx->pc = 0x2C92FCu;
    // 0x2c92fc: 0x202d
    ctx->pc = 0x2c92fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9300: 0xc0b2e06
    ctx->pc = 0x2C9300u;
    SET_GPR_U32(ctx, 31, 0x2C9308u);
    ctx->pc = 0x2C9304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CB818u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetDebugNode_0x2cb818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9308u; }
    }
    if (ctx->pc != 0x2C9308u) { return; }
    ctx->pc = 0x2C9308u;
    // 0x2c9308: 0x3c03003a
    ctx->pc = 0x2c9308u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2c930c: 0x3c06003a
    ctx->pc = 0x2c930cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x2c9310: 0x3c07003a
    ctx->pc = 0x2c9310u;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
    // 0x2c9314: 0x3c08003a
    ctx->pc = 0x2c9314u;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
    // 0x2c9318: 0x3c09003a
    ctx->pc = 0x2c9318u;
    SET_GPR_U32(ctx, 9, ((uint32_t)58 << 16));
    // 0x2c931c: 0x3c0a003a
    ctx->pc = 0x2c931cu;
    SET_GPR_U32(ctx, 10, ((uint32_t)58 << 16));
    // 0x2c9320: 0x3c0b003a
    ctx->pc = 0x2c9320u;
    SET_GPR_U32(ctx, 11, ((uint32_t)58 << 16));
    // 0x2c9324: 0x3c0c003a
    ctx->pc = 0x2c9324u;
    SET_GPR_U32(ctx, 12, ((uint32_t)58 << 16));
    // 0x2c9328: 0x3c0d003a
    ctx->pc = 0x2c9328u;
    SET_GPR_U32(ctx, 13, ((uint32_t)58 << 16));
    // 0x2c932c: 0x202d
    ctx->pc = 0x2c932cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9330: 0x40282d
    ctx->pc = 0x2c9330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9334: 0xc46cb638
    ctx->pc = 0x2c9334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294948408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c9338: 0xc4cdb63c
    ctx->pc = 0x2c9338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294948412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c933c: 0x8ce6b640
    ctx->pc = 0x2c933cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 4294948416)));
    // 0x2c9340: 0x8d07b644
    ctx->pc = 0x2c9340u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 8), 4294948420)));
    // 0x2c9344: 0x8d28b648
    ctx->pc = 0x2c9344u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 9), 4294948424)));
    // 0x2c9348: 0x8d49b64c
    ctx->pc = 0x2c9348u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 10), 4294948428)));
    // 0x2c934c: 0xc56eb650
    ctx->pc = 0x2c934cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4294948432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2c9350: 0xc58fb654
    ctx->pc = 0x2c9350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4294948436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2c9354: 0xc0b2a10
    ctx->pc = 0x2C9354u;
    SET_GPR_U32(ctx, 31, 0x2C935Cu);
    ctx->pc = 0x2C9358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4294948440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    ctx->pc = 0x2CA840u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysFirework_0x2ca840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C935Cu; }
    }
    if (ctx->pc != 0x2C935Cu) { return; }
    ctx->pc = 0x2C935Cu;
    // 0x2c935c: 0x10000013
    ctx->pc = 0x2C935Cu;
    {
        const bool branch_taken_0x2c935c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C9360u;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2c935c) {
            ctx->pc = 0x2C93ACu;
            goto label_2c93ac;
        }
    }
    ctx->pc = 0x2C9364u;
label_2c9364:
    // 0x2c9364: 0x8c43b634
    ctx->pc = 0x2c9364u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294948404)));
    // 0x2c9368: 0x24020002
    ctx->pc = 0x2c9368u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c936c: 0x14620011
    ctx->pc = 0x2C936Cu;
    {
        const bool branch_taken_0x2c936c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2C9370u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2c936c) {
            ctx->pc = 0x2C93B4u;
            goto label_2c93b4;
        }
    }
    ctx->pc = 0x2C9374u;
    // 0x2c9374: 0x202d
    ctx->pc = 0x2c9374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9378: 0xc0b2e06
    ctx->pc = 0x2C9378u;
    SET_GPR_U32(ctx, 31, 0x2C9380u);
    ctx->pc = 0x2C937Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CB818u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetDebugNode_0x2cb818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9380u; }
    }
    if (ctx->pc != 0x2C9380u) { return; }
    ctx->pc = 0x2C9380u;
    // 0x2c9380: 0x3c03003a
    ctx->pc = 0x2c9380u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2c9384: 0x3c06003a
    ctx->pc = 0x2c9384u;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x2c9388: 0x202d
    ctx->pc = 0x2c9388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c938c: 0x40282d
    ctx->pc = 0x2c938cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9390: 0x3c014120
    ctx->pc = 0x2c9390u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x2c9394: 0x44816000
    ctx->pc = 0x2c9394u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2c9398: 0xc46db65c
    ctx->pc = 0x2c9398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294948444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c939c: 0xc4ceb660
    ctx->pc = 0x2c939cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294948448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2c93a0: 0xc0b2a40
    ctx->pc = 0x2C93A0u;
    SET_GPR_U32(ctx, 31, 0x2C93A8u);
    ctx->pc = 0x2C93A4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CA900u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysFlame_0x2ca900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C93A8u; }
    }
    if (ctx->pc != 0x2C93A8u) { return; }
    ctx->pc = 0x2C93A8u;
    // 0x2c93a8: 0x3c03003a
    ctx->pc = 0x2c93a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
label_2c93ac:
    // 0x2c93ac: 0xac62b664
    ctx->pc = 0x2c93acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294948452), GPR_U32(ctx, 2));
    // 0x2c93b0: 0x3c02003a
    ctx->pc = 0x2c93b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_2c93b4:
    // 0x2c93b4: 0xac40b634
    ctx->pc = 0x2c93b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948404), GPR_U32(ctx, 0));
    // 0x2c93b8: 0xdfbf0000
    ctx->pc = 0x2c93b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c93bc: 0x3e00008
    ctx->pc = 0x2C93BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C93C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C9364u: goto label_2c9364;
            case 0x2C93ACu: goto label_2c93ac;
            case 0x2C93B4u: goto label_2c93b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C93C4u;
}
