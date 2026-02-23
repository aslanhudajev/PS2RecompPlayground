#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxt_eos_entry
// Address: 0x1730c0 - 0x173144
void adxt_eos_entry_0x1730c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxt_eos_entry");


    ctx->pc = 0x1730c0u;

    // 0x1730c0: 0x27bdffd0
    ctx->pc = 0x1730c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1730c4: 0xffb00000
    ctx->pc = 0x1730c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1730c8: 0xffbf0020
    ctx->pc = 0x1730c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1730cc: 0x80802d
    ctx->pc = 0x1730ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1730d0: 0xffb10010
    ctx->pc = 0x1730d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1730d4: 0x8e110008
    ctx->pc = 0x1730d4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1730d8: 0xc05ba2c
    ctx->pc = 0x1730D8u;
    SET_GPR_U32(ctx, 31, 0x1730E0u);
    ctx->pc = 0x1730DCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x16E8B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetLpStartOfst_0x16e8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1730E0u; }
        else if (ctx->pc != 0x1730E0u) { ctx->pc = 0x1730E0u; }
    }
    if (ctx->pc != 0x1730E0u) { return; }
    ctx->pc = 0x1730E0u;
    // 0x1730e0: 0x40182d
    ctx->pc = 0x1730e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1730e4: 0x8202006c
    ctx->pc = 0x1730e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1730e8: 0x1440000c
    ctx->pc = 0x1730E8u;
    {
        const bool branch_taken_0x1730e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1730ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1730e8) {
            ctx->pc = 0x17311Cu;
            goto label_17311c;
        }
    }
    ctx->pc = 0x1730F0u;
    // 0x1730f0: 0x8e040004
    ctx->pc = 0x1730f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1730f4: 0xc05b9c8
    ctx->pc = 0x1730F4u;
    SET_GPR_U32(ctx, 31, 0x1730FCu);
    ctx->pc = 0x1730F8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x16E720u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_SetTrapNumSmpl_0x16e720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1730FCu; }
        else if (ctx->pc != 0x1730FCu) { ctx->pc = 0x1730FCu; }
    }
    if (ctx->pc != 0x1730FCu) { return; }
    ctx->pc = 0x1730FCu;
    // 0x1730fc: 0x8e040008
    ctx->pc = 0x1730fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x173100: 0x3c057fff
    ctx->pc = 0x173100u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32767 << 16));
    // 0x173104: 0xdfbf0020
    ctx->pc = 0x173104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173108: 0x34a5ffff
    ctx->pc = 0x173108u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x17310c: 0xdfb10010
    ctx->pc = 0x17310cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173110: 0xdfb00000
    ctx->pc = 0x173110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173114: 0x805c338
    ctx->pc = 0x173114u;
    ctx->pc = 0x173118u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x170CE0u;
    ADXSTM_SetEos_0x170ce0(rdram, ctx, runtime); return;
    ctx->pc = 0x17311Cu;
label_17311c:
    // 0x17311c: 0x246507ff
    ctx->pc = 0x17311cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 2047));
    // 0x173120: 0x43102a
    ctx->pc = 0x173120u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x173124: 0x220202d
    ctx->pc = 0x173124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173128: 0x62280b
    ctx->pc = 0x173128u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
    // 0x17312c: 0xdfbf0020
    ctx->pc = 0x17312cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173130: 0xdfb10010
    ctx->pc = 0x173130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173134: 0x52ac3
    ctx->pc = 0x173134u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 11));
    // 0x173138: 0xdfb00000
    ctx->pc = 0x173138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17313c: 0x805c2e2
    ctx->pc = 0x17313Cu;
    ctx->pc = 0x173140u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x170B88u;
    ADXSTM_Seek_0x170b88(rdram, ctx, runtime); return;
    ctx->pc = 0x173144u;
}
