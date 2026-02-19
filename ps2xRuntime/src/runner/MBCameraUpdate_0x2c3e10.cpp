#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBCameraUpdate
// Address: 0x2c3e10 - 0x2c4100
void MBCameraUpdate_0x2c3e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c3e10u;

    // 0x2c3e10: 0x27bdff90
    ctx->pc = 0x2c3e10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c3e14: 0xffbf0050
    ctx->pc = 0x2c3e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c3e18: 0xffb40040
    ctx->pc = 0x2c3e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2c3e1c: 0xffb30030
    ctx->pc = 0x2c3e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c3e20: 0xffb20020
    ctx->pc = 0x2c3e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c3e24: 0xffb10010
    ctx->pc = 0x2c3e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c3e28: 0xffb00000
    ctx->pc = 0x2c3e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c3e2c: 0xe7b40060
    ctx->pc = 0x2c3e2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2c3e30: 0x80982d
    ctx->pc = 0x2c3e30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3e34: 0xa0802d
    ctx->pc = 0x2c3e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3e38: 0x3c02003a
    ctx->pc = 0x2c3e38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c3e3c: 0x8c421bd0
    ctx->pc = 0x2c3e3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7120)));
    // 0x2c3e40: 0x24540070
    ctx->pc = 0x2c3e40u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 112));
    // 0x2c3e44: 0x245100b0
    ctx->pc = 0x2c3e44u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 176));
    // 0x2c3e48: 0x245200f0
    ctx->pc = 0x2c3e48u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 240));
    // 0x2c3e4c: 0x282d
    ctx->pc = 0x2c3e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3e50:
    // 0x2c3e50: 0x51100
    ctx->pc = 0x2c3e50u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
    // 0x2c3e54: 0x501021
    ctx->pc = 0x2c3e54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c3e58: 0xac40000c
    ctx->pc = 0x2c3e58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2c3e5c: 0x24a50001
    ctx->pc = 0x2c3e5cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c3e60: 0x28a20003
    ctx->pc = 0x2c3e60u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 3));
    // 0x2c3e64: 0x1440fffa
    ctx->pc = 0x2C3E64u;
    {
        const bool branch_taken_0x2c3e64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c3e64) {
            ctx->pc = 0x2C3E50u;
            goto label_2c3e50;
        }
    }
    ctx->pc = 0x2C3E6Cu;
    // 0x2c3e6c: 0x3c013f80
    ctx->pc = 0x2c3e6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c3e70: 0x44810000
    ctx->pc = 0x2c3e70u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c3e74: 0xe600003c
    ctx->pc = 0x2c3e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x2c3e78: 0x260202d
    ctx->pc = 0x2c3e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3e7c: 0xc0aae5a
    ctx->pc = 0x2C3E7Cu;
    SET_GPR_U32(ctx, 31, 0x2C3E84u);
    ctx->pc = 0x2C3E80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 32));
    ctx->pc = 0x2AB968u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCameraUpdate_0x2ab968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3E84u; }
    }
    if (ctx->pc != 0x2C3E84u) { return; }
    ctx->pc = 0x2C3E84u;
    // 0x2c3e84: 0x3c030038
    ctx->pc = 0x2c3e84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2c3e88: 0x24020001
    ctx->pc = 0x2c3e88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3e8c: 0xac62b0d0
    ctx->pc = 0x2c3e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947024), GPR_U32(ctx, 2));
    // 0x2c3e90: 0x3c020038
    ctx->pc = 0x2c3e90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c3e94: 0x2443b0d8
    ctx->pc = 0x2c3e94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294947032));
    // 0x2c3e98: 0xc6600000
    ctx->pc = 0x2c3e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3e9c: 0xe440b0d8
    ctx->pc = 0x2c3e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294947032), bits); }
    // 0x2c3ea0: 0xc6600004
    ctx->pc = 0x2c3ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3ea4: 0x46000007
    ctx->pc = 0x2c3ea4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2c3ea8: 0xe4600004
    ctx->pc = 0x2c3ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2c3eac: 0xc6600008
    ctx->pc = 0x2c3eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3eb0: 0xe4600008
    ctx->pc = 0x2c3eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2c3eb4: 0x3c030038
    ctx->pc = 0x2c3eb4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2c3eb8: 0x2462b0f0
    ctx->pc = 0x2c3eb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294947056));
    // 0x2c3ebc: 0xc6000000
    ctx->pc = 0x2c3ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3ec0: 0xe460b0f0
    ctx->pc = 0x2c3ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294947056), bits); }
    // 0x2c3ec4: 0xc6000004
    ctx->pc = 0x2c3ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3ec8: 0xe4400004
    ctx->pc = 0x2c3ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c3ecc: 0xc6000008
    ctx->pc = 0x2c3eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3ed0: 0xe4400008
    ctx->pc = 0x2c3ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c3ed4: 0xc6000010
    ctx->pc = 0x2c3ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3ed8: 0xe4400010
    ctx->pc = 0x2c3ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2c3edc: 0xc6000014
    ctx->pc = 0x2c3edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3ee0: 0xe4400014
    ctx->pc = 0x2c3ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2c3ee4: 0xc6000018
    ctx->pc = 0x2c3ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3ee8: 0xe4400018
    ctx->pc = 0x2c3ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2c3eec: 0xc6000020
    ctx->pc = 0x2c3eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3ef0: 0xe4400020
    ctx->pc = 0x2c3ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2c3ef4: 0xc6000024
    ctx->pc = 0x2c3ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3ef8: 0xe4400024
    ctx->pc = 0x2c3ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2c3efc: 0xc6000028
    ctx->pc = 0x2c3efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3f00: 0xe4400028
    ctx->pc = 0x2c3f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x2c3f04: 0xc6000030
    ctx->pc = 0x2c3f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3f08: 0xe4400030
    ctx->pc = 0x2c3f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2c3f0c: 0xc6000034
    ctx->pc = 0x2c3f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3f10: 0xe4400034
    ctx->pc = 0x2c3f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x2c3f14: 0xc6000038
    ctx->pc = 0x2c3f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3f18: 0xe4400038
    ctx->pc = 0x2c3f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2c3f1c: 0x3c020038
    ctx->pc = 0x2c3f1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c3f20: 0x8c42b0d4
    ctx->pc = 0x2c3f20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294947028)));
    // 0x2c3f24: 0x10400016
    ctx->pc = 0x2C3F24u;
    {
        const bool branch_taken_0x2c3f24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c3f24) {
            ctx->pc = 0x2C3F80u;
            goto label_2c3f80;
        }
    }
    ctx->pc = 0x2C3F2Cu;
    // 0x2c3f2c: 0xc6600000
    ctx->pc = 0x2c3f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3f30: 0x44800800
    ctx->pc = 0x2c3f30u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x2c3f34: 0x46010032
    ctx->pc = 0x2c3f34u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3f38: 0x0
    ctx->pc = 0x2c3f38u;
    // NOP
    // 0x2c3f3c: 0x4500000f
    ctx->pc = 0x2C3F3Cu;
    {
        const bool branch_taken_0x2c3f3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C3F40u;
        SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
        if (branch_taken_0x2c3f3c) {
            ctx->pc = 0x2C3F7Cu;
            goto label_2c3f7c;
        }
    }
    ctx->pc = 0x2C3F44u;
    // 0x2c3f44: 0xc6600004
    ctx->pc = 0x2c3f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3f48: 0x46010032
    ctx->pc = 0x2c3f48u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3f4c: 0x0
    ctx->pc = 0x2c3f4cu;
    // NOP
    // 0x2c3f50: 0x4502000b
    ctx->pc = 0x2C3F50u;
    {
        const bool branch_taken_0x2c3f50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3f50) {
            ctx->pc = 0x2C3F54u;
            WRITE32(ADD32(GPR_U32(ctx, 2), 4294947028), GPR_U32(ctx, 0));
            ctx->pc = 0x2C3F80u;
            goto label_2c3f80;
        }
    }
    ctx->pc = 0x2C3F58u;
    // 0x2c3f58: 0xc6600008
    ctx->pc = 0x2c3f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3f5c: 0x46010032
    ctx->pc = 0x2c3f5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3f60: 0x0
    ctx->pc = 0x2c3f60u;
    // NOP
    // 0x2c3f64: 0x45020006
    ctx->pc = 0x2C3F64u;
    {
        const bool branch_taken_0x2c3f64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3f64) {
            ctx->pc = 0x2C3F68u;
            WRITE32(ADD32(GPR_U32(ctx, 2), 4294947028), GPR_U32(ctx, 0));
            ctx->pc = 0x2C3F80u;
            goto label_2c3f80;
        }
    }
    ctx->pc = 0x2C3F6Cu;
    // 0x2c3f6c: 0x3c01c1f0
    ctx->pc = 0x2c3f6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49648 << 16));
    // 0x2c3f70: 0x44810000
    ctx->pc = 0x2c3f70u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c3f74: 0x10000002
    ctx->pc = 0x2C3F74u;
    {
        const bool branch_taken_0x2c3f74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C3F78u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        if (branch_taken_0x2c3f74) {
            ctx->pc = 0x2C3F80u;
            goto label_2c3f80;
        }
    }
    ctx->pc = 0x2C3F7Cu;
