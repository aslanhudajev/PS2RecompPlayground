#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlDofSetTextureConv
// Address: 0x1a5ae0 - 0x1a5b78
void nlDofSetTextureConv_0x1a5ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlDofSetTextureConv");


    ctx->pc = 0x1a5ae0u;

    // 0x1a5ae0: 0x30820001
    ctx->pc = 0x1a5ae0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 1));
    // 0x1a5ae4: 0x21840
    ctx->pc = 0x1a5ae4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a5ae8: 0x27bdffb0
    ctx->pc = 0x1a5ae8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a5aec: 0x7fbf0000
    ctx->pc = 0x1a5aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a5af0: 0x278289e4
    ctx->pc = 0x1a5af0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294937060));
    // 0x1a5af4: 0x431021
    ctx->pc = 0x1a5af4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5af8: 0x84470000
    ctx->pc = 0x1a5af8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5afc: 0x878589e0
    ctx->pc = 0x1a5afcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937056)));
    // 0x1a5b00: 0x878489dc
    ctx->pc = 0x1a5b00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937052)));
    // 0x1a5b04: 0x878689ec
    ctx->pc = 0x1a5b04u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937068)));
    // 0x1a5b08: 0x878389e8
    ctx->pc = 0x1a5b08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937064)));
    // 0x1a5b0c: 0x878289d8
    ctx->pc = 0x1a5b0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937048)));
    // 0x1a5b10: 0xa7a70014
    ctx->pc = 0x1a5b10u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 7));
    // 0x1a5b14: 0xa7a50016
    ctx->pc = 0x1a5b14u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a5b18: 0xa7a40018
    ctx->pc = 0x1a5b18u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a5b1c: 0xa7a0001a
    ctx->pc = 0x1a5b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a5b20: 0xa7a0001c
    ctx->pc = 0x1a5b20u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a5b24: 0xa7a20034
    ctx->pc = 0x1a5b24u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a5b28: 0x878289d4
    ctx->pc = 0x1a5b28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937044)));
    // 0x1a5b2c: 0xa7a50036
    ctx->pc = 0x1a5b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 54), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a5b30: 0xa7a6001e
    ctx->pc = 0x1a5b30u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 30), (uint16_t)GPR_U32(ctx, 6));
    // 0x1a5b34: 0xa7a30020
    ctx->pc = 0x1a5b34u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a5b38: 0x27a40010
    ctx->pc = 0x1a5b38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a5b3c: 0x27a50030
    ctx->pc = 0x1a5b3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a5b40: 0xa7a20038
    ctx->pc = 0x1a5b40u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 56), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a5b44: 0xa7a0003a
    ctx->pc = 0x1a5b44u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 58), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a5b48: 0xa7a0003c
    ctx->pc = 0x1a5b48u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 60), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a5b4c: 0xa7a6003e
    ctx->pc = 0x1a5b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 6));
    // 0x1a5b50: 0xc069d14
    ctx->pc = 0x1A5B50u;
    SET_GPR_U32(ctx, 31, 0x1A5B58u);
    ctx->pc = 0x1A5B54u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1A7450u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlConvImageLocalMem_0x1a7450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5B58u; }
        else if (ctx->pc != 0x1A5B58u) { ctx->pc = 0x1A5B58u; }
    }
    if (ctx->pc != 0x1A5B58u) { return; }
    ctx->pc = 0x1A5B58u;
    // 0x1a5b58: 0x70002628
    ctx->pc = 0x1a5b58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a5b5c: 0xc06bcc4
    ctx->pc = 0x1A5B5Cu;
    SET_GPR_U32(ctx, 31, 0x1A5B64u);
    ctx->pc = 0x1A5B60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AF310u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSysBeginScene_0x1af310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5B64u; }
        else if (ctx->pc != 0x1A5B64u) { ctx->pc = 0x1A5B64u; }
    }
    if (ctx->pc != 0x1A5B64u) { return; }
    ctx->pc = 0x1A5B64u;
    // 0x1a5b64: 0xc06bd64
    ctx->pc = 0x1A5B64u;
    SET_GPR_U32(ctx, 31, 0x1A5B6Cu);
    ctx->pc = 0x1AF590u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSysEndScene_0x1af590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5B6Cu; }
        else if (ctx->pc != 0x1A5B6Cu) { ctx->pc = 0x1A5B6Cu; }
    }
    if (ctx->pc != 0x1A5B6Cu) { return; }
    ctx->pc = 0x1A5B6Cu;
    // 0x1a5b6c: 0x7bbf0000
    ctx->pc = 0x1a5b6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5b70: 0x3e00008
    ctx->pc = 0x1A5B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5B74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5B78u;
}
