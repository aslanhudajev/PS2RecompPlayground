#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyCalcWorkSofdec
// Address: 0x18e938 - 0x18e9e4
void mwPlyCalcWorkSofdec_0x18e938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyCalcWorkSofdec");


    ctx->pc = 0x18e938u;

    // 0x18e938: 0x27bdffa0
    ctx->pc = 0x18e938u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18e93c: 0xffb20040
    ctx->pc = 0x18e93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x18e940: 0x37a9000c
    ctx->pc = 0x18e940u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 29), 12));
    // 0x18e944: 0xffb10030
    ctx->pc = 0x18e944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x18e948: 0x100902d
    ctx->pc = 0x18e948u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e94c: 0xffb00020
    ctx->pc = 0x18e94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x18e950: 0xe0882d
    ctx->pc = 0x18e950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e954: 0xc0802d
    ctx->pc = 0x18e954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e958: 0xffbf0050
    ctx->pc = 0x18e958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18e95c: 0x3a0302d
    ctx->pc = 0x18e95cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e960: 0x37a70004
    ctx->pc = 0x18e960u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 29), 4));
    // 0x18e964: 0x37a80008
    ctx->pc = 0x18e964u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 29), 8));
    // 0x18e968: 0x27aa0010
    ctx->pc = 0x18e968u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 29), 16));
    // 0x18e96c: 0xc0639dc
    ctx->pc = 0x18E96Cu;
    SET_GPR_U32(ctx, 31, 0x18E974u);
    ctx->pc = 0x18E970u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 29), 20));
    ctx->pc = 0x18E770u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlySfdCalcWorkStmBuf_0x18e770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E974u; }
        else if (ctx->pc != 0x18E974u) { ctx->pc = 0x18E974u; }
    }
    if (ctx->pc != 0x18E974u) { return; }
    ctx->pc = 0x18E974u;
    // 0x18e974: 0x200202d
    ctx->pc = 0x18e974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e978: 0x220282d
    ctx->pc = 0x18e978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e97c: 0x240302d
    ctx->pc = 0x18e97cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e980: 0x27a70018
    ctx->pc = 0x18e980u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 24));
    // 0x18e984: 0xc063a20
    ctx->pc = 0x18E984u;
    SET_GPR_U32(ctx, 31, 0x18E98Cu);
    ctx->pc = 0x18E988u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 28));
    ctx->pc = 0x18E880u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlySfdCalcWorkFrmBuf_0x18e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E98Cu; }
        else if (ctx->pc != 0x18E98Cu) { ctx->pc = 0x18E98Cu; }
    }
    if (ctx->pc != 0x18E98Cu) { return; }
    ctx->pc = 0x18E98Cu;
    // 0x18e98c: 0x8fa30014
    ctx->pc = 0x18e98cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x18e990: 0x8fa6001c
    ctx->pc = 0x18e990u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x18e994: 0x8fa20000
    ctx->pc = 0x18e994u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e998: 0x8fa5000c
    ctx->pc = 0x18e998u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x18e99c: 0x431021
    ctx->pc = 0x18e99cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18e9a0: 0x8fa40004
    ctx->pc = 0x18e9a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x18e9a4: 0xa62821
    ctx->pc = 0x18e9a4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x18e9a8: 0x8fa70008
    ctx->pc = 0x18e9a8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18e9ac: 0x8fa30018
    ctx->pc = 0x18e9acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18e9b0: 0x451021
    ctx->pc = 0x18e9b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18e9b4: 0x8fa60010
    ctx->pc = 0x18e9b4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e9b8: 0x872021
    ctx->pc = 0x18e9b8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x18e9bc: 0xdfbf0050
    ctx->pc = 0x18e9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18e9c0: 0x661821
    ctx->pc = 0x18e9c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18e9c4: 0xdfb20040
    ctx->pc = 0x18e9c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e9c8: 0x832021
    ctx->pc = 0x18e9c8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18e9cc: 0xdfb10030
    ctx->pc = 0x18e9ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e9d0: 0x441021
    ctx->pc = 0x18e9d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18e9d4: 0xdfb00020
    ctx->pc = 0x18e9d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e9d8: 0x24420060
    ctx->pc = 0x18e9d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 96));
    // 0x18e9dc: 0x3e00008
    ctx->pc = 0x18E9DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E9E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E9E4u;
}