label_2c3f7c:
    // 0x2c3f7c: 0xac40b0d4
    ctx->pc = 0x2c3f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947028), GPR_U32(ctx, 0));
label_2c3f80:
    // 0x2c3f80: 0x3c013f80
    ctx->pc = 0x2c3f80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c3f84: 0x4481a000
    ctx->pc = 0x2c3f84u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2c3f88: 0xe6540000
    ctx->pc = 0x2c3f88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2c3f8c: 0xae400004
    ctx->pc = 0x2c3f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x2c3f90: 0xae400008
    ctx->pc = 0x2c3f90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x2c3f94: 0xae400010
    ctx->pc = 0x2c3f94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x2c3f98: 0xe6540014
    ctx->pc = 0x2c3f98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x2c3f9c: 0xae400018
    ctx->pc = 0x2c3f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x2c3fa0: 0xae400020
    ctx->pc = 0x2c3fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x2c3fa4: 0xae400024
    ctx->pc = 0x2c3fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x2c3fa8: 0xe6540028
    ctx->pc = 0x2c3fa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x2c3fac: 0xae400030
    ctx->pc = 0x2c3facu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
    // 0x2c3fb0: 0xae400034
    ctx->pc = 0x2c3fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x2c3fb4: 0xae400038
    ctx->pc = 0x2c3fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
    // 0x2c3fb8: 0x200202d
    ctx->pc = 0x2c3fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3fbc: 0xc0b549e
    ctx->pc = 0x2C3FBCu;
    SET_GPR_U32(ctx, 31, 0x2C3FC4u);
    ctx->pc = 0x2C3FC0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3FC4u; }
    }
    if (ctx->pc != 0x2C3FC4u) { return; }
    ctx->pc = 0x2C3FC4u;
    // 0x2c3fc4: 0xc6600000
    ctx->pc = 0x2c3fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3fc8: 0xe6800030
    ctx->pc = 0x2c3fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 48), bits); }
    // 0x2c3fcc: 0xc6600004
    ctx->pc = 0x2c3fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3fd0: 0xe6800034
    ctx->pc = 0x2c3fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 52), bits); }
    // 0x2c3fd4: 0xc6600008
    ctx->pc = 0x2c3fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3fd8: 0xe6800038
    ctx->pc = 0x2c3fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 56), bits); }
    // 0x2c3fdc: 0xe694003c
    ctx->pc = 0x2c3fdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
    // 0x2c3fe0: 0x282d
    ctx->pc = 0x2c3fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3fe4: 0x0
    ctx->pc = 0x2c3fe4u;
    // NOP
