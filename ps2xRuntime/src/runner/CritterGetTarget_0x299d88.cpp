#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterGetTarget
// Address: 0x299d88 - 0x299f64
void CritterGetTarget_0x299d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x299d88u;

    // 0x299d88: 0x27bdff10
    ctx->pc = 0x299d88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x299d8c: 0xffbf00c0
    ctx->pc = 0x299d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x299d90: 0xffbe00b0
    ctx->pc = 0x299d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x299d94: 0xffb700a0
    ctx->pc = 0x299d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x299d98: 0xffb60090
    ctx->pc = 0x299d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x299d9c: 0xffb50080
    ctx->pc = 0x299d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x299da0: 0xffb40070
    ctx->pc = 0x299da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x299da4: 0xffb30060
    ctx->pc = 0x299da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x299da8: 0xffb20050
    ctx->pc = 0x299da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x299dac: 0xffb10040
    ctx->pc = 0x299dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x299db0: 0xffb00030
    ctx->pc = 0x299db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x299db4: 0xe7b600e0
    ctx->pc = 0x299db4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x299db8: 0xe7b500d8
    ctx->pc = 0x299db8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x299dbc: 0xe7b400d0
    ctx->pc = 0x299dbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x299dc0: 0x80f02d
    ctx->pc = 0x299dc0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299dc4: 0xa0a02d
    ctx->pc = 0x299dc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299dc8: 0x46006586
    ctx->pc = 0x299dc8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x299dcc: 0x46006d46
    ctx->pc = 0x299dccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x299dd0: 0xc0902d
    ctx->pc = 0x299dd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299dd4: 0xafa70020
    ctx->pc = 0x299dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x299dd8: 0x802d
    ctx->pc = 0x299dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299ddc: 0xb82d
    ctx->pc = 0x299ddcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299de0: 0x3c0162d8
    ctx->pc = 0x299de0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)25304 << 16));
    // 0x299de4: 0x3421d727
    ctx->pc = 0x299de4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55079));
    // 0x299de8: 0x4481a000
    ctx->pc = 0x299de8u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x299dec: 0x3c020036
    ctx->pc = 0x299decu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x299df0: 0x8c42d4c0
    ctx->pc = 0x299df0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956224)));
    // 0x299df4: 0x4400034
    ctx->pc = 0x299DF4u;
    {
        const bool branch_taken_0x299df4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x299DF8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x299df4) {
            ctx->pc = 0x299EC8u;
            goto label_299ec8;
        }
    }
    ctx->pc = 0x299DFCu;
    // 0x299dfc: 0x3c130036
    ctx->pc = 0x299dfcu;
    SET_GPR_U32(ctx, 19, ((uint32_t)54 << 16));
    // 0x299e00: 0x24160b70
    ctx->pc = 0x299e00u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 2928));
    // 0x299e04: 0x3c020035
    ctx->pc = 0x299e04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x299e08: 0x24551dc0
    ctx->pc = 0x299e08u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 7616));
    // 0x299e0c: 0x0
    ctx->pc = 0x299e0cu;
    // NOP
label_299e10:
    // 0x299e10: 0x52000007
    ctx->pc = 0x299E10u;
    {
        const bool branch_taken_0x299e10 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x299e10) {
            ctx->pc = 0x299E14u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x299E30u;
            goto label_299e30;
        }
    }
    ctx->pc = 0x299E18u;
    // 0x299e18: 0x8e040b60
    ctx->pc = 0x299e18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2912)));
    // 0x299e1c: 0x50800004
    ctx->pc = 0x299E1Cu;
    {
        const bool branch_taken_0x299e1c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x299e1c) {
            ctx->pc = 0x299E20u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x299E30u;
            goto label_299e30;
        }
    }
    ctx->pc = 0x299E24u;
    // 0x299e24: 0x10000012
    ctx->pc = 0x299E24u;
    {
        const bool branch_taken_0x299e24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x299E28u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x299e24) {
            ctx->pc = 0x299E70u;
            goto label_299e70;
        }
    }
    ctx->pc = 0x299E2Cu;
    // 0x299e2c: 0x0
    ctx->pc = 0x299e2cu;
    // NOP
