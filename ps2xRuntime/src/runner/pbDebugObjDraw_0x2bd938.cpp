#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDebugObjDraw
// Address: 0x2bd938 - 0x2bd9a0
void pbDebugObjDraw_0x2bd938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bd938u;

    // 0x2bd938: 0x27bdffc0
    ctx->pc = 0x2bd938u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bd93c: 0xffbf0030
    ctx->pc = 0x2bd93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2bd940: 0xffb20020
    ctx->pc = 0x2bd940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bd944: 0xffb10010
    ctx->pc = 0x2bd944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bd948: 0xffb00000
    ctx->pc = 0x2bd948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bd94c: 0xa0882d
    ctx->pc = 0x2bd94cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd950: 0x3c020036
    ctx->pc = 0x2bd950u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2bd954: 0x8c52dee0
    ctx->pc = 0x2bd954u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2bd958: 0xc0af63a
    ctx->pc = 0x2BD958u;
    SET_GPR_U32(ctx, 31, 0x2BD960u);
    ctx->pc = 0x2BD95Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x2BD8E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDebugObjStart_0x2bd8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD960u; }
    }
    if (ctx->pc != 0x2BD960u) { return; }
    ctx->pc = 0x2BD960u;
    // 0x2bd960: 0x3c100037
    ctx->pc = 0x2bd960u;
    SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
    // 0x2bd964: 0x8e042740
    ctx->pc = 0x2bd964u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 10048)));
    // 0x2bd968: 0x24840040
    ctx->pc = 0x2bd968u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 64));
    // 0x2bd96c: 0xc0b9592
    ctx->pc = 0x2BD96Cu;
    SET_GPR_U32(ctx, 31, 0x2BD974u);
    ctx->pc = 0x2BD970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E5648u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x2e5648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD974u; }
    }
    if (ctx->pc != 0x2BD974u) { return; }
    ctx->pc = 0x2BD974u;
    // 0x2bd974: 0x8e042740
    ctx->pc = 0x2bd974u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 10048)));
    // 0x2bd978: 0x8e450004
    ctx->pc = 0x2bd978u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2bd97c: 0x24840080
    ctx->pc = 0x2bd97cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 128));
    // 0x2bd980: 0x24a502d0
    ctx->pc = 0x2bd980u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 720));
    // 0x2bd984: 0x220302d
    ctx->pc = 0x2bd984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd988: 0xdfbf0030
    ctx->pc = 0x2bd988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bd98c: 0xdfb20020
    ctx->pc = 0x2bd98cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd990: 0xdfb10010
    ctx->pc = 0x2bd990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd994: 0xdfb00000
    ctx->pc = 0x2bd994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd998: 0x80b94f0
    ctx->pc = 0x2BD998u;
    ctx->pc = 0x2BD99Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2E53C0u;
    sceVu0MulMatrix_0x2e53c0(rdram, ctx, runtime); return;
    ctx->pc = 0x2BD9A0u;
}