label_2c3fe8:
    // 0x2c3fe8: 0x202d
    ctx->pc = 0x2c3fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3fec: 0x51100
    ctx->pc = 0x2c3fecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
    // 0x2c3ff0: 0x513821
    ctx->pc = 0x2c3ff0u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2c3ff4: 0x53080
    ctx->pc = 0x2c3ff4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 5), 2));
label_2c3ff8:
    // 0x2c3ff8: 0x41880
    ctx->pc = 0x2c3ff8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c3ffc: 0x671821
    ctx->pc = 0x2c3ffcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2c4000: 0x41100
    ctx->pc = 0x2c4000u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 4));
    // 0x2c4004: 0x501021
    ctx->pc = 0x2c4004u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c4008: 0xc21021
    ctx->pc = 0x2c4008u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2c400c: 0xc4400000
    ctx->pc = 0x2c400cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4010: 0x24840001
    ctx->pc = 0x2c4010u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c4014: 0x28820003
    ctx->pc = 0x2c4014u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
    // 0x2c4018: 0x1440fff7
    ctx->pc = 0x2C4018u;
    {
        const bool branch_taken_0x2c4018 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C401Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        if (branch_taken_0x2c4018) {
            ctx->pc = 0x2C3FF8u;
            goto label_2c3ff8;
        }
    }
    ctx->pc = 0x2C4020u;
    // 0x2c4020: 0x51100
    ctx->pc = 0x2c4020u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
    // 0x2c4024: 0x511021
    ctx->pc = 0x2c4024u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2c4028: 0xac40000c
    ctx->pc = 0x2c4028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2c402c: 0x51080
    ctx->pc = 0x2c402cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2c4030: 0x511821
    ctx->pc = 0x2c4030u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2c4034: 0x531021
    ctx->pc = 0x2c4034u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2c4038: 0xc4400000
    ctx->pc = 0x2c4038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c403c: 0x24a50001
    ctx->pc = 0x2c403cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c4040: 0x28a20003
    ctx->pc = 0x2c4040u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 3));
    // 0x2c4044: 0x1440ffe8
    ctx->pc = 0x2C4044u;
    {
        const bool branch_taken_0x2c4044 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C4048u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
        if (branch_taken_0x2c4044) {
            ctx->pc = 0x2C3FE8u;
            goto label_2c3fe8;
        }
    }
    ctx->pc = 0x2C404Cu;
    // 0x2c404c: 0x3c013f80
    ctx->pc = 0x2c404cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c4050: 0x44810000
    ctx->pc = 0x2c4050u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c4054: 0xe620003c
    ctx->pc = 0x2c4054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x2c4058: 0xc6220030
    ctx->pc = 0x2c4058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c405c: 0x46001087
    ctx->pc = 0x2c405cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2c4060: 0xc6230034
    ctx->pc = 0x2c4060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c4064: 0x460018c7
    ctx->pc = 0x2c4064u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x2c4068: 0xc6240038
    ctx->pc = 0x2c4068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c406c: 0x46002107
    ctx->pc = 0x2c406cu;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x2c4070: 0xc6210000
    ctx->pc = 0x2c4070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4074: 0x46011042
    ctx->pc = 0x2c4074u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2c4078: 0xc6200010
    ctx->pc = 0x2c4078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c407c: 0x46001802
    ctx->pc = 0x2c407cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2c4080: 0x46000840
    ctx->pc = 0x2c4080u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c4084: 0xc6200020
    ctx->pc = 0x2c4084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4088: 0x46002002
    ctx->pc = 0x2c4088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2c408c: 0x46000840
    ctx->pc = 0x2c408cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c4090: 0xe6210030
    ctx->pc = 0x2c4090u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2c4094: 0xc6210004
    ctx->pc = 0x2c4094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4098: 0x46011042
    ctx->pc = 0x2c4098u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2c409c: 0xc6200014
    ctx->pc = 0x2c409cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c40a0: 0x46001802
    ctx->pc = 0x2c40a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2c40a4: 0x46000840
    ctx->pc = 0x2c40a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c40a8: 0xc6200024
    ctx->pc = 0x2c40a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c40ac: 0x46002002
    ctx->pc = 0x2c40acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2c40b0: 0x46000840
    ctx->pc = 0x2c40b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c40b4: 0xe6210034
    ctx->pc = 0x2c40b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2c40b8: 0xc6200008
    ctx->pc = 0x2c40b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c40bc: 0x46001082
    ctx->pc = 0x2c40bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c40c0: 0xc6200018
    ctx->pc = 0x2c40c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c40c4: 0x460018c2
    ctx->pc = 0x2c40c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2c40c8: 0x46031080
    ctx->pc = 0x2c40c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2c40cc: 0xc6200028
    ctx->pc = 0x2c40ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c40d0: 0x46002102
    ctx->pc = 0x2c40d0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2c40d4: 0x46041080
    ctx->pc = 0x2c40d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2c40d8: 0xe6220038
    ctx->pc = 0x2c40d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x2c40dc: 0xdfbf0050
    ctx->pc = 0x2c40dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c40e0: 0xdfb40040
    ctx->pc = 0x2c40e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c40e4: 0xdfb30030
    ctx->pc = 0x2c40e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c40e8: 0xdfb20020
    ctx->pc = 0x2c40e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c40ec: 0xdfb10010
    ctx->pc = 0x2c40ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c40f0: 0xdfb00000
    ctx->pc = 0x2c40f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c40f4: 0xc7b40060
    ctx->pc = 0x2c40f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c40f8: 0x3e00008
    ctx->pc = 0x2C40F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C40FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C3E50u: goto label_2c3e50;
            case 0x2C3F7Cu: goto label_2c3f7c;
            case 0x2C3F80u: goto label_2c3f80;
            case 0x2C3FE8u: goto label_2c3fe8;
            case 0x2C3FF8u: goto label_2c3ff8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C4100u;
}
