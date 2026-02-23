#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: start__11CreditClassFv
// Address: 0x1d4250 - 0x1d42ec
void start__11CreditClassFv_0x1d4250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("start__11CreditClassFv");


    ctx->pc = 0x1d4250u;

    // 0x1d4250: 0x27bdffe0
    ctx->pc = 0x1d4250u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d4254: 0x7fbf0010
    ctx->pc = 0x1d4254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1d4258: 0x7fb00000
    ctx->pc = 0x1d4258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d425c: 0x70808628
    ctx->pc = 0x1d425cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d4260: 0xc071f00
    ctx->pc = 0x1D4260u;
    SET_GPR_U32(ctx, 31, 0x1D4268u);
    ctx->pc = 0x1D4264u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x1C7C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlaGetCreditData_0x1c7c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4268u; }
        else if (ctx->pc != 0x1D4268u) { ctx->pc = 0x1D4268u; }
    }
    if (ctx->pc != 0x1D4268u) { return; }
    ctx->pc = 0x1D4268u;
    // 0x1d4268: 0x3c033c44
    ctx->pc = 0x1d4268u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15428 << 16));
    // 0x1d426c: 0x34639ba6
    ctx->pc = 0x1d426cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 39846));
    // 0x1d4270: 0xae03005c
    ctx->pc = 0x1d4270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x1d4274: 0x3c033f80
    ctx->pc = 0x1d4274u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1d4278: 0xae030060
    ctx->pc = 0x1d4278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x1d427c: 0xae030064
    ctx->pc = 0x1d427cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x1d4280: 0xae00006c
    ctx->pc = 0x1d4280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x1d4284: 0xae000068
    ctx->pc = 0x1d4284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1d4288: 0xae030074
    ctx->pc = 0x1d4288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x1d428c: 0xae030070
    ctx->pc = 0x1d428cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x1d4290: 0xae000078
    ctx->pc = 0x1d4290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x1d4294: 0xae03007c
    ctx->pc = 0x1d4294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x1d4298: 0x2403ffff
    ctx->pc = 0x1d4298u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d429c: 0xae030080
    ctx->pc = 0x1d429cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x1d42a0: 0x24030005
    ctx->pc = 0x1d42a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d42a4: 0xae030084
    ctx->pc = 0x1d42a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    // 0x1d42a8: 0xae000098
    ctx->pc = 0x1d42a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x1d42ac: 0x8f848d30
    ctx->pc = 0x1d42acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x1d42b0: 0x24030001
    ctx->pc = 0x1d42b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d42b4: 0xae04009c
    ctx->pc = 0x1d42b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 4));
    // 0x1d42b8: 0xa2000008
    ctx->pc = 0x1d42b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d42bc: 0xa200000a
    ctx->pc = 0x1d42bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d42c0: 0xa2000009
    ctx->pc = 0x1d42c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d42c4: 0x96040010
    ctx->pc = 0x1d42c4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d42c8: 0xa60400a0
    ctx->pc = 0x1d42c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 160), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d42cc: 0xa60000a2
    ctx->pc = 0x1d42ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 162), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d42d0: 0xa60000a4
    ctx->pc = 0x1d42d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 164), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d42d4: 0xa600000c
    ctx->pc = 0x1d42d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d42d8: 0xa7838b0c
    ctx->pc = 0x1d42d8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937356), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d42dc: 0x7bbf0010
    ctx->pc = 0x1d42dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d42e0: 0x7bb00000
    ctx->pc = 0x1d42e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d42e4: 0x3e00008
    ctx->pc = 0x1D42E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D42E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D42ECu;
}
