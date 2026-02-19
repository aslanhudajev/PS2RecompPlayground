#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: showVector
// Address: 0x2bbf00 - 0x2bbf8c
void showVector_0x2bbf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bbf00u;

    // 0x2bbf00: 0x27bdffa0
    ctx->pc = 0x2bbf00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2bbf04: 0xffbf0050
    ctx->pc = 0x2bbf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2bbf08: 0xffb40040
    ctx->pc = 0x2bbf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2bbf0c: 0xffb30030
    ctx->pc = 0x2bbf0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2bbf10: 0xffb20020
    ctx->pc = 0x2bbf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bbf14: 0xffb10010
    ctx->pc = 0x2bbf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bbf18: 0xffb00000
    ctx->pc = 0x2bbf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bbf1c: 0x80a02d
    ctx->pc = 0x2bbf1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf20: 0xc0802d
    ctx->pc = 0x2bbf20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf24: 0xc0be862
    ctx->pc = 0x2BBF24u;
    SET_GPR_U32(ctx, 31, 0x2BBF2Cu);
    ctx->pc = 0x2BBF28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBF2Cu; }
    }
    if (ctx->pc != 0x2BBF2Cu) { return; }
    ctx->pc = 0x2BBF2Cu;
    // 0x2bbf2c: 0x40982d
    ctx->pc = 0x2bbf2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf30: 0xc0be862
    ctx->pc = 0x2BBF30u;
    SET_GPR_U32(ctx, 31, 0x2BBF38u);
    ctx->pc = 0x2BBF34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBF38u; }
    }
    if (ctx->pc != 0x2BBF38u) { return; }
    ctx->pc = 0x2BBF38u;
    // 0x2bbf38: 0x40902d
    ctx->pc = 0x2bbf38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf3c: 0xc0be862
    ctx->pc = 0x2BBF3Cu;
    SET_GPR_U32(ctx, 31, 0x2BBF44u);
    ctx->pc = 0x2BBF40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBF44u; }
    }
    if (ctx->pc != 0x2BBF44u) { return; }
    ctx->pc = 0x2BBF44u;
    // 0x2bbf44: 0x40882d
    ctx->pc = 0x2bbf44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf48: 0xc0be862
    ctx->pc = 0x2BBF48u;
    SET_GPR_U32(ctx, 31, 0x2BBF50u);
    ctx->pc = 0x2BBF4Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBF50u; }
    }
    if (ctx->pc != 0x2BBF50u) { return; }
    ctx->pc = 0x2BBF50u;
    // 0x2bbf50: 0x280202d
    ctx->pc = 0x2bbf50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf54: 0x3c05003b
    ctx->pc = 0x2bbf54u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bbf58: 0x24a560f0
    ctx->pc = 0x2bbf58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24816));
    // 0x2bbf5c: 0x260302d
    ctx->pc = 0x2bbf5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf60: 0x240382d
    ctx->pc = 0x2bbf60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf64: 0x220402d
    ctx->pc = 0x2bbf64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf68: 0x40482d
    ctx->pc = 0x2bbf68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbf6c: 0xdfbf0050
    ctx->pc = 0x2bbf6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bbf70: 0xdfb40040
    ctx->pc = 0x2bbf70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bbf74: 0xdfb30030
    ctx->pc = 0x2bbf74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bbf78: 0xdfb20020
    ctx->pc = 0x2bbf78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bbf7c: 0xdfb10010
    ctx->pc = 0x2bbf7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbf80: 0xdfb00000
    ctx->pc = 0x2bbf80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbf84: 0x80aeed2
    ctx->pc = 0x2BBF84u;
    ctx->pc = 0x2BBF88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x2BBB48u;
    pbVuMsgf_0x2bbb48(rdram, ctx, runtime); return;
    ctx->pc = 0x2BBF8Cu;
}
