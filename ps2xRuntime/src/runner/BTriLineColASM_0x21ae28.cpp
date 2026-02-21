#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BTriLineColASM
// Address: 0x21ae28 - 0x21afb8
void BTriLineColASM_0x21ae28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21ae28u;

    // 0x21ae28: 0x27bdffa0
    ctx->pc = 0x21ae28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_21ae2c:
    // 0x21ae2c: 0x0
    ctx->pc = 0x21ae2cu;
    // NOP
    // 0x21ae30: 0x0
    ctx->pc = 0x21ae30u;
    // NOP
    // 0x21ae34: 0x0
    ctx->pc = 0x21ae34u;
    // NOP
    // 0x21ae38: 0x0
    ctx->pc = 0x21ae38u;
    // NOP
    // 0x21ae3c: 0x0
    ctx->pc = 0x21ae3cu;
    // NOP
    // 0x21ae40: 0x0
    ctx->pc = 0x21ae40u;
    // NOP
    // 0x21ae44: 0x4901fff9
    ctx->pc = 0x21AE44u;
    {
        const bool branch_taken_0x21ae44 = ((ctx->vu0_status & 0x1));
        if (branch_taken_0x21ae44) {
            ctx->pc = 0x21AE2Cu;
            goto label_21ae2c;
        }
    }
    ctx->pc = 0x21AE4Cu;
    // 0x21ae4c: 0x0
    ctx->pc = 0x21ae4cu;
    // NOP
    // 0x21ae50: 0xc4800014
    ctx->pc = 0x21ae50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ae54: 0x3c011101
    ctx->pc = 0x21ae54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x21ae58: 0xe420c000
    ctx->pc = 0x21ae58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294950912), bits); }
    // 0x21ae5c: 0xc4800018
    ctx->pc = 0x21ae5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ae60: 0x3c011101
    ctx->pc = 0x21ae60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x21ae64: 0xe420c004
    ctx->pc = 0x21ae64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294950916), bits); }
    // 0x21ae68: 0xc480001c
    ctx->pc = 0x21ae68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ae6c: 0x3c011101
    ctx->pc = 0x21ae6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x21ae70: 0xe420c008
    ctx->pc = 0x21ae70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294950920), bits); }
    // 0x21ae74: 0xc4800008
    ctx->pc = 0x21ae74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ae78: 0x3c011101
    ctx->pc = 0x21ae78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x21ae7c: 0xe420c010
    ctx->pc = 0x21ae7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294950928), bits); }
    // 0x21ae80: 0xc480000c
    ctx->pc = 0x21ae80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ae84: 0x3c011101
    ctx->pc = 0x21ae84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x21ae88: 0xe420c014
    ctx->pc = 0x21ae88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294950932), bits); }
    // 0x21ae8c: 0xc4800010
    ctx->pc = 0x21ae8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ae90: 0x3c011101
    ctx->pc = 0x21ae90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x21ae94: 0xe420c018
    ctx->pc = 0x21ae94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294950936), bits); }
    // 0x21ae98: 0x3c020032
    ctx->pc = 0x21ae98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21ae9c: 0x2443f9d0
    ctx->pc = 0x21ae9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294965712));
    // 0x21aea0: 0xc440f9d0
    ctx->pc = 0x21aea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21aea4: 0x3c011101
    ctx->pc = 0x21aea4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x21aea8: 0xe420c020
    ctx->pc = 0x21aea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294950944), bits); }
    // 0x21aeac: 0xc4600004
    ctx->pc = 0x21aeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21aeb0: 0x3c011101
    ctx->pc = 0x21aeb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x21aeb4: 0xe420c024
    ctx->pc = 0x21aeb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294950948), bits); }
    // 0x21aeb8: 0xc4600008
    ctx->pc = 0x21aeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21aebc: 0x3c011101
    ctx->pc = 0x21aebcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x21aec0: 0xe420c028
    ctx->pc = 0x21aec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294950952), bits); }
    // 0x21aec4: 0x3c020032
    ctx->pc = 0x21aec4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21aec8: 0x2443f9e0
    ctx->pc = 0x21aec8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294965728));
    // 0x21aecc: 0xc440f9e0
    ctx->pc = 0x21aeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21aed0: 0x3c011101
    ctx->pc = 0x21aed0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x21aed4: 0xe420c030
    ctx->pc = 0x21aed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294950960), bits); }
    // 0x21aed8: 0xc4600004
    ctx->pc = 0x21aed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21aedc: 0x3c011101
    ctx->pc = 0x21aedcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x21aee0: 0xe420c034
    ctx->pc = 0x21aee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294950964), bits); }
    // 0x21aee4: 0xc4600008
    ctx->pc = 0x21aee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21aee8: 0x3c011101
    ctx->pc = 0x21aee8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x21aeec: 0xe420c038
    ctx->pc = 0x21aeecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294950968), bits); }
    // 0x21aef0: 0xc4800004
    ctx->pc = 0x21aef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21aef4: 0x3c011101
    ctx->pc = 0x21aef4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x21aef8: 0xe420c040
    ctx->pc = 0x21aef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294950976), bits); }
    // 0x21aefc: 0x3c011101
    ctx->pc = 0x21aefcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x21af00: 0xe42cc044
    ctx->pc = 0x21af00u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294950980), bits); }
    // 0x21af04: 0x84820020
    ctx->pc = 0x21af04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x21af08: 0x44820000
    ctx->pc = 0x21af08u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x21af0c: 0x46800020
    ctx->pc = 0x21af0cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21af10: 0x3c011101
    ctx->pc = 0x21af10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x21af14: 0xe420c050
    ctx->pc = 0x21af14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294950992), bits); }
    // 0x21af18: 0x84820022
    ctx->pc = 0x21af18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x21af1c: 0x44820000
    ctx->pc = 0x21af1cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x21af20: 0x46800020
    ctx->pc = 0x21af20u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21af24: 0x3c011101
    ctx->pc = 0x21af24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x21af28: 0xe420c058
    ctx->pc = 0x21af28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294951000), bits); }
    // 0x21af2c: 0x84820024
    ctx->pc = 0x21af2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x21af30: 0x44820000
    ctx->pc = 0x21af30u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x21af34: 0x46800020
    ctx->pc = 0x21af34u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21af38: 0x3c011101
    ctx->pc = 0x21af38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x21af3c: 0xe420c060
    ctx->pc = 0x21af3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294951008), bits); }
    // 0x21af40: 0x84820026
    ctx->pc = 0x21af40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x21af44: 0x44820000
    ctx->pc = 0x21af44u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x21af48: 0x46800020
    ctx->pc = 0x21af48u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x21af4c: 0x3c011101
    ctx->pc = 0x21af4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x21af50: 0xe420c068
    ctx->pc = 0x21af50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294951016), bits); }
    // 0x21af54: 0x3c020000
    ctx->pc = 0x21af54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)0 << 16));
    // 0x21af58: 0x244204f0
    ctx->pc = 0x21af58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1264));
    // 0x21af5c: 0x210c2
    ctx->pc = 0x21af5cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 3));
    // 0x21af60: 0xf
    ctx->pc = 0x21af60u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21af64: 0x40f
    ctx->pc = 0x21af64u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21af68: 0x0
    ctx->pc = 0x21af68u;
    // NOP
    // 0x21af6c: 0x0
    ctx->pc = 0x21af6cu;
    // NOP
    // 0x21af70: 0x48c2f801  — CTC2 $v0, $31 (write CMSAR1 → trigger VU1)
    ctx->pc = 0x21af70u;
    runtime->memory().triggerVU1(GPR_U32(ctx, 2));
    // 0x21af74: 0x0
    ctx->pc = 0x21af74u;
    // NOP
    // 0x21af78: 0x0
    ctx->pc = 0x21af78u;
    // NOP
    // 0x21af7c: 0xf
    ctx->pc = 0x21af7cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21af80: 0x40f
    ctx->pc = 0x21af80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_21af84:
    // 0x21af84: 0x0
    ctx->pc = 0x21af84u;
    // NOP
    // 0x21af88: 0x0
    ctx->pc = 0x21af88u;
    // NOP
    // 0x21af8c: 0x0
    ctx->pc = 0x21af8cu;
    // NOP
    // 0x21af90: 0x0
    ctx->pc = 0x21af90u;
    // NOP
    // 0x21af94: 0x0
    ctx->pc = 0x21af94u;
    // NOP
    // 0x21af98: 0x0
    ctx->pc = 0x21af98u;
    // NOP
    // 0x21af9c: 0x4901fff9
    ctx->pc = 0x21AF9Cu;
    {
        const bool branch_taken_0x21af9c = ((ctx->vu0_status & 0x1));
        if (branch_taken_0x21af9c) {
            ctx->pc = 0x21AF84u;
            goto label_21af84;
        }
    }
    ctx->pc = 0x21AFA4u;
    // 0x21afa4: 0x0
    ctx->pc = 0x21afa4u;
    // NOP
    // 0x21afa8: 0xf
    ctx->pc = 0x21afa8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21afac: 0x40f
    ctx->pc = 0x21afacu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21afb0: 0x3e00008
    ctx->pc = 0x21AFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AFB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21AE2Cu: goto label_21ae2c;
            case 0x21AF84u: goto label_21af84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21AFB8u;
}
