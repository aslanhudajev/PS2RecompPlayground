#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyElemPicRate
// Address: 0x1a0ab8 - 0x1a0b24
void SFH_AnlyElemPicRate_0x1a0ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyElemPicRate");


    ctx->pc = 0x1a0ab8u;

    // 0x1a0ab8: 0x27bdffc0
    ctx->pc = 0x1a0ab8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a0abc: 0xffb10010
    ctx->pc = 0x1a0abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a0ac0: 0xffb20020
    ctx->pc = 0x1a0ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a0ac4: 0x30b100ff
    ctx->pc = 0x1a0ac4u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 5), 255));
    // 0x1a0ac8: 0xffb00000
    ctx->pc = 0x1a0ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0acc: 0xc0902d
    ctx->pc = 0x1a0accu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ad0: 0xffbf0030
    ctx->pc = 0x1a0ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a0ad4: 0xc0681d0
    ctx->pc = 0x1A0AD4u;
    SET_GPR_U32(ctx, 31, 0x1A0ADCu);
    ctx->pc = 0x1A0AD8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0740u;
    {
        const uint32_t __entryPc = ctx->pc;
        getElemInfPtr_0x1a0740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0ADCu; }
        else if (ctx->pc != 0x1A0ADCu) { ctx->pc = 0x1A0ADCu; }
    }
    if (ctx->pc != 0x1A0ADCu) { return; }
    ctx->pc = 0x1A0ADCu;
    // 0x1a0adc: 0x40802d
    ctx->pc = 0x1a0adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ae0: 0x1200000a
    ctx->pc = 0x1A0AE0u;
    {
        const bool branch_taken_0x1a0ae0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0AE4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0ae0) {
            ctx->pc = 0x1A0B0Cu;
            goto label_1a0b0c;
        }
    }
    ctx->pc = 0x1A0AE8u;
    // 0x1a0ae8: 0xc0683c8
    ctx->pc = 0x1A0AE8u;
    SET_GPR_U32(ctx, 31, 0x1A0AF0u);
    ctx->pc = 0x1A0AECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        chkStmId_0x1a0f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0AF0u; }
        else if (ctx->pc != 0x1A0AF0u) { ctx->pc = 0x1A0AF0u; }
    }
    if (ctx->pc != 0x1A0AF0u) { return; }
    ctx->pc = 0x1A0AF0u;
    // 0x1a0af0: 0x240300e0
    ctx->pc = 0x1a0af0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 224));
    // 0x1a0af4: 0x14430005
    ctx->pc = 0x1A0AF4u;
    {
        const bool branch_taken_0x1a0af4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1A0AF8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0af4) {
            ctx->pc = 0x1A0B0Cu;
            goto label_1a0b0c;
        }
    }
    ctx->pc = 0x1A0AFCu;
    // 0x1a0afc: 0xc06838c
    ctx->pc = 0x1A0AFCu;
    SET_GPR_U32(ctx, 31, 0x1A0B04u);
    ctx->pc = 0x1A0B00u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 31)));
    ctx->pc = 0x1A0E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        getPicRate_0x1a0e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0B04u; }
        else if (ctx->pc != 0x1A0B04u) { ctx->pc = 0x1A0B04u; }
    }
    if (ctx->pc != 0x1A0B04u) { return; }
    ctx->pc = 0x1A0B04u;
    // 0x1a0b04: 0xae420000
    ctx->pc = 0x1a0b04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1a0b08: 0x24020001
    ctx->pc = 0x1a0b08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1a0b0c:
    // 0x1a0b0c: 0xdfbf0030
    ctx->pc = 0x1a0b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0b10: 0xdfb20020
    ctx->pc = 0x1a0b10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0b14: 0xdfb10010
    ctx->pc = 0x1a0b14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0b18: 0xdfb00000
    ctx->pc = 0x1a0b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0b1c: 0x3e00008
    ctx->pc = 0x1A0B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0B20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0B0Cu: goto label_1a0b0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0B24u;
}
