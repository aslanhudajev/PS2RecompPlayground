#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_SetCondY16
// Address: 0x195ac8 - 0x195b50
void sfmpv_SetCondY16_0x195ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_SetCondY16");


    ctx->pc = 0x195ac8u;

    // 0x195ac8: 0x27bdffd0
    ctx->pc = 0x195ac8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x195acc: 0x2405001c
    ctx->pc = 0x195accu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 28));
    // 0x195ad0: 0xffb00000
    ctx->pc = 0x195ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x195ad4: 0x80802d
    ctx->pc = 0x195ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195ad8: 0xffbf0020
    ctx->pc = 0x195ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x195adc: 0xc0674c2
    ctx->pc = 0x195ADCu;
    SET_GPR_U32(ctx, 31, 0x195AE4u);
    ctx->pc = 0x195AE0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195AE4u; }
        else if (ctx->pc != 0x195AE4u) { ctx->pc = 0x195AE4u; }
    }
    if (ctx->pc != 0x195AE4u) { return; }
    ctx->pc = 0x195AE4u;
    // 0x195ae4: 0x10400015
    ctx->pc = 0x195AE4u;
    {
        const bool branch_taken_0x195ae4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x195AE8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x195ae4) {
            ctx->pc = 0x195B3Cu;
            goto label_195b3c;
        }
    }
    ctx->pc = 0x195AECu;
    // 0x195aec: 0xc064df6
    ctx->pc = 0x195AECu;
    SET_GPR_U32(ctx, 31, 0x195AF4u);
    ctx->pc = 0x195AF0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1937D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFHDS_GetColType_0x1937d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195AF4u; }
        else if (ctx->pc != 0x195AF4u) { ctx->pc = 0x195AF4u; }
    }
    if (ctx->pc != 0x195AF4u) { return; }
    ctx->pc = 0x195AF4u;
    // 0x195af4: 0x40182d
    ctx->pc = 0x195af4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195af8: 0x14600003
    ctx->pc = 0x195AF8u;
    {
        const bool branch_taken_0x195af8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x195af8) {
            ctx->pc = 0x195B08u;
            goto label_195b08;
        }
    }
    ctx->pc = 0x195B00u;
    // 0x195b00: 0x10000006
    ctx->pc = 0x195B00u;
    {
        const bool branch_taken_0x195b00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x195B04u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x195b00) {
            ctx->pc = 0x195B1Cu;
            goto label_195b1c;
        }
    }
    ctx->pc = 0x195B08u;
label_195b08:
    // 0x195b08: 0x1c600005
    ctx->pc = 0x195B08u;
    {
        const bool branch_taken_0x195b08 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x195B0Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x195b08) {
            ctx->pc = 0x195B20u;
            goto label_195b20;
        }
    }
    ctx->pc = 0x195B10u;
    // 0x195b10: 0x2402ffff
    ctx->pc = 0x195b10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x195b14: 0x1062000a
    ctx->pc = 0x195B14u;
    {
        const bool branch_taken_0x195b14 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x195B18u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x195b14) {
            ctx->pc = 0x195B40u;
            goto label_195b40;
        }
    }
    ctx->pc = 0x195B1Cu;
label_195b1c:
    // 0x195b1c: 0x200202d
    ctx->pc = 0x195b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_195b20:
    // 0x195b20: 0x220302d
    ctx->pc = 0x195b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195b24: 0xdfbf0020
    ctx->pc = 0x195b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195b28: 0x24050005
    ctx->pc = 0x195b28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x195b2c: 0xdfb10010
    ctx->pc = 0x195b2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195b30: 0xdfb00000
    ctx->pc = 0x195b30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195b34: 0x8065604
    ctx->pc = 0x195B34u;
    ctx->pc = 0x195B38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x195810u;
    SFD_SetMpvCond_0x195810(rdram, ctx, runtime); return;
    ctx->pc = 0x195B3Cu;
label_195b3c:
    // 0x195b3c: 0xdfbf0020
    ctx->pc = 0x195b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_195b40:
    // 0x195b40: 0xdfb10010
    ctx->pc = 0x195b40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195b44: 0xdfb00000
    ctx->pc = 0x195b44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195b48: 0x3e00008
    ctx->pc = 0x195B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195B4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195B08u: goto label_195b08;
            case 0x195B1Cu: goto label_195b1c;
            case 0x195B20u: goto label_195b20;
            case 0x195B3Cu: goto label_195b3c;
            case 0x195B40u: goto label_195b40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195B50u;
}