label_299e30:
    // 0x299e30: 0x8e62d4c0
    ctx->pc = 0x299e30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294956224)));
    // 0x299e34: 0x222102a
    ctx->pc = 0x299e34u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x299e38: 0x10400023
    ctx->pc = 0x299E38u;
    {
        const bool branch_taken_0x299e38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x299E3Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x299e38) {
            ctx->pc = 0x299EC8u;
            goto label_299ec8;
        }
    }
    ctx->pc = 0x299E40u;
    // 0x299e40: 0x558021
    ctx->pc = 0x299e40u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x299e44: 0x8e020008
    ctx->pc = 0x299e44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x299e48: 0x2c420002
    ctx->pc = 0x299e48u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x299e4c: 0x5440fff8
    ctx->pc = 0x299E4Cu;
    {
        const bool branch_taken_0x299e4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x299e4c) {
            ctx->pc = 0x299E50u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x299E30u;
            goto label_299e30;
        }
    }
    ctx->pc = 0x299E54u;
    // 0x299e54: 0x8e020b64
    ctx->pc = 0x299e54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2916)));
    // 0x299e58: 0x5440fff5
    ctx->pc = 0x299E58u;
    {
        const bool branch_taken_0x299e58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x299e58) {
            ctx->pc = 0x299E5Cu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x299E30u;
            goto label_299e30;
        }
    }
    ctx->pc = 0x299E60u;
    // 0x299e60: 0x8e62d4c0
    ctx->pc = 0x299e60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294956224)));
    // 0x299e64: 0x222102a
    ctx->pc = 0x299e64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x299e68: 0x10400017
    ctx->pc = 0x299E68u;
    {
        const bool branch_taken_0x299e68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x299e68) {
            ctx->pc = 0x299EC8u;
            goto label_299ec8;
        }
    }
    ctx->pc = 0x299E70u;
label_299e70:
    // 0x299e70: 0x200202d
    ctx->pc = 0x299e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299e74: 0x3c0282d
    ctx->pc = 0x299e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299e78: 0x280302d
    ctx->pc = 0x299e78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299e7c: 0x4600b306
    ctx->pc = 0x299e7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x299e80: 0x4600ab46
    ctx->pc = 0x299e80u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x299e84: 0xc0a667a
    ctx->pc = 0x299E84u;
    SET_GPR_U32(ctx, 31, 0x299E8Cu);
    ctx->pc = 0x299E88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2999E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterGetTargetSub_0x2999e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299E8Cu; }
    }
    if (ctx->pc != 0x299E8Cu) { return; }
    ctx->pc = 0x299E8Cu;
    // 0x299e8c: 0x46000046
    ctx->pc = 0x299e8cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x299e90: 0x46140834
    ctx->pc = 0x299e90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299e94: 0x0
    ctx->pc = 0x299e94u;
    // NOP
    // 0x299e98: 0x45000008
    ctx->pc = 0x299E98u;
    {
        const bool branch_taken_0x299e98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x299E9Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x299e98) {
            ctx->pc = 0x299EBCu;
            goto label_299ebc;
        }
    }
    ctx->pc = 0x299EA0u;
    // 0x299ea0: 0xe7a00010
    ctx->pc = 0x299ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x299ea4: 0xc7a00004
    ctx->pc = 0x299ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299ea8: 0xe7a00014
    ctx->pc = 0x299ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x299eac: 0xc7a00008
    ctx->pc = 0x299eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299eb0: 0xe7a00018
    ctx->pc = 0x299eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x299eb4: 0x46000d06
    ctx->pc = 0x299eb4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    // 0x299eb8: 0x200b82d
    ctx->pc = 0x299eb8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_299ebc:
    // 0x299ebc: 0x8e62d4c0
    ctx->pc = 0x299ebcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294956224)));
    // 0x299ec0: 0x441ffd3
    ctx->pc = 0x299EC0u;
    {
        const bool branch_taken_0x299ec0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x299ec0) {
            ctx->pc = 0x299E10u;
            goto label_299e10;
        }
    }
    ctx->pc = 0x299EC8u;
