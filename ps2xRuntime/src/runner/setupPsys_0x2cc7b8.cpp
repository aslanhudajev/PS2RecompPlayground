#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setupPsys
// Address: 0x2cc7b8 - 0x2cc818
void setupPsys_0x2cc7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cc7b8u;

    // 0x2cc7b8: 0x27bdffe0
    ctx->pc = 0x2cc7b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cc7bc: 0xffbf0010
    ctx->pc = 0x2cc7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cc7c0: 0xffb00000
    ctx->pc = 0x2cc7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cc7c4: 0xc0b2e76
    ctx->pc = 0x2CC7C4u;
    SET_GPR_U32(ctx, 31, 0x2CC7CCu);
    ctx->pc = 0x2CC7C8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CB9D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setupParms_0x2cb9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC7CCu; }
    }
    if (ctx->pc != 0x2CC7CCu) { return; }
    ctx->pc = 0x2CC7CCu;
    // 0x2cc7cc: 0xc0b2f32
    ctx->pc = 0x2CC7CCu;
    SET_GPR_U32(ctx, 31, 0x2CC7D4u);
    ctx->pc = 0x2CC7D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CBCC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setupNewPMode_0x2cbcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC7D4u; }
    }
    if (ctx->pc != 0x2CC7D4u) { return; }
    ctx->pc = 0x2CC7D4u;
    // 0x2cc7d4: 0xae000070
    ctx->pc = 0x2cc7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x2cc7d8: 0xa6000078
    ctx->pc = 0x2cc7d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 120), (uint16_t)GPR_U32(ctx, 0));
    // 0x2cc7dc: 0xa600007a
    ctx->pc = 0x2cc7dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 122), (uint16_t)GPR_U32(ctx, 0));
    // 0x2cc7e0: 0x9602002e
    ctx->pc = 0x2cc7e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x2cc7e4: 0x21040
    ctx->pc = 0x2cc7e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x2cc7e8: 0x8e030008
    ctx->pc = 0x2cc7e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cc7ec: 0x431021
    ctx->pc = 0x2cc7ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cc7f0: 0x2442fffe
    ctx->pc = 0x2cc7f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2cc7f4: 0xae020074
    ctx->pc = 0x2cc7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x2cc7f8: 0xae00007c
    ctx->pc = 0x2cc7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x2cc7fc: 0x3c0141f0
    ctx->pc = 0x2cc7fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x2cc800: 0x44810000
    ctx->pc = 0x2cc800u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cc804: 0xe60000a0
    ctx->pc = 0x2cc804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x2cc808: 0xdfbf0010
    ctx->pc = 0x2cc808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc80c: 0xdfb00000
    ctx->pc = 0x2cc80cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc810: 0x3e00008
    ctx->pc = 0x2CC810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC814u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CC818u;
}
