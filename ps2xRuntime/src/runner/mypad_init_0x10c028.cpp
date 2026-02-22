#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: mypad_init
// Address: 0x10c028 - 0x10c090
void mypad_init_0x10c028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10c028u;

    // 0x10c028: 0x27bdfff0
    ctx->pc = 0x10c028u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10c02c: 0xffbf0000
    ctx->pc = 0x10c02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10c030: 0xc045792
    ctx->pc = 0x10C030u;
    SET_GPR_U32(ctx, 31, 0x10C038u);
    ctx->pc = 0x10C034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x115E48u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadInit_0x115e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C038u; }
    }
    if (ctx->pc != 0x10C038u) { return; }
    ctx->pc = 0x10C038u;
    // 0x10c038: 0x3c060017
    ctx->pc = 0x10c038u;
    SET_GPR_S32(ctx, 6, ((uint32_t)23 << 16));
    // 0x10c03c: 0x202d
    ctx->pc = 0x10c03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c040: 0x24c6f080
    ctx->pc = 0x10c040u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294963328));
    // 0x10c044: 0xc04582a
    ctx->pc = 0x10C044u;
    SET_GPR_U32(ctx, 31, 0x10C04Cu);
    ctx->pc = 0x10C048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1160A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadPortOpen_0x1160a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C04Cu; }
    }
    if (ctx->pc != 0x10C04Cu) { return; }
    ctx->pc = 0x10C04Cu;
    // 0x10c04c: 0x3c060017
    ctx->pc = 0x10c04cu;
    SET_GPR_S32(ctx, 6, ((uint32_t)23 << 16));
    // 0x10c050: 0x24040001
    ctx->pc = 0x10c050u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c054: 0x24c6f180
    ctx->pc = 0x10c054u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294963584));
    // 0x10c058: 0xc04582a
    ctx->pc = 0x10C058u;
    SET_GPR_U32(ctx, 31, 0x10C060u);
    ctx->pc = 0x10C05Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1160A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadPortOpen_0x1160a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C060u; }
    }
    if (ctx->pc != 0x10C060u) { return; }
    ctx->pc = 0x10C060u;
    // 0x10c060: 0x202d
    ctx->pc = 0x10c060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c064: 0x282d
    ctx->pc = 0x10c064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c068: 0x24060004
    ctx->pc = 0x10c068u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x10c06c: 0xc045a64
    ctx->pc = 0x10C06Cu;
    SET_GPR_U32(ctx, 31, 0x10C074u);
    ctx->pc = 0x10C070u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x116990u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadSetMainMode_0x116990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C074u; }
    }
    if (ctx->pc != 0x10C074u) { return; }
    ctx->pc = 0x10C074u;
    // 0x10c074: 0xdfbf0000
    ctx->pc = 0x10c074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c078: 0x24040001
    ctx->pc = 0x10c078u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c07c: 0x282d
    ctx->pc = 0x10c07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c080: 0x24060004
    ctx->pc = 0x10c080u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x10c084: 0x24070003
    ctx->pc = 0x10c084u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 3));
    // 0x10c088: 0x8045a64
    ctx->pc = 0x10C088u;
    ctx->pc = 0x10C08Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x116990u;
    scePadSetMainMode_0x116990(rdram, ctx, runtime); return;
    ctx->pc = 0x10C090u;
}