label_299ec8:
    // 0x299ec8: 0x12400014
    ctx->pc = 0x299EC8u;
    {
        const bool branch_taken_0x299ec8 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x299ECCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x299ec8) {
            ctx->pc = 0x299F1Cu;
            goto label_299f1c;
        }
    }
    ctx->pc = 0x299ED0u;
    // 0x299ed0: 0x3c0162d8
    ctx->pc = 0x299ed0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)25304 << 16));
    // 0x299ed4: 0x3421d727
    ctx->pc = 0x299ed4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55079));
    // 0x299ed8: 0x44810000
    ctx->pc = 0x299ed8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x299edc: 0x46140036
    ctx->pc = 0x299edcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299ee0: 0x0
    ctx->pc = 0x299ee0u;
    // NOP
    // 0x299ee4: 0x45020007
    ctx->pc = 0x299EE4u;
    {
        const bool branch_taken_0x299ee4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x299ee4) {
            ctx->pc = 0x299EE8u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x299F04u;
            goto label_299f04;
        }
    }
    ctx->pc = 0x299EECu;
    // 0x299eec: 0xc6800000
    ctx->pc = 0x299eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299ef0: 0xe6400000
    ctx->pc = 0x299ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x299ef4: 0xc6800004
    ctx->pc = 0x299ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299ef8: 0xe6400004
    ctx->pc = 0x299ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x299efc: 0x10000005
    ctx->pc = 0x299EFCu;
    {
        const bool branch_taken_0x299efc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x299F00u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x299efc) {
            ctx->pc = 0x299F14u;
            goto label_299f14;
        }
    }
    ctx->pc = 0x299F04u;
label_299f04:
    // 0x299f04: 0xe6400000
    ctx->pc = 0x299f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x299f08: 0xc7a00014
    ctx->pc = 0x299f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299f0c: 0xe6400004
    ctx->pc = 0x299f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x299f10: 0xc7a00018
    ctx->pc = 0x299f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299f14:
    // 0x299f14: 0xe6400008
    ctx->pc = 0x299f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x299f18: 0x8fa20020
    ctx->pc = 0x299f18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_299f1c:
    // 0x299f1c: 0x54400001
    ctx->pc = 0x299F1Cu;
    {
        const bool branch_taken_0x299f1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x299f1c) {
            ctx->pc = 0x299F20u;
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
            ctx->pc = 0x299F24u;
            goto label_299f24;
        }
    }
    ctx->pc = 0x299F24u;
label_299f24:
    // 0x299f24: 0x2e0102d
    ctx->pc = 0x299f24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299f28: 0xdfbf00c0
    ctx->pc = 0x299f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x299f2c: 0xdfbe00b0
    ctx->pc = 0x299f2cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x299f30: 0xdfb700a0
    ctx->pc = 0x299f30u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x299f34: 0xdfb60090
    ctx->pc = 0x299f34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x299f38: 0xdfb50080
    ctx->pc = 0x299f38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x299f3c: 0xdfb40070
    ctx->pc = 0x299f3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x299f40: 0xdfb30060
    ctx->pc = 0x299f40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x299f44: 0xdfb20050
    ctx->pc = 0x299f44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x299f48: 0xdfb10040
    ctx->pc = 0x299f48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299f4c: 0xdfb00030
    ctx->pc = 0x299f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299f50: 0xc7b600e0
    ctx->pc = 0x299f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x299f54: 0xc7b500d8
    ctx->pc = 0x299f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x299f58: 0xc7b400d0
    ctx->pc = 0x299f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x299f5c: 0x3e00008
    ctx->pc = 0x299F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299F60u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x299E10u: goto label_299e10;
            case 0x299E30u: goto label_299e30;
            case 0x299E70u: goto label_299e70;
            case 0x299EBCu: goto label_299ebc;
            case 0x299EC8u: goto label_299ec8;
            case 0x299F04u: goto label_299f04;
            case 0x299F14u: goto label_299f14;
            case 0x299F1Cu: goto label_299f1c;
            case 0x299F24u: goto label_299f24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x299F64u;
}
