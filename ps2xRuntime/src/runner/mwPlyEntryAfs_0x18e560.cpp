#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyEntryAfs
// Address: 0x18e560 - 0x18e5fc
void mwPlyEntryAfs_0x18e560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyEntryAfs");


    ctx->pc = 0x18e560u;

    // 0x18e560: 0x27bdffa0
    ctx->pc = 0x18e560u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18e564: 0x3c02002f
    ctx->pc = 0x18e564u;
    SET_GPR_U32(ctx, 2, ((uint32_t)47 << 16));
    // 0x18e568: 0xffb30040
    ctx->pc = 0x18e568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x18e56c: 0x3a0382d
    ctx->pc = 0x18e56cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e570: 0xffb10020
    ctx->pc = 0x18e570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x18e574: 0x2453c400
    ctx->pc = 0x18e574u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294951936));
    // 0x18e578: 0xffb00010
    ctx->pc = 0x18e578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x18e57c: 0xc0882d
    ctx->pc = 0x18e57cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e580: 0xffbf0050
    ctx->pc = 0x18e580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18e584: 0xa0802d
    ctx->pc = 0x18e584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e588: 0xffb20030
    ctx->pc = 0x18e588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x18e58c: 0x220282d
    ctx->pc = 0x18e58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e590: 0x8c920080
    ctx->pc = 0x18e590u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x18e594: 0x260302d
    ctx->pc = 0x18e594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e598: 0x200202d
    ctx->pc = 0x18e598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e59c: 0x37a80004
    ctx->pc = 0x18e59cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 29), 4));
    // 0x18e5a0: 0xc05b0a2
    ctx->pc = 0x18E5A0u;
    SET_GPR_U32(ctx, 31, 0x18E5A8u);
    ctx->pc = 0x18E5A4u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x16C288u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetFnameRangeEx_0x16c288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E5A8u; }
        else if (ctx->pc != 0x18E5A8u) { ctx->pc = 0x18E5A8u; }
    }
    if (ctx->pc != 0x18E5A8u) { return; }
    ctx->pc = 0x18E5A8u;
    // 0x18e5a8: 0x14400009
    ctx->pc = 0x18E5A8u;
    {
        const bool branch_taken_0x18e5a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18E5ACu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x18e5a8) {
            ctx->pc = 0x18E5D0u;
            goto label_18e5d0;
        }
    }
    ctx->pc = 0x18E5B0u;
    // 0x18e5b0: 0x8fa70004
    ctx->pc = 0x18e5b0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x18e5b4: 0x240202d
    ctx->pc = 0x18e5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e5b8: 0x8fa80008
    ctx->pc = 0x18e5b8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18e5bc: 0x260282d
    ctx->pc = 0x18e5bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e5c0: 0xc05e81a
    ctx->pc = 0x18E5C0u;
    SET_GPR_U32(ctx, 31, 0x18E5C8u);
    ctx->pc = 0x18E5C4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x17A068u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_EntryFileRange_0x17a068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E5C8u; }
        else if (ctx->pc != 0x18E5C8u) { ctx->pc = 0x18E5C8u; }
    }
    if (ctx->pc != 0x18E5C8u) { return; }
    ctx->pc = 0x18E5C8u;
    // 0x18e5c8: 0x10000006
    ctx->pc = 0x18E5C8u;
    {
        const bool branch_taken_0x18e5c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18E5CCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x18e5c8) {
            ctx->pc = 0x18E5E4u;
            goto label_18e5e4;
        }
    }
    ctx->pc = 0x18E5D0u;
label_18e5d0:
    // 0x18e5d0: 0x200282d
    ctx->pc = 0x18e5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e5d4: 0x2484cfe0
    ctx->pc = 0x18e5d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954976));
    // 0x18e5d8: 0xc063dda
    ctx->pc = 0x18E5D8u;
    SET_GPR_U32(ctx, 31, 0x18E5E0u);
    ctx->pc = 0x18E5DCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E5E0u; }
        else if (ctx->pc != 0x18E5E0u) { ctx->pc = 0x18E5E0u; }
    }
    if (ctx->pc != 0x18E5E0u) { return; }
    ctx->pc = 0x18E5E0u;
    // 0x18e5e0: 0xdfbf0050
    ctx->pc = 0x18e5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_18e5e4:
    // 0x18e5e4: 0xdfb30040
    ctx->pc = 0x18e5e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e5e8: 0xdfb20030
    ctx->pc = 0x18e5e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e5ec: 0xdfb10020
    ctx->pc = 0x18e5ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e5f0: 0xdfb00010
    ctx->pc = 0x18e5f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e5f4: 0x3e00008
    ctx->pc = 0x18E5F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E5F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E5D0u: goto label_18e5d0;
            case 0x18E5E4u: goto label_18e5e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18E5FCu;
}
