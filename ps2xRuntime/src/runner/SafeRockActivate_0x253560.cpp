#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SafeRockActivate
// Address: 0x253560 - 0x2535c4
void SafeRockActivate_0x253560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x253560u;

    // 0x253560: 0x27bdffe0
    ctx->pc = 0x253560u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x253564: 0xffbf0010
    ctx->pc = 0x253564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x253568: 0xffb00000
    ctx->pc = 0x253568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25356c: 0x3c030034
    ctx->pc = 0x25356cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x253570: 0x24020110
    ctx->pc = 0x253570u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 272));
    // 0x253574: 0x828018
    ctx->pc = 0x253574u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x253578: 0x8c62cd94
    ctx->pc = 0x253578u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294954388)));
    // 0x25357c: 0x2028021
    ctx->pc = 0x25357cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x253580: 0x8e040070
    ctx->pc = 0x253580u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x253584: 0x24050001
    ctx->pc = 0x253584u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x253588: 0xc0b41e4
    ctx->pc = 0x253588u;
    SET_GPR_U32(ctx, 31, 0x253590u);
    ctx->pc = 0x25358Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253590u; }
    }
    if (ctx->pc != 0x253590u) { return; }
    ctx->pc = 0x253590u;
    // 0x253590: 0x8e040000
    ctx->pc = 0x253590u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x253594: 0x84830044
    ctx->pc = 0x253594u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x253598: 0x31040
    ctx->pc = 0x253598u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x25359c: 0x431021
    ctx->pc = 0x25359cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2535a0: 0xa60200e4
    ctx->pc = 0x2535a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 228), (uint16_t)GPR_U32(ctx, 2));
    // 0x2535a4: 0xa60000f2
    ctx->pc = 0x2535a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 0));
    // 0x2535a8: 0x90820042
    ctx->pc = 0x2535a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 66)));
    // 0x2535ac: 0xa20200e3
    ctx->pc = 0x2535acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 227), (uint8_t)GPR_U32(ctx, 2));
    // 0x2535b0: 0x200202d
    ctx->pc = 0x2535b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2535b4: 0xdfbf0010
    ctx->pc = 0x2535b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2535b8: 0xdfb00000
    ctx->pc = 0x2535b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2535bc: 0x8094d1c
    ctx->pc = 0x2535BCu;
    ctx->pc = 0x2535C0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x253470u;
    SetSafeRock_0x253470(rdram, ctx, runtime); return;
    ctx->pc = 0x2535C4u;
}
