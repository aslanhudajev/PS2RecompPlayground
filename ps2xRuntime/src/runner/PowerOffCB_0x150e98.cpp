#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PowerOffCB
// Address: 0x150e98 - 0x150efc
void PowerOffCB_0x150e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PowerOffCB");


    ctx->pc = 0x150e98u;

    // 0x150e98: 0x27bdffd0
    ctx->pc = 0x150e98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x150e9c: 0xffb10010
    ctx->pc = 0x150e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x150ea0: 0xffb00000
    ctx->pc = 0x150ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x150ea4: 0x24110001
    ctx->pc = 0x150ea4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x150ea8: 0x3c100022
    ctx->pc = 0x150ea8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)34 << 16));
    // 0x150eac: 0xffbf0020
    ctx->pc = 0x150eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x150eb0: 0xc05725c
    ctx->pc = 0x150EB0u;
    SET_GPR_U32(ctx, 31, 0x150EB8u);
    ctx->pc = 0x150EB4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31908), GPR_U32(ctx, 17));
    ctx->pc = 0x15C970u;
    {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x15c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150EB8u; }
        else if (ctx->pc != 0x150EB8u) { ctx->pc = 0x150EB8u; }
    }
    if (ctx->pc != 0x150EB8u) { return; }
    ctx->pc = 0x150EB8u;
    // 0x150eb8: 0x3c050015
    ctx->pc = 0x150eb8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)21 << 16));
    // 0x150ebc: 0x3c048000
    ctx->pc = 0x150ebcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x150ec0: 0x302d
    ctx->pc = 0x150ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150ec4: 0x24a50e58
    ctx->pc = 0x150ec4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 3672));
    // 0x150ec8: 0xc055b68
    ctx->pc = 0x150EC8u;
    SET_GPR_U32(ctx, 31, 0x150ED0u);
    ctx->pc = 0x150ECCu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 18));
    ctx->pc = 0x156DA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifAddCmdHandler_0x156da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150ED0u; }
        else if (ctx->pc != 0x150ED0u) { ctx->pc = 0x150ED0u; }
    }
    if (ctx->pc != 0x150ED0u) { return; }
    ctx->pc = 0x150ED0u;
    // 0x150ed0: 0xc05726e
    ctx->pc = 0x150ED0u;
    SET_GPR_U32(ctx, 31, 0x150ED8u);
    ctx->pc = 0x15C9B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x15c9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150ED8u; }
        else if (ctx->pc != 0x150ED8u) { ctx->pc = 0x150ED8u; }
    }
    if (ctx->pc != 0x150ED8u) { return; }
    ctx->pc = 0x150ED8u;
    // 0x150ed8: 0x3c030022
    ctx->pc = 0x150ed8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34 << 16));
    // 0x150edc: 0xae007ca4
    ctx->pc = 0x150edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 31908), GPR_U32(ctx, 0));
    // 0x150ee0: 0xac717cbc
    ctx->pc = 0x150ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31932), GPR_U32(ctx, 17));
    // 0x150ee4: 0x24020001
    ctx->pc = 0x150ee4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x150ee8: 0xdfbf0020
    ctx->pc = 0x150ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150eec: 0xdfb10010
    ctx->pc = 0x150eecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150ef0: 0xdfb00000
    ctx->pc = 0x150ef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150ef4: 0x3e00008
    ctx->pc = 0x150EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150EF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x150EFCu;
}
