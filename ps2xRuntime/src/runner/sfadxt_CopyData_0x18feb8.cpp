#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_CopyData
// Address: 0x18feb8 - 0x18ff6c
void sfadxt_CopyData_0x18feb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_CopyData");


    ctx->pc = 0x18feb8u;

    // 0x18feb8: 0x27bdff80
    ctx->pc = 0x18feb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18febc: 0xffb50060
    ctx->pc = 0x18febcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x18fec0: 0xffb40050
    ctx->pc = 0x18fec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x18fec4: 0xe0a82d
    ctx->pc = 0x18fec4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fec8: 0xffb20030
    ctx->pc = 0x18fec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x18fecc: 0xa0a02d
    ctx->pc = 0x18feccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fed0: 0xffb10020
    ctx->pc = 0x18fed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x18fed4: 0xc0902d
    ctx->pc = 0x18fed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fed8: 0xffb00010
    ctx->pc = 0x18fed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x18fedc: 0x24913e20
    ctx->pc = 0x18fedcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 4), 15904));
    // 0x18fee0: 0xffbf0070
    ctx->pc = 0x18fee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x18fee4: 0x3a0302d
    ctx->pc = 0x18fee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fee8: 0xffb30040
    ctx->pc = 0x18fee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x18feec: 0x8e330004
    ctx->pc = 0x18feecu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18fef0: 0x8c853e28
    ctx->pc = 0x18fef0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 15912)));
    // 0x18fef4: 0xc063f80
    ctx->pc = 0x18FEF4u;
    SET_GPR_U32(ctx, 31, 0x18FEFCu);
    ctx->pc = 0x18FEF8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18FE00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_GetFreeChunk_0x18fe00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FEFCu; }
        else if (ctx->pc != 0x18FEFCu) { ctx->pc = 0x18FEFCu; }
    }
    if (ctx->pc != 0x18FEFCu) { return; }
    ctx->pc = 0x18FEFCu;
    // 0x18fefc: 0x8fb00004
    ctx->pc = 0x18fefcu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x18ff00: 0x3c030001
    ctx->pc = 0x18ff00u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x18ff04: 0x34639000
    ctx->pc = 0x18ff04u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 36864));
    // 0x18ff08: 0x8fa40000
    ctx->pc = 0x18ff08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ff0c: 0x250302a
    ctx->pc = 0x18ff0cu;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 16)));
    // 0x18ff10: 0x280282d
    ctx->pc = 0x18ff10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ff14: 0x246800b
    ctx->pc = 0x18ff14u;
    if (GPR_U32(ctx, 6) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 18));
    // 0x18ff18: 0x70102a
    ctx->pc = 0x18ff18u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 16)));
    // 0x18ff1c: 0x62800b
    ctx->pc = 0x18ff1cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
    // 0x18ff20: 0xc060172
    ctx->pc = 0x18FF20u;
    SET_GPR_U32(ctx, 31, 0x18FF28u);
    ctx->pc = 0x18FF24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1805C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MEM_Copy_0x1805c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FF28u; }
        else if (ctx->pc != 0x18FF28u) { ctx->pc = 0x18FF28u; }
    }
    if (ctx->pc != 0x18FF28u) { return; }
    ctx->pc = 0x18FF28u;
    // 0x18ff28: 0x260202d
    ctx->pc = 0x18ff28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ff2c: 0x200282d
    ctx->pc = 0x18ff2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ff30: 0xc063f8c
    ctx->pc = 0x18FF30u;
    SET_GPR_U32(ctx, 31, 0x18FF38u);
    ctx->pc = 0x18FF34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18FE30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_PutDataChunk_0x18fe30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FF38u; }
        else if (ctx->pc != 0x18FF38u) { ctx->pc = 0x18FF38u; }
    }
    if (ctx->pc != 0x18FF38u) { return; }
    ctx->pc = 0x18FF38u;
    // 0x18ff38: 0x8e220048
    ctx->pc = 0x18ff38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x18ff3c: 0xdfbf0070
    ctx->pc = 0x18ff3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18ff40: 0x501021
    ctx->pc = 0x18ff40u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18ff44: 0xdfb40050
    ctx->pc = 0x18ff44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18ff48: 0xae220048
    ctx->pc = 0x18ff48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x18ff4c: 0xaeb00000
    ctx->pc = 0x18ff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x18ff50: 0xdfb50060
    ctx->pc = 0x18ff50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18ff54: 0xdfb30040
    ctx->pc = 0x18ff54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ff58: 0xdfb20030
    ctx->pc = 0x18ff58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ff5c: 0xdfb10020
    ctx->pc = 0x18ff5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ff60: 0xdfb00010
    ctx->pc = 0x18ff60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ff64: 0x3e00008
    ctx->pc = 0x18FF64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FF68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18FF6Cu;
}
