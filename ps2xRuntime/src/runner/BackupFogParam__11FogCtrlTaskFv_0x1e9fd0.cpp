#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: BackupFogParam__11FogCtrlTaskFv
// Address: 0x1e9fd0 - 0x1ea094
void BackupFogParam__11FogCtrlTaskFv_0x1e9fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("BackupFogParam__11FogCtrlTaskFv");


    ctx->pc = 0x1e9fd0u;

    // 0x1e9fd0: 0x3c010050
    ctx->pc = 0x1e9fd0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9fd4: 0x8c260cd0
    ctx->pc = 0x1e9fd4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 3280)));
    // 0x1e9fd8: 0x3c010050
    ctx->pc = 0x1e9fd8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9fdc: 0x8c250cd4
    ctx->pc = 0x1e9fdcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 3284)));
    // 0x1e9fe0: 0x3c010050
    ctx->pc = 0x1e9fe0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9fe4: 0x8c240cd8
    ctx->pc = 0x1e9fe4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3288)));
    // 0x1e9fe8: 0x3c010050
    ctx->pc = 0x1e9fe8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9fec: 0x8c230cdc
    ctx->pc = 0x1e9fecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 3292)));
    // 0x1e9ff0: 0x3c010050
    ctx->pc = 0x1e9ff0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9ff4: 0xc4210ce0
    ctx->pc = 0x1e9ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 3296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9ff8: 0x3c010050
    ctx->pc = 0x1e9ff8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9ffc: 0xc4200ce4
    ctx->pc = 0x1e9ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 3300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea000: 0x3c010050
    ctx->pc = 0x1ea000u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1ea004: 0xac260d00
    ctx->pc = 0x1ea004u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3328), GPR_U32(ctx, 6));
    // 0x1ea008: 0x3c010050
    ctx->pc = 0x1ea008u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1ea00c: 0xac250d04
    ctx->pc = 0x1ea00cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3332), GPR_U32(ctx, 5));
    // 0x1ea010: 0x3c010050
    ctx->pc = 0x1ea010u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1ea014: 0xac240d08
    ctx->pc = 0x1ea014u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3336), GPR_U32(ctx, 4));
    // 0x1ea018: 0x3c010050
    ctx->pc = 0x1ea018u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1ea01c: 0xac230d0c
    ctx->pc = 0x1ea01cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3340), GPR_U32(ctx, 3));
    // 0x1ea020: 0x3c010050
    ctx->pc = 0x1ea020u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1ea024: 0xe4210d10
    ctx->pc = 0x1ea024u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 3344), bits); }
    // 0x1ea028: 0x3c010050
    ctx->pc = 0x1ea028u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1ea02c: 0xe4200d14
    ctx->pc = 0x1ea02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 3348), bits); }
    // 0x1ea030: 0x3c010050
    ctx->pc = 0x1ea030u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1ea034: 0x8c250ce8
    ctx->pc = 0x1ea034u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 3304)));
    // 0x1ea038: 0x3c010050
    ctx->pc = 0x1ea038u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1ea03c: 0x8c240cec
    ctx->pc = 0x1ea03cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3308)));
    // 0x1ea040: 0x3c010050
    ctx->pc = 0x1ea040u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1ea044: 0xc4220cf0
    ctx->pc = 0x1ea044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 3312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ea048: 0x3c010050
    ctx->pc = 0x1ea048u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1ea04c: 0xc4210cf4
    ctx->pc = 0x1ea04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 3316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ea050: 0x3c010050
    ctx->pc = 0x1ea050u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1ea054: 0xc4200cf8
    ctx->pc = 0x1ea054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 3320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea058: 0x3c010050
    ctx->pc = 0x1ea058u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1ea05c: 0x84230cfc
    ctx->pc = 0x1ea05cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 3324)));
    // 0x1ea060: 0x3c010050
    ctx->pc = 0x1ea060u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1ea064: 0xac250d18
    ctx->pc = 0x1ea064u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3352), GPR_U32(ctx, 5));
    // 0x1ea068: 0x3c010050
    ctx->pc = 0x1ea068u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1ea06c: 0xac240d1c
    ctx->pc = 0x1ea06cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3356), GPR_U32(ctx, 4));
    // 0x1ea070: 0x3c010050
    ctx->pc = 0x1ea070u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1ea074: 0xe4220d20
    ctx->pc = 0x1ea074u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 3360), bits); }
    // 0x1ea078: 0x3c010050
    ctx->pc = 0x1ea078u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1ea07c: 0xe4210d24
    ctx->pc = 0x1ea07cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 3364), bits); }
    // 0x1ea080: 0x3c010050
    ctx->pc = 0x1ea080u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1ea084: 0xe4200d28
    ctx->pc = 0x1ea084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 3368), bits); }
    // 0x1ea088: 0x3c010050
    ctx->pc = 0x1ea088u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1ea08c: 0x3e00008
    ctx->pc = 0x1EA08Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA090u;
        WRITE16(ADD32(GPR_U32(ctx, 1), 3372), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EA094u;
}
