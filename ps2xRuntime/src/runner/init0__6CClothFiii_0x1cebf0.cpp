#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init0__6CClothFiii
// Address: 0x1cebf0 - 0x1cec7c
void init0__6CClothFiii_0x1cebf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init0__6CClothFiii");


    ctx->pc = 0x1cebf0u;

    // 0x1cebf0: 0x27bdffd0
    ctx->pc = 0x1cebf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cebf4: 0x7fbf0020
    ctx->pc = 0x1cebf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1cebf8: 0x7fb10010
    ctx->pc = 0x1cebf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cebfc: 0x7fb00000
    ctx->pc = 0x1cebfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cec00: 0xa487000c
    ctx->pc = 0x1cec00u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 7));
    // 0x1cec04: 0x51080
    ctx->pc = 0x1cec04u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cec08: 0xa4850018
    ctx->pc = 0x1cec08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 5));
    // 0x1cec0c: 0x451021
    ctx->pc = 0x1cec0cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cec10: 0xa486001a
    ctx->pc = 0x1cec10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 6));
    // 0x1cec14: 0x70808e28
    ctx->pc = 0x1cec14u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1cec18: 0x21100
    ctx->pc = 0x1cec18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cec1c: 0xc22018
    ctx->pc = 0x1cec1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x1cec20: 0xc06878c
    ctx->pc = 0x1CEC20u;
    SET_GPR_U32(ctx, 31, 0x1CEC28u);
    ctx->pc = 0x1CEC24u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC28u; }
        else if (ctx->pc != 0x1CEC28u) { ctx->pc = 0x1CEC28u; }
    }
    if (ctx->pc != 0x1CEC28u) { return; }
    ctx->pc = 0x1CEC28u;
    // 0x1cec28: 0xae220000
    ctx->pc = 0x1cec28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1cec2c: 0x1010c0
    ctx->pc = 0x1cec2cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 3));
    // 0x1cec30: 0x501021
    ctx->pc = 0x1cec30u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1cec34: 0xc06878c
    ctx->pc = 0x1CEC34u;
    SET_GPR_U32(ctx, 31, 0x1CEC3Cu);
    ctx->pc = 0x1CEC38u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 3));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC3Cu; }
        else if (ctx->pc != 0x1CEC3Cu) { ctx->pc = 0x1CEC3Cu; }
    }
    if (ctx->pc != 0x1CEC3Cu) { return; }
    ctx->pc = 0x1CEC3Cu;
    // 0x1cec3c: 0x108080
    ctx->pc = 0x1cec3cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1cec40: 0xae22004c
    ctx->pc = 0x1cec40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x1cec44: 0xc06878c
    ctx->pc = 0x1CEC44u;
    SET_GPR_U32(ctx, 31, 0x1CEC4Cu);
    ctx->pc = 0x1CEC48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC4Cu; }
        else if (ctx->pc != 0x1CEC4Cu) { ctx->pc = 0x1CEC4Cu; }
    }
    if (ctx->pc != 0x1CEC4Cu) { return; }
    ctx->pc = 0x1CEC4Cu;
    // 0x1cec4c: 0xae220024
    ctx->pc = 0x1cec4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x1cec50: 0xc06878c
    ctx->pc = 0x1CEC50u;
    SET_GPR_U32(ctx, 31, 0x1CEC58u);
    ctx->pc = 0x1CEC54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC58u; }
        else if (ctx->pc != 0x1CEC58u) { ctx->pc = 0x1CEC58u; }
    }
    if (ctx->pc != 0x1CEC58u) { return; }
    ctx->pc = 0x1CEC58u;
    // 0x1cec58: 0x72002628
    ctx->pc = 0x1cec58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1cec5c: 0xc06878c
    ctx->pc = 0x1CEC5Cu;
    SET_GPR_U32(ctx, 31, 0x1CEC64u);
    ctx->pc = 0x1CEC60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEC64u; }
        else if (ctx->pc != 0x1CEC64u) { ctx->pc = 0x1CEC64u; }
    }
    if (ctx->pc != 0x1CEC64u) { return; }
    ctx->pc = 0x1CEC64u;
    // 0x1cec64: 0xae220034
    ctx->pc = 0x1cec64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x1cec68: 0x7bbf0020
    ctx->pc = 0x1cec68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cec6c: 0x7bb10010
    ctx->pc = 0x1cec6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cec70: 0x7bb00000
    ctx->pc = 0x1cec70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cec74: 0x3e00008
    ctx->pc = 0x1CEC74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEC78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CEC7Cu;
}
