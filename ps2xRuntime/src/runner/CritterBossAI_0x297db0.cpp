#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterBossAI
// Address: 0x297db0 - 0x2986f4
void CritterBossAI_0x297db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x297db0u;

    // 0x297db0: 0x27bdff40
    ctx->pc = 0x297db0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x297db4: 0xffbf00a0
    ctx->pc = 0x297db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x297db8: 0xffb40090
    ctx->pc = 0x297db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x297dbc: 0xffb30080
    ctx->pc = 0x297dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x297dc0: 0xffb20070
    ctx->pc = 0x297dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x297dc4: 0xffb10060
    ctx->pc = 0x297dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x297dc8: 0xffb00050
    ctx->pc = 0x297dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x297dcc: 0xe7b500b8
    ctx->pc = 0x297dccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x297dd0: 0xe7b400b0
    ctx->pc = 0x297dd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x297dd4: 0xc0a6bf4
    ctx->pc = 0x297DD4u;
    SET_GPR_U32(ctx, 31, 0x297DDCu);
    ctx->pc = 0x297DD8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29AFD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterGetTargetPlayers_0x29afd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297DDCu; }
    }
    if (ctx->pc != 0x297DDCu) { return; }
    ctx->pc = 0x297DDCu;
    // 0x297ddc: 0xc0a70ce
    ctx->pc = 0x297DDCu;
    SET_GPR_U32(ctx, 31, 0x297DE4u);
    ctx->pc = 0x297DE0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29C338u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterSetDifficulty_0x29c338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297DE4u; }
    }
    if (ctx->pc != 0x297DE4u) { return; }
    ctx->pc = 0x297DE4u;
    // 0x297de4: 0x8e300b60
    ctx->pc = 0x297de4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 2912)));
    // 0x297de8: 0x12000008
    ctx->pc = 0x297DE8u;
    {
        const bool branch_taken_0x297de8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x297de8) {
            ctx->pc = 0x297E0Cu;
            goto label_297e0c;
        }
    }
    ctx->pc = 0x297DF0u;
label_297df0:
    // 0x297df0: 0xc0a6bf4
    ctx->pc = 0x297DF0u;
    SET_GPR_U32(ctx, 31, 0x297DF8u);
    ctx->pc = 0x297DF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29AFD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterGetTargetPlayers_0x29afd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297DF8u; }
    }
    if (ctx->pc != 0x297DF8u) { return; }
    ctx->pc = 0x297DF8u;
    // 0x297df8: 0xc0a70ce
    ctx->pc = 0x297DF8u;
    SET_GPR_U32(ctx, 31, 0x297E00u);
    ctx->pc = 0x297DFCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29C338u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterSetDifficulty_0x29c338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E00u; }
    }
    if (ctx->pc != 0x297E00u) { return; }
    ctx->pc = 0x297E00u;
    // 0x297e00: 0x8e100b60
    ctx->pc = 0x297e00u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 2912)));
    // 0x297e04: 0x1600fffa
    ctx->pc = 0x297E04u;
    {
        const bool branch_taken_0x297e04 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x297e04) {
            ctx->pc = 0x297DF0u;
            goto label_297df0;
        }
    }
    ctx->pc = 0x297E0Cu;
label_297e0c:
    // 0x297e0c: 0xc0a6c70
    ctx->pc = 0x297E0Cu;
    SET_GPR_U32(ctx, 31, 0x297E14u);
    ctx->pc = 0x297E10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29B1C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterResolveMultipleTargets_0x29b1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E14u; }
    }
    if (ctx->pc != 0x297E14u) { return; }
    ctx->pc = 0x297E14u;
    // 0x297e14: 0xc0a5eca
    ctx->pc = 0x297E14u;
    SET_GPR_U32(ctx, 31, 0x297E1Cu);
    ctx->pc = 0x297B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterProcessSafeRocks_0x297b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E1Cu; }
    }
    if (ctx->pc != 0x297E1Cu) { return; }
    ctx->pc = 0x297E1Cu;
    // 0x297e1c: 0x8e220008
    ctx->pc = 0x297e1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x297e20: 0x5440002a
    ctx->pc = 0x297E20u;
    {
        const bool branch_taken_0x297e20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x297e20) {
            ctx->pc = 0x297E24u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 308)));
            ctx->pc = 0x297ECCu;
            goto label_297ecc;
        }
    }
    ctx->pc = 0x297E28u;
    // 0x297e28: 0x3c030036
    ctx->pc = 0x297e28u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x297e2c: 0xc461d7f8
    ctx->pc = 0x297e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297e30: 0x44800000
    ctx->pc = 0x297e30u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x297e34: 0x46000832
    ctx->pc = 0x297e34u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x297e38: 0x0
    ctx->pc = 0x297e38u;
    // NOP
    // 0x297e3c: 0x4500000d
    ctx->pc = 0x297E3Cu;
    {
        const bool branch_taken_0x297e3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x297E40u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x297e3c) {
            ctx->pc = 0x297E74u;
            goto label_297e74;
        }
    }
    ctx->pc = 0x297E44u;
    // 0x297e44: 0x8e220004
    ctx->pc = 0x297e44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x297e48: 0x8c42005c
    ctx->pc = 0x297e48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x297e4c: 0x30420080
    ctx->pc = 0x297e4cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
    // 0x297e50: 0x5440001e
    ctx->pc = 0x297E50u;
    {
        const bool branch_taken_0x297e50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x297e50) {
            ctx->pc = 0x297E54u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 308)));
            ctx->pc = 0x297ECCu;
            goto label_297ecc;
        }
    }
    ctx->pc = 0x297E58u;
    // 0x297e58: 0x3c020031
    ctx->pc = 0x297e58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x297e5c: 0xc440ffa4
    ctx->pc = 0x297e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297e60: 0x3c014000
    ctx->pc = 0x297e60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x297e64: 0x44810800
    ctx->pc = 0x297e64u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x297e68: 0x46010000
    ctx->pc = 0x297e68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x297e6c: 0x10000016
    ctx->pc = 0x297E6Cu;
    {
        const bool branch_taken_0x297e6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x297E70u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294957048), bits); }
        if (branch_taken_0x297e6c) {
            ctx->pc = 0x297EC8u;
            goto label_297ec8;
        }
    }
    ctx->pc = 0x297E74u;
label_297e74:
    // 0x297e74: 0xc441ffa4
    ctx->pc = 0x297e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297e78: 0xc460d7f8
    ctx->pc = 0x297e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297e7c: 0x46010036
    ctx->pc = 0x297e7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x297e80: 0x0
    ctx->pc = 0x297e80u;
    // NOP
    // 0x297e84: 0x45020011
    ctx->pc = 0x297E84u;
    {
        const bool branch_taken_0x297e84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x297e84) {
            ctx->pc = 0x297E88u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 308)));
            ctx->pc = 0x297ECCu;
            goto label_297ecc;
        }
    }
    ctx->pc = 0x297E8Cu;
    // 0x297e8c: 0x8e220004
    ctx->pc = 0x297e8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x297e90: 0xc45400ec
    ctx->pc = 0x297e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x297e94: 0xc0a6e50
    ctx->pc = 0x297E94u;
    SET_GPR_U32(ctx, 31, 0x297E9Cu);
    ctx->pc = 0x297E98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29B940u;
    {
        const uint32_t __entryPc = ctx->pc;
        MaxPlayerDist_0x29b940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E9Cu; }
    }
    if (ctx->pc != 0x297E9Cu) { return; }
    ctx->pc = 0x297E9Cu;
    // 0x297e9c: 0x46000046
    ctx->pc = 0x297e9cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x297ea0: 0x44800000
    ctx->pc = 0x297ea0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x297ea4: 0x4600a036
    ctx->pc = 0x297ea4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x297ea8: 0x45010005
    ctx->pc = 0x297EA8u;
    {
        const bool branch_taken_0x297ea8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x297ea8) {
            ctx->pc = 0x297EC0u;
            goto label_297ec0;
        }
    }
    ctx->pc = 0x297EB0u;
    // 0x297eb0: 0x46140834
    ctx->pc = 0x297eb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x297eb4: 0x0
    ctx->pc = 0x297eb4u;
    // NOP
    // 0x297eb8: 0x45020004
    ctx->pc = 0x297EB8u;
    {
        const bool branch_taken_0x297eb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x297eb8) {
            ctx->pc = 0x297EBCu;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 308)));
            ctx->pc = 0x297ECCu;
            goto label_297ecc;
        }
    }
    ctx->pc = 0x297EC0u;
label_297ec0:
    // 0x297ec0: 0xc0a5dee
    ctx->pc = 0x297EC0u;
    SET_GPR_U32(ctx, 31, 0x297EC8u);
    ctx->pc = 0x297EC4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2977B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterActivate_0x2977b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297EC8u; }
    }
    if (ctx->pc != 0x297EC8u) { return; }
    ctx->pc = 0x297EC8u;
label_297ec8:
    // 0x297ec8: 0x86220134
    ctx->pc = 0x297ec8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 308)));
label_297ecc:
    // 0x297ecc: 0x4400003
    ctx->pc = 0x297ECCu;
    {
        const bool branch_taken_0x297ecc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x297ED0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 30));
        if (branch_taken_0x297ecc) {
            ctx->pc = 0x297EDCu;
            goto label_297edc;
        }
    }
    ctx->pc = 0x297ED4u;
    // 0x297ed4: 0xc09c148
    ctx->pc = 0x297ED4u;
    SET_GPR_U32(ctx, 31, 0x297EDCu);
    ctx->pc = 0x297ED8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x270520u;
    {
        const uint32_t __entryPc = ctx->pc;
        LockCamera_0x270520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297EDCu; }
    }
    if (ctx->pc != 0x297EDCu) { return; }
    ctx->pc = 0x297EDCu;
label_297edc:
    // 0x297edc: 0x8e220004
    ctx->pc = 0x297edcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x297ee0: 0x86230124
    ctx->pc = 0x297ee0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x297ee4: 0x4600004
    ctx->pc = 0x297EE4u;
    {
        const bool branch_taken_0x297ee4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x297EE8u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 292)));
        if (branch_taken_0x297ee4) {
            ctx->pc = 0x297EF8u;
            goto label_297ef8;
        }
    }
    ctx->pc = 0x297EECu;
    // 0x297eec: 0x24020090
    ctx->pc = 0x297eecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 144));
    // 0x297ef0: 0x622018
    ctx->pc = 0x297ef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x297ef4: 0x939821
    ctx->pc = 0x297ef4u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_297ef8:
    // 0x297ef8: 0x3c020031
    ctx->pc = 0x297ef8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x297efc: 0xdc420e28
    ctx->pc = 0x297efcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x297f00: 0x30420080
    ctx->pc = 0x297f00u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
    // 0x297f04: 0x10400005
    ctx->pc = 0x297F04u;
    {
        const bool branch_taken_0x297f04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x297f04) {
            ctx->pc = 0x297F1Cu;
            goto label_297f1c;
        }
    }
    ctx->pc = 0x297F0Cu;
    // 0x297f0c: 0xc0a5a80
    ctx->pc = 0x297F0Cu;
    SET_GPR_U32(ctx, 31, 0x297F14u);
    ctx->pc = 0x297F10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x296A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterGetNextMove_0x296a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297F14u; }
    }
    if (ctx->pc != 0x297F14u) { return; }
    ctx->pc = 0x297F14u;
    // 0x297f14: 0x10000051
    ctx->pc = 0x297F14u;
    {
        const bool branch_taken_0x297f14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x297f14) {
            ctx->pc = 0x29805Cu;
            goto label_29805c;
        }
    }
    ctx->pc = 0x297F1Cu;
label_297f1c:
    // 0x297f1c: 0xc0a5790
    ctx->pc = 0x297F1Cu;
    SET_GPR_U32(ctx, 31, 0x297F24u);
    ctx->pc = 0x297F20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x295E40u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterMoveSetup_0x295e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297F24u; }
    }
    if (ctx->pc != 0x297F24u) { return; }
    ctx->pc = 0x297F24u;
    // 0x297f24: 0xc0a5796
    ctx->pc = 0x297F24u;
    SET_GPR_U32(ctx, 31, 0x297F2Cu);
    ctx->pc = 0x297F28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x295E58u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLookForCriticalMove_0x295e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297F2Cu; }
    }
    if (ctx->pc != 0x297F2Cu) { return; }
    ctx->pc = 0x297F2Cu;
    // 0x297f2c: 0x86220126
    ctx->pc = 0x297f2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 294)));
    // 0x297f30: 0x441004a
    ctx->pc = 0x297F30u;
    {
        const bool branch_taken_0x297f30 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x297f30) {
            ctx->pc = 0x29805Cu;
            goto label_29805c;
        }
    }
    ctx->pc = 0x297F38u;
    // 0x297f38: 0xc0a58b4
    ctx->pc = 0x297F38u;
    SET_GPR_U32(ctx, 31, 0x297F40u);
    ctx->pc = 0x297F3Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2962D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLookForBlock_0x2962d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297F40u; }
    }
    if (ctx->pc != 0x297F40u) { return; }
    ctx->pc = 0x297F40u;
    // 0x297f40: 0x86220126
    ctx->pc = 0x297f40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 294)));
    // 0x297f44: 0x4410045
    ctx->pc = 0x297F44u;
    {
        const bool branch_taken_0x297f44 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x297f44) {
            ctx->pc = 0x29805Cu;
            goto label_29805c;
        }
    }
    ctx->pc = 0x297F4Cu;
    // 0x297f4c: 0xc0a590a
    ctx->pc = 0x297F4Cu;
    SET_GPR_U32(ctx, 31, 0x297F54u);
    ctx->pc = 0x297F50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x296428u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLookForAttack_0x296428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297F54u; }
    }
    if (ctx->pc != 0x297F54u) { return; }
    ctx->pc = 0x297F54u;
    // 0x297f54: 0x8e240b60
    ctx->pc = 0x297f54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 2912)));
    // 0x297f58: 0x10800032
    ctx->pc = 0x297F58u;
    {
        const bool branch_taken_0x297f58 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x297F5Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x297f58) {
            ctx->pc = 0x298024u;
            goto label_298024;
        }
    }
    ctx->pc = 0x297F60u;
    // 0x297f60: 0x80802d
    ctx->pc = 0x297f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297f64: 0x24140090
    ctx->pc = 0x297f64u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 144));
label_297f68:
    // 0x297f68: 0xc0a5790
    ctx->pc = 0x297F68u;
    SET_GPR_U32(ctx, 31, 0x297F70u);
    ctx->pc = 0x297F6Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x295E40u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterMoveSetup_0x295e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297F70u; }
    }
    if (ctx->pc != 0x297F70u) { return; }
    ctx->pc = 0x297F70u;
    // 0x297f70: 0x86220128
    ctx->pc = 0x297f70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x297f74: 0x4400005
    ctx->pc = 0x297F74u;
    {
        const bool branch_taken_0x297f74 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x297F78u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x297f74) {
            ctx->pc = 0x297F8Cu;
            goto label_297f8c;
        }
    }
    ctx->pc = 0x297F7Cu;
    // 0x297f7c: 0xc0a5af6
    ctx->pc = 0x297F7Cu;
    SET_GPR_U32(ctx, 31, 0x297F84u);
    ctx->pc = 0x297F80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x296BD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterChildGetPattern_0x296bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297F84u; }
    }
    if (ctx->pc != 0x297F84u) { return; }
    ctx->pc = 0x297F84u;
    // 0x297f84: 0x1000001f
    ctx->pc = 0x297F84u;
    {
        const bool branch_taken_0x297f84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x297F88u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 2912)));
        if (branch_taken_0x297f84) {
            ctx->pc = 0x298004u;
            goto label_298004;
        }
    }
    ctx->pc = 0x297F8Cu;
label_297f8c:
    // 0x297f8c: 0x86220126
    ctx->pc = 0x297f8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 294)));
    // 0x297f90: 0x443001c
    ctx->pc = 0x297F90u;
    {
        const bool branch_taken_0x297f90 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x297f90) {
            ctx->pc = 0x297F94u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 2912)));
            ctx->pc = 0x298004u;
            goto label_298004;
        }
    }
    ctx->pc = 0x297F98u;
    // 0x297f98: 0xc0a584c
    ctx->pc = 0x297F98u;
    SET_GPR_U32(ctx, 31, 0x297FA0u);
    ctx->pc = 0x297F9Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x296130u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterChildCriticalMove_0x296130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297FA0u; }
    }
    if (ctx->pc != 0x297FA0u) { return; }
    ctx->pc = 0x297FA0u;
    // 0x297fa0: 0x86020126
    ctx->pc = 0x297fa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
    // 0x297fa4: 0x443000a
    ctx->pc = 0x297FA4u;
    {
        const bool branch_taken_0x297fa4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x297fa4) {
            ctx->pc = 0x297FA8u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 296)));
            ctx->pc = 0x297FD0u;
            goto label_297fd0;
        }
    }
    ctx->pc = 0x297FACu;
    // 0x297fac: 0xc0a590a
    ctx->pc = 0x297FACu;
    SET_GPR_U32(ctx, 31, 0x297FB4u);
    ctx->pc = 0x297FB0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x296428u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLookForAttack_0x296428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297FB4u; }
    }
    if (ctx->pc != 0x297FB4u) { return; }
    ctx->pc = 0x297FB4u;
    // 0x297fb4: 0x86020126
    ctx->pc = 0x297fb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
    // 0x297fb8: 0x4430005
    ctx->pc = 0x297FB8u;
    {
        const bool branch_taken_0x297fb8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x297fb8) {
            ctx->pc = 0x297FBCu;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 296)));
            ctx->pc = 0x297FD0u;
            goto label_297fd0;
        }
    }
    ctx->pc = 0x297FC0u;
    // 0x297fc0: 0xc0a5a66
    ctx->pc = 0x297FC0u;
    SET_GPR_U32(ctx, 31, 0x297FC8u);
    ctx->pc = 0x297FC4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x296998u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLookForReady_0x296998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297FC8u; }
    }
    if (ctx->pc != 0x297FC8u) { return; }
    ctx->pc = 0x297FC8u;
    // 0x297fc8: 0x1000000e
    ctx->pc = 0x297FC8u;
    {
        const bool branch_taken_0x297fc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x297FCCu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 2912)));
        if (branch_taken_0x297fc8) {
            ctx->pc = 0x298004u;
            goto label_298004;
        }
    }
    ctx->pc = 0x297FD0u;
label_297fd0:
    // 0x297fd0: 0x4420003
    ctx->pc = 0x297FD0u;
    {
        const bool branch_taken_0x297fd0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x297fd0) {
            ctx->pc = 0x297FD4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x297FE0u;
            goto label_297fe0;
        }
    }
    ctx->pc = 0x297FD8u;
    // 0x297fd8: 0x10000009
    ctx->pc = 0x297FD8u;
    {
        const bool branch_taken_0x297fd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x297FDCu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x297fd8) {
            ctx->pc = 0x298000u;
            goto label_298000;
        }
    }
    ctx->pc = 0x297FE0u;
label_297fe0:
    // 0x297fe0: 0x86020126
    ctx->pc = 0x297fe0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
    // 0x297fe4: 0x8c630124
    ctx->pc = 0x297fe4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x297fe8: 0x541018
    ctx->pc = 0x297fe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x297fec: 0x431021
    ctx->pc = 0x297fecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x297ff0: 0x8c420000
    ctx->pc = 0x297ff0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297ff4: 0x2c42007f
    ctx->pc = 0x297ff4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 127));
    // 0x297ff8: 0x26430001
    ctx->pc = 0x297ff8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 1));
    // 0x297ffc: 0x62900a
    ctx->pc = 0x297ffcu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
label_298000:
    // 0x298000: 0x8e100b60
    ctx->pc = 0x298000u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 2912)));
label_298004:
    // 0x298004: 0x1600ffd8
    ctx->pc = 0x298004u;
    {
        const bool branch_taken_0x298004 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x298004) {
            ctx->pc = 0x297F68u;
            goto label_297f68;
        }
    }
    ctx->pc = 0x29800Cu;
    // 0x29800c: 0x12400005
    ctx->pc = 0x29800Cu;
    {
        const bool branch_taken_0x29800c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x298010u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29800c) {
            ctx->pc = 0x298024u;
            goto label_298024;
        }
    }
    ctx->pc = 0x298014u;
    // 0x298014: 0x24050001
    ctx->pc = 0x298014u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x298018: 0xc0a552c
    ctx->pc = 0x298018u;
    SET_GPR_U32(ctx, 31, 0x298020u);
    ctx->pc = 0x29801Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2954B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterFindMoveType_0x2954b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298020u; }
    }
    if (ctx->pc != 0x298020u) { return; }
    ctx->pc = 0x298020u;
    // 0x298020: 0xa6220126
    ctx->pc = 0x298020u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 294), (uint16_t)GPR_U32(ctx, 2));
label_298024:
    // 0x298024: 0x86220126
    ctx->pc = 0x298024u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 294)));
    // 0x298028: 0x441000c
    ctx->pc = 0x298028u;
    {
        const bool branch_taken_0x298028 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x298028) {
            ctx->pc = 0x29805Cu;
            goto label_29805c;
        }
    }
    ctx->pc = 0x298030u;
    // 0x298030: 0x8e620000
    ctx->pc = 0x298030u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x298034: 0x2c42007f
    ctx->pc = 0x298034u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 127));
    // 0x298038: 0x50400004
    ctx->pc = 0x298038u;
    {
        const bool branch_taken_0x298038 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x298038) {
            ctx->pc = 0x29803Cu;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 294)));
            ctx->pc = 0x29804Cu;
            goto label_29804c;
        }
    }
    ctx->pc = 0x298040u;
    // 0x298040: 0xc0a59fa
    ctx->pc = 0x298040u;
    SET_GPR_U32(ctx, 31, 0x298048u);
    ctx->pc = 0x298044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2967E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLookForTranslate_0x2967e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298048u; }
    }
    if (ctx->pc != 0x298048u) { return; }
    ctx->pc = 0x298048u;
    // 0x298048: 0x86220126
    ctx->pc = 0x298048u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 294)));
label_29804c:
    // 0x29804c: 0x4410003
    ctx->pc = 0x29804Cu;
    {
        const bool branch_taken_0x29804c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x29804c) {
            ctx->pc = 0x29805Cu;
            goto label_29805c;
        }
    }
    ctx->pc = 0x298054u;
    // 0x298054: 0xc0a5a66
    ctx->pc = 0x298054u;
    SET_GPR_U32(ctx, 31, 0x29805Cu);
    ctx->pc = 0x298058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x296998u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLookForReady_0x296998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29805Cu; }
    }
    if (ctx->pc != 0x29805Cu) { return; }
    ctx->pc = 0x29805Cu;
label_29805c:
    // 0x29805c: 0xc0a5636
    ctx->pc = 0x29805Cu;
    SET_GPR_U32(ctx, 31, 0x298064u);
    ctx->pc = 0x298060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2958D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterAnimate_0x2958d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298064u; }
    }
    if (ctx->pc != 0x298064u) { return; }
    ctx->pc = 0x298064u;
    // 0x298064: 0x86220124
    ctx->pc = 0x298064u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x298068: 0x4420001
    ctx->pc = 0x298068u;
    {
        const bool branch_taken_0x298068 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x298068) {
            ctx->pc = 0x29806Cu;
            WRITE16(ADD32(GPR_U32(ctx, 17), 292), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x298070u;
            goto label_298070;
        }
    }
    ctx->pc = 0x298070u;
label_298070:
    // 0x298070: 0x8e240004
    ctx->pc = 0x298070u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x298074: 0x86220124
    ctx->pc = 0x298074u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x298078: 0x24030090
    ctx->pc = 0x298078u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 144));
    // 0x29807c: 0x431018
    ctx->pc = 0x29807cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x298080: 0x8c830124
    ctx->pc = 0x298080u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x298084: 0x8e300b60
    ctx->pc = 0x298084u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 2912)));
    // 0x298088: 0x12000029
    ctx->pc = 0x298088u;
    {
        const bool branch_taken_0x298088 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x29808Cu;
        SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x298088) {
            ctx->pc = 0x298130u;
            goto label_298130;
        }
    }
    ctx->pc = 0x298090u;
    // 0x298090: 0x24120001
    ctx->pc = 0x298090u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x298094: 0x3c140034
    ctx->pc = 0x298094u;
    SET_GPR_U32(ctx, 20, ((uint32_t)52 << 16));
    // 0x298098: 0x8e020008
    ctx->pc = 0x298098u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29809c: 0x0
    ctx->pc = 0x29809cu;
    // NOP
label_2980a0:
    // 0x2980a0: 0x54520007
    ctx->pc = 0x2980A0u;
    {
        const bool branch_taken_0x2980a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x2980a0) {
            ctx->pc = 0x2980A4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->pc = 0x2980C0u;
            goto label_2980c0;
        }
    }
    ctx->pc = 0x2980A8u;
    // 0x2980a8: 0x200202d
    ctx->pc = 0x2980a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2980ac: 0x24050011
    ctx->pc = 0x2980acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 17));
    // 0x2980b0: 0xc0a552c
    ctx->pc = 0x2980B0u;
    SET_GPR_U32(ctx, 31, 0x2980B8u);
    ctx->pc = 0x2980B4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2954B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterFindMoveType_0x2954b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2980B8u; }
    }
    if (ctx->pc != 0x2980B8u) { return; }
    ctx->pc = 0x2980B8u;
    // 0x2980b8: 0x10000010
    ctx->pc = 0x2980B8u;
    {
        const bool branch_taken_0x2980b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2980BCu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 294), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2980b8) {
            ctx->pc = 0x2980FCu;
            goto label_2980fc;
        }
    }
    ctx->pc = 0x2980C0u;
label_2980c0:
    // 0x2980c0: 0x10520004
    ctx->pc = 0x2980C0u;
    {
        const bool branch_taken_0x2980c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        ctx->pc = 0x2980C4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294961280)));
        if (branch_taken_0x2980c0) {
            ctx->pc = 0x2980D4u;
            goto label_2980d4;
        }
    }
    ctx->pc = 0x2980C8u;
    // 0x2980c8: 0x86220128
    ctx->pc = 0x2980c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x2980cc: 0x440000f
    ctx->pc = 0x2980CCu;
    {
        const bool branch_taken_0x2980cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2980D0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294961280)));
        if (branch_taken_0x2980cc) {
            ctx->pc = 0x29810Cu;
            goto label_29810c;
        }
    }
    ctx->pc = 0x2980D4u;
label_2980d4:
    // 0x2980d4: 0x2442fffe
    ctx->pc = 0x2980d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2980d8: 0x2c420002
    ctx->pc = 0x2980d8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x2980dc: 0x1440000c
    ctx->pc = 0x2980DCu;
    {
        const bool branch_taken_0x2980dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2980E0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2980dc) {
            ctx->pc = 0x298110u;
            goto label_298110;
        }
    }
    ctx->pc = 0x2980E4u;
    // 0x2980e4: 0x86020124
    ctx->pc = 0x2980e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x2980e8: 0x4410004
    ctx->pc = 0x2980E8u;
    {
        const bool branch_taken_0x2980e8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2980e8) {
            ctx->pc = 0x2980FCu;
            goto label_2980fc;
        }
    }
    ctx->pc = 0x2980F0u;
    // 0x2980f0: 0x86020126
    ctx->pc = 0x2980f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
    // 0x2980f4: 0x4400006
    ctx->pc = 0x2980F4u;
    {
        const bool branch_taken_0x2980f4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2980f4) {
            ctx->pc = 0x298110u;
            goto label_298110;
        }
    }
    ctx->pc = 0x2980FCu;
label_2980fc:
    // 0x2980fc: 0xc0a5636
    ctx->pc = 0x2980FCu;
    SET_GPR_U32(ctx, 31, 0x298104u);
    ctx->pc = 0x298100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2958D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterAnimate_0x2958d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298104u; }
    }
    if (ctx->pc != 0x298104u) { return; }
    ctx->pc = 0x298104u;
    // 0x298104: 0x10000008
    ctx->pc = 0x298104u;
    {
        const bool branch_taken_0x298104 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x298108u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 2912)));
        if (branch_taken_0x298104) {
            ctx->pc = 0x298128u;
            goto label_298128;
        }
    }
    ctx->pc = 0x29810Cu;
label_29810c:
    // 0x29810c: 0x220202d
    ctx->pc = 0x29810cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_298110:
    // 0x298110: 0xc0a56e0
    ctx->pc = 0x298110u;
    SET_GPR_U32(ctx, 31, 0x298118u);
    ctx->pc = 0x298114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x295B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterCopyAnim_0x295b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298118u; }
    }
    if (ctx->pc != 0x298118u) { return; }
    ctx->pc = 0x298118u;
    // 0x298118: 0x8e620000
    ctx->pc = 0x298118u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29811c: 0x50520001
    ctx->pc = 0x29811Cu;
    {
        const bool branch_taken_0x29811c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        if (branch_taken_0x29811c) {
            ctx->pc = 0x298120u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 294), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x298124u;
            goto label_298124;
        }
    }
    ctx->pc = 0x298124u;
label_298124:
    // 0x298124: 0x8e100b60
    ctx->pc = 0x298124u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 2912)));
label_298128:
    // 0x298128: 0x5600ffdd
    ctx->pc = 0x298128u;
    {
        const bool branch_taken_0x298128 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x298128) {
            ctx->pc = 0x29812Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x2980A0u;
            goto label_2980a0;
        }
    }
    ctx->pc = 0x298130u;
label_298130:
    // 0x298130: 0xc620009c
    ctx->pc = 0x298130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298134: 0x46000064
    ctx->pc = 0x298134u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x298138: 0x44140800
    ctx->pc = 0x298138u;
    SET_GPR_U32(ctx, 20, *(uint32_t*)&ctx->f[1]);
    // 0x29813c: 0xc674008c
    ctx->pc = 0x29813cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x298140: 0xc0841b8
    ctx->pc = 0x298140u;
    SET_GPR_U32(ctx, 31, 0x298148u);
    ctx->pc = 0x298144u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 132));
    ctx->pc = 0x2106E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimDone_0x2106e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298148u; }
    }
    if (ctx->pc != 0x298148u) { return; }
    ctx->pc = 0x298148u;
    // 0x298148: 0x44800000
    ctx->pc = 0x298148u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29814c: 0x46140034
    ctx->pc = 0x29814cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298150: 0x0
    ctx->pc = 0x298150u;
    // NOP
    // 0x298154: 0x4500003f
    ctx->pc = 0x298154u;
    {
        const bool branch_taken_0x298154 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x298158u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x298154) {
            ctx->pc = 0x298254u;
            goto label_298254;
        }
    }
    ctx->pc = 0x29815Cu;
    // 0x29815c: 0x8e630000
    ctx->pc = 0x29815cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x298160: 0x24020011
    ctx->pc = 0x298160u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17));
    // 0x298164: 0x1462002e
    ctx->pc = 0x298164u;
    {
        const bool branch_taken_0x298164 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x298164) {
            ctx->pc = 0x298220u;
            goto label_298220;
        }
    }
    ctx->pc = 0x29816Cu;
    // 0x29816c: 0x12000034
    ctx->pc = 0x29816Cu;
    {
        const bool branch_taken_0x29816c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x298170u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x29816c) {
            ctx->pc = 0x298240u;
            goto label_298240;
        }
    }
    ctx->pc = 0x298174u;
    // 0x298174: 0xc441ffa4
    ctx->pc = 0x298174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298178: 0xc6200258
    ctx->pc = 0x298178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29817c: 0x46010036
    ctx->pc = 0x29817cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298180: 0x0
    ctx->pc = 0x298180u;
    // NOP
    // 0x298184: 0x45000009
    ctx->pc = 0x298184u;
    {
        const bool branch_taken_0x298184 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x298188u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x298184) {
            ctx->pc = 0x2981ACu;
            goto label_2981ac;
        }
    }
    ctx->pc = 0x29818Cu;
    // 0x29818c: 0xdc420e28
    ctx->pc = 0x29818cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x298190: 0x30420080
    ctx->pc = 0x298190u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
    // 0x298194: 0x14400032
    ctx->pc = 0x298194u;
    {
        const bool branch_taken_0x298194 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x298198u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x298194) {
            ctx->pc = 0x298260u;
            goto label_298260;
        }
    }
    ctx->pc = 0x29819Cu;
    // 0x29819c: 0xc0a4cb8
    ctx->pc = 0x29819Cu;
    SET_GPR_U32(ctx, 31, 0x2981A4u);
    ctx->pc = 0x2981A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2932E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDelInst_0x2932e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2981A4u; }
    }
    if (ctx->pc != 0x2981A4u) { return; }
    ctx->pc = 0x2981A4u;
    // 0x2981a4: 0x10000149
    ctx->pc = 0x2981A4u;
    {
        const bool branch_taken_0x2981a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2981A8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2981a4) {
            ctx->pc = 0x2986CCu;
            goto label_2986cc;
        }
    }
    ctx->pc = 0x2981ACu;
label_2981ac:
    // 0x2981ac: 0xdc420e28
    ctx->pc = 0x2981acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x2981b0: 0x30420080
    ctx->pc = 0x2981b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
    // 0x2981b4: 0x54400029
    ctx->pc = 0x2981B4u;
    {
        const bool branch_taken_0x2981b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2981b4) {
            ctx->pc = 0x2981B8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->pc = 0x29825Cu;
            goto label_29825c;
        }
    }
    ctx->pc = 0x2981BCu;
    // 0x2981bc: 0x3c020031
    ctx->pc = 0x2981bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2981c0: 0xc6210258
    ctx->pc = 0x2981c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2981c4: 0xc440ffa4
    ctx->pc = 0x2981c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2981c8: 0x46000841
    ctx->pc = 0x2981c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2981cc: 0x3c030036
    ctx->pc = 0x2981ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x2981d0: 0x24020001
    ctx->pc = 0x2981d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2981d4: 0x3c013f00
    ctx->pc = 0x2981d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2981d8: 0x44810000
    ctx->pc = 0x2981d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2981dc: 0x46000834
    ctx->pc = 0x2981dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2981e0: 0x0
    ctx->pc = 0x2981e0u;
    // NOP
    // 0x2981e4: 0x4500001c
    ctx->pc = 0x2981E4u;
    {
        const bool branch_taken_0x2981e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2981E8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957060), GPR_U32(ctx, 2));
        if (branch_taken_0x2981e4) {
            ctx->pc = 0x298258u;
            goto label_298258;
        }
    }
    ctx->pc = 0x2981ECu;
    // 0x2981ec: 0x3c01437f
    ctx->pc = 0x2981ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17279 << 16));
    // 0x2981f0: 0x44810000
    ctx->pc = 0x2981f0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2981f4: 0x46000802
    ctx->pc = 0x2981f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2981f8: 0x46000000
    ctx->pc = 0x2981f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2981fc: 0x46000064
    ctx->pc = 0x2981fcu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x298200: 0x44020800
    ctx->pc = 0x298200u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x298204: 0x240500ff
    ctx->pc = 0x298204u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x298208: 0x8e2400cc
    ctx->pc = 0x298208u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x29820c: 0xa22823
    ctx->pc = 0x29820cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x298210: 0xc0b40c0
    ctx->pc = 0x298210u;
    SET_GPR_U32(ctx, 31, 0x298218u);
    ctx->pc = 0x298214u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298218u; }
    }
    if (ctx->pc != 0x298218u) { return; }
    ctx->pc = 0x298218u;
    // 0x298218: 0x10000010
    ctx->pc = 0x298218u;
    {
        const bool branch_taken_0x298218 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29821Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
        if (branch_taken_0x298218) {
            ctx->pc = 0x29825Cu;
            goto label_29825c;
        }
    }
    ctx->pc = 0x298220u;
label_298220:
    // 0x298220: 0x12000008
    ctx->pc = 0x298220u;
    {
        const bool branch_taken_0x298220 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x298224u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x298220) {
            ctx->pc = 0x298244u;
            goto label_298244;
        }
    }
    ctx->pc = 0x298228u;
    // 0x298228: 0xc6210258
    ctx->pc = 0x298228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29822c: 0x44800000
    ctx->pc = 0x29822cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x298230: 0x46000832
    ctx->pc = 0x298230u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298234: 0x0
    ctx->pc = 0x298234u;
    // NOP
    // 0x298238: 0x45020008
    ctx->pc = 0x298238u;
    {
        const bool branch_taken_0x298238 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x298238) {
            ctx->pc = 0x29823Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->pc = 0x29825Cu;
            goto label_29825c;
        }
    }
    ctx->pc = 0x298240u;
label_298240:
    // 0x298240: 0x3c020031
    ctx->pc = 0x298240u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_298244:
    // 0x298244: 0xc440ffa4
    ctx->pc = 0x298244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298248: 0x4600a000
    ctx->pc = 0x298248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x29824c: 0x10000002
    ctx->pc = 0x29824Cu;
    {
        const bool branch_taken_0x29824c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x298250u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 600), bits); }
        if (branch_taken_0x29824c) {
            ctx->pc = 0x298258u;
            goto label_298258;
        }
    }
    ctx->pc = 0x298254u;
label_298254:
    // 0x298254: 0xae200258
    ctx->pc = 0x298254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 0));
label_298258:
    // 0x298258: 0x8e630000
    ctx->pc = 0x298258u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_29825c:
    // 0x29825c: 0x24020010
    ctx->pc = 0x29825cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_298260:
    // 0x298260: 0x10620005
    ctx->pc = 0x298260u;
    {
        const bool branch_taken_0x298260 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x298264u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 34));
        if (branch_taken_0x298260) {
            ctx->pc = 0x298278u;
            goto label_298278;
        }
    }
    ctx->pc = 0x298268u;
    // 0x298268: 0x1062000e
    ctx->pc = 0x298268u;
    {
        const bool branch_taken_0x298268 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x29826Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x298268) {
            ctx->pc = 0x2982A4u;
            goto label_2982a4;
        }
    }
    ctx->pc = 0x298270u;
    // 0x298270: 0x10000016
    ctx->pc = 0x298270u;
    {
        const bool branch_taken_0x298270 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x298274u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961280)));
        if (branch_taken_0x298270) {
            ctx->pc = 0x2982CCu;
            goto label_2982cc;
        }
    }
    ctx->pc = 0x298278u;
label_298278:
    // 0x298278: 0x86620054
    ctx->pc = 0x298278u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x29827c: 0x4410012
    ctx->pc = 0x29827Cu;
    {
        const bool branch_taken_0x29827c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x298280u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x29827c) {
            ctx->pc = 0x2982C8u;
            goto label_2982c8;
        }
    }
    ctx->pc = 0x298284u;
    // 0x298284: 0x12000010
    ctx->pc = 0x298284u;
    {
        const bool branch_taken_0x298284 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x298288u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x298284) {
            ctx->pc = 0x2982C8u;
            goto label_2982c8;
        }
    }
    ctx->pc = 0x29828Cu;
    // 0x29828c: 0x8c83e880
    ctx->pc = 0x29828cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294961280)));
    // 0x298290: 0x24020001
    ctx->pc = 0x298290u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x298294: 0x1462000c
    ctx->pc = 0x298294u;
    {
        const bool branch_taken_0x298294 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x298298u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x298294) {
            ctx->pc = 0x2982C8u;
            goto label_2982c8;
        }
    }
    ctx->pc = 0x29829Cu;
    // 0x29829c: 0x10000008
    ctx->pc = 0x29829Cu;
    {
        const bool branch_taken_0x29829c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2982A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x29829c) {
            ctx->pc = 0x2982C0u;
            goto label_2982c0;
        }
    }
    ctx->pc = 0x2982A4u;
label_2982a4:
    // 0x2982a4: 0x12000007
    ctx->pc = 0x2982A4u;
    {
        const bool branch_taken_0x2982a4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2982A8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x2982a4) {
            ctx->pc = 0x2982C4u;
            goto label_2982c4;
        }
    }
    ctx->pc = 0x2982ACu;
    // 0x2982ac: 0x8c83e880
    ctx->pc = 0x2982acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294961280)));
    // 0x2982b0: 0x24020003
    ctx->pc = 0x2982b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2982b4: 0x14620004
    ctx->pc = 0x2982B4u;
    {
        const bool branch_taken_0x2982b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2982B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2982b4) {
            ctx->pc = 0x2982C8u;
            goto label_2982c8;
        }
    }
    ctx->pc = 0x2982BCu;
    // 0x2982bc: 0x24020004
    ctx->pc = 0x2982bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_2982c0:
    // 0x2982c0: 0xac82e880
    ctx->pc = 0x2982c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961280), GPR_U32(ctx, 2));
label_2982c4:
    // 0x2982c4: 0x3c020034
    ctx->pc = 0x2982c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2982c8:
    // 0x2982c8: 0x8c43e880
    ctx->pc = 0x2982c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961280)));
label_2982cc:
    // 0x2982cc: 0x28620004
    ctx->pc = 0x2982ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
    // 0x2982d0: 0x10400005
    ctx->pc = 0x2982D0u;
    {
        const bool branch_taken_0x2982d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2982D4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
        if (branch_taken_0x2982d0) {
            ctx->pc = 0x2982E8u;
            goto label_2982e8;
        }
    }
    ctx->pc = 0x2982D8u;
    // 0x2982d8: 0x14400004
    ctx->pc = 0x2982D8u;
    {
        const bool branch_taken_0x2982d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2982DCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2982d8) {
            ctx->pc = 0x2982ECu;
            goto label_2982ec;
        }
    }
    ctx->pc = 0x2982E0u;
    // 0x2982e0: 0x240200ff
    ctx->pc = 0x2982e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x2982e4: 0xa6220b46
    ctx->pc = 0x2982e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2886), (uint16_t)GPR_U32(ctx, 2));
label_2982e8:
    // 0x2982e8: 0x220202d
    ctx->pc = 0x2982e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2982ec:
    // 0x2982ec: 0xc0a5b88
    ctx->pc = 0x2982ECu;
    SET_GPR_U32(ctx, 31, 0x2982F4u);
    ctx->pc = 0x2982F0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x296E20u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoTransition_0x296e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2982F4u; }
    }
    if (ctx->pc != 0x2982F4u) { return; }
    ctx->pc = 0x2982F4u;
    // 0x2982f4: 0x220202d
    ctx->pc = 0x2982f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2982f8: 0x260282d
    ctx->pc = 0x2982f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2982fc: 0xc0a5b0a
    ctx->pc = 0x2982FCu;
    SET_GPR_U32(ctx, 31, 0x298304u);
    ctx->pc = 0x298300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x296C28u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoActions_0x296c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298304u; }
    }
    if (ctx->pc != 0x298304u) { return; }
    ctx->pc = 0x298304u;
    // 0x298304: 0x220202d
    ctx->pc = 0x298304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298308: 0xc0a5c9c
    ctx->pc = 0x298308u;
    SET_GPR_U32(ctx, 31, 0x298310u);
    ctx->pc = 0x29830Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x297270u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterTranslate_0x297270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298310u; }
    }
    if (ctx->pc != 0x298310u) { return; }
    ctx->pc = 0x298310u;
    // 0x298310: 0x220202d
    ctx->pc = 0x298310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298314: 0xc0a5bc8
    ctx->pc = 0x298314u;
    SET_GPR_U32(ctx, 31, 0x29831Cu);
    ctx->pc = 0x298318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x296F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterRotate_0x296f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29831Cu; }
    }
    if (ctx->pc != 0x29831Cu) { return; }
    ctx->pc = 0x29831Cu;
    // 0x29831c: 0x220202d
    ctx->pc = 0x29831cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298320: 0xc0a71d8
    ctx->pc = 0x298320u;
    SET_GPR_U32(ctx, 31, 0x298328u);
    ctx->pc = 0x298324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29C760u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLookAtPlayer_0x29c760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298328u; }
    }
    if (ctx->pc != 0x298328u) { return; }
    ctx->pc = 0x298328u;
    // 0x298328: 0x8e300b60
    ctx->pc = 0x298328u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 2912)));
    // 0x29832c: 0x12000021
    ctx->pc = 0x29832Cu;
    {
        const bool branch_taken_0x29832c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x298330u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 64));
        if (branch_taken_0x29832c) {
            ctx->pc = 0x2983B4u;
            goto label_2983b4;
        }
    }
    ctx->pc = 0x298334u;
    // 0x298334: 0x24130090
    ctx->pc = 0x298334u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 144));
    // 0x298338: 0x86030124
    ctx->pc = 0x298338u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x29833c: 0x0
    ctx->pc = 0x29833cu;
    // NOP
label_298340:
    // 0x298340: 0x4600015
    ctx->pc = 0x298340u;
    {
        const bool branch_taken_0x298340 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x298344u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x298340) {
            ctx->pc = 0x298398u;
            goto label_298398;
        }
    }
    ctx->pc = 0x298348u;
    // 0x298348: 0x8e020004
    ctx->pc = 0x298348u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29834c: 0x731818
    ctx->pc = 0x29834cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x298350: 0x8c420124
    ctx->pc = 0x298350u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x298354: 0x629021
    ctx->pc = 0x298354u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x298358: 0xc600009c
    ctx->pc = 0x298358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29835c: 0x46000064
    ctx->pc = 0x29835cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x298360: 0x44140800
    ctx->pc = 0x298360u;
    SET_GPR_U32(ctx, 20, *(uint32_t*)&ctx->f[1]);
    // 0x298364: 0x200202d
    ctx->pc = 0x298364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298368: 0xc0a5b88
    ctx->pc = 0x298368u;
    SET_GPR_U32(ctx, 31, 0x298370u);
    ctx->pc = 0x29836Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x296E20u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoTransition_0x296e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298370u; }
    }
    if (ctx->pc != 0x298370u) { return; }
    ctx->pc = 0x298370u;
    // 0x298370: 0x200202d
    ctx->pc = 0x298370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298374: 0x240282d
    ctx->pc = 0x298374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298378: 0xc0a5b0a
    ctx->pc = 0x298378u;
    SET_GPR_U32(ctx, 31, 0x298380u);
    ctx->pc = 0x29837Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x296C28u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoActions_0x296c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298380u; }
    }
    if (ctx->pc != 0x298380u) { return; }
    ctx->pc = 0x298380u;
    // 0x298380: 0x200202d
    ctx->pc = 0x298380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298384: 0xc0a5c9c
    ctx->pc = 0x298384u;
    SET_GPR_U32(ctx, 31, 0x29838Cu);
    ctx->pc = 0x298388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x297270u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterTranslate_0x297270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29838Cu; }
    }
    if (ctx->pc != 0x29838Cu) { return; }
    ctx->pc = 0x29838Cu;
    // 0x29838c: 0x200202d
    ctx->pc = 0x29838cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298390: 0xc0a5bc8
    ctx->pc = 0x298390u;
    SET_GPR_U32(ctx, 31, 0x298398u);
    ctx->pc = 0x298394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x296F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterRotate_0x296f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298398u; }
    }
    if (ctx->pc != 0x298398u) { return; }
    ctx->pc = 0x298398u;
label_298398:
    // 0x298398: 0x200202d
    ctx->pc = 0x298398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29839c: 0xc0a71d8
    ctx->pc = 0x29839Cu;
    SET_GPR_U32(ctx, 31, 0x2983A4u);
    ctx->pc = 0x2983A0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29C760u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLookAtPlayer_0x29c760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2983A4u; }
    }
    if (ctx->pc != 0x2983A4u) { return; }
    ctx->pc = 0x2983A4u;
    // 0x2983a4: 0x8e100b60
    ctx->pc = 0x2983a4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 2912)));
    // 0x2983a8: 0x5600ffe5
    ctx->pc = 0x2983A8u;
    {
        const bool branch_taken_0x2983a8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x2983a8) {
            ctx->pc = 0x2983ACu;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 292)));
            ctx->pc = 0x298340u;
            goto label_298340;
        }
    }
    ctx->pc = 0x2983B0u;
    // 0x2983b0: 0x26240040
    ctx->pc = 0x2983b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 64));
label_2983b4:
    // 0x2983b4: 0x282d
    ctx->pc = 0x2983b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2983b8: 0x3c0140a0
    ctx->pc = 0x2983b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x2983bc: 0x44816000
    ctx->pc = 0x2983bcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2983c0: 0x3c014080
    ctx->pc = 0x2983c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x2983c4: 0x44816800
    ctx->pc = 0x2983c4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x2983c8: 0x3c01c47a
    ctx->pc = 0x2983c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50298 << 16));
    // 0x2983cc: 0x44817000
    ctx->pc = 0x2983ccu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x2983d0: 0x302d
    ctx->pc = 0x2983d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2983d4: 0xc087b24
    ctx->pc = 0x2983D4u;
    SET_GPR_U32(ctx, 31, 0x2983DCu);
    ctx->pc = 0x2983D8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x21EC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorCollide_0x21ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2983DCu; }
    }
    if (ctx->pc != 0x2983DCu) { return; }
    ctx->pc = 0x2983DCu;
    // 0x2983dc: 0x10400040
    ctx->pc = 0x2983DCu;
    {
        const bool branch_taken_0x2983dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2983E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2983dc) {
            ctx->pc = 0x2984E0u;
            goto label_2984e0;
        }
    }
    ctx->pc = 0x2983E4u;
    // 0x2983e4: 0x2444fbb0
    ctx->pc = 0x2983e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966192));
    // 0x2983e8: 0x8e230004
    ctx->pc = 0x2983e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2983ec: 0xc4800034
    ctx->pc = 0x2983ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2983f0: 0xc46100b0
    ctx->pc = 0x2983f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2983f4: 0x46010000
    ctx->pc = 0x2983f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2983f8: 0xe6200044
    ctx->pc = 0x2983f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x2983fc: 0x8e220008
    ctx->pc = 0x2983fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x298400: 0x54400022
    ctx->pc = 0x298400u;
    {
        const bool branch_taken_0x298400 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x298400) {
            ctx->pc = 0x298404u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 208)));
            ctx->pc = 0x29848Cu;
            goto label_29848c;
        }
    }
    ctx->pc = 0x298408u;
    // 0x298408: 0x3c020036
    ctx->pc = 0x298408u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29840c: 0xc441d7f8
    ctx->pc = 0x29840cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298410: 0x44800000
    ctx->pc = 0x298410u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x298414: 0x46000832
    ctx->pc = 0x298414u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298418: 0x0
    ctx->pc = 0x298418u;
    // NOP
    // 0x29841c: 0x4502001b
    ctx->pc = 0x29841Cu;
    {
        const bool branch_taken_0x29841c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29841c) {
            ctx->pc = 0x298420u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 208)));
            ctx->pc = 0x29848Cu;
            goto label_29848c;
        }
    }
    ctx->pc = 0x298424u;
    // 0x298424: 0x8c62005c
    ctx->pc = 0x298424u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x298428: 0x30420080
    ctx->pc = 0x298428u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
    // 0x29842c: 0x50400017
    ctx->pc = 0x29842Cu;
    {
        const bool branch_taken_0x29842c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x29842c) {
            ctx->pc = 0x298430u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 208)));
            ctx->pc = 0x29848Cu;
            goto label_29848c;
        }
    }
    ctx->pc = 0x298434u;
    // 0x298434: 0x8c820044
    ctx->pc = 0x298434u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x298438: 0x10400007
    ctx->pc = 0x298438u;
    {
        const bool branch_taken_0x298438 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29843Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x298438) {
            ctx->pc = 0x298458u;
            goto label_298458;
        }
    }
    ctx->pc = 0x298440u;
    // 0x298440: 0x80430016
    ctx->pc = 0x298440u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x298444: 0x8c420018
    ctx->pc = 0x298444u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x298448: 0x50400004
    ctx->pc = 0x298448u;
    {
        const bool branch_taken_0x298448 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x298448) {
            ctx->pc = 0x29844Cu;
            SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
            ctx->pc = 0x29845Cu;
            goto label_29845c;
        }
    }
    ctx->pc = 0x298450u;
    // 0x298450: 0x80420016
    ctx->pc = 0x298450u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x298454: 0x621825
    ctx->pc = 0x298454u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_298458:
    // 0x298458: 0x30620010
    ctx->pc = 0x298458u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
label_29845c:
    // 0x29845c: 0x1040000a
    ctx->pc = 0x29845Cu;
    {
        const bool branch_taken_0x29845c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x298460u;
        SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
        if (branch_taken_0x29845c) {
            ctx->pc = 0x298488u;
            goto label_298488;
        }
    }
    ctx->pc = 0x298464u;
    // 0x298464: 0x3c020031
    ctx->pc = 0x298464u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x298468: 0xc440ffa4
    ctx->pc = 0x298468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29846c: 0x3c014000
    ctx->pc = 0x29846cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x298470: 0x44810800
    ctx->pc = 0x298470u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x298474: 0x46010000
    ctx->pc = 0x298474u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x298478: 0xe460d7f8
    ctx->pc = 0x298478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294957048), bits); }
    // 0x29847c: 0x220202d
    ctx->pc = 0x29847cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298480: 0xc0a7846
    ctx->pc = 0x298480u;
    SET_GPR_U32(ctx, 31, 0x298488u);
    ctx->pc = 0x298484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29E118u;
    {
        const uint32_t __entryPc = ctx->pc;
        BossActivate_0x29e118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298488u; }
    }
    if (ctx->pc != 0x298488u) { return; }
    ctx->pc = 0x298488u;
label_298488:
    // 0x298488: 0x8e2500d0
    ctx->pc = 0x298488u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_29848c:
    // 0x29848c: 0x10a00014
    ctx->pc = 0x29848Cu;
    {
        const bool branch_taken_0x29848c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x298490u;
        SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
        if (branch_taken_0x29848c) {
            ctx->pc = 0x2984E0u;
            goto label_2984e0;
        }
    }
    ctx->pc = 0x298494u;
    // 0x298494: 0xc0b549e
    ctx->pc = 0x298494u;
    SET_GPR_U32(ctx, 31, 0x29849Cu);
    ctx->pc = 0x298498u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294966192));
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29849Cu; }
    }
    if (ctx->pc != 0x29849Cu) { return; }
    ctx->pc = 0x29849Cu;
    // 0x29849c: 0x8e2200d0
    ctx->pc = 0x29849cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x2984a0: 0xc6200040
    ctx->pc = 0x2984a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2984a4: 0xe4400030
    ctx->pc = 0x2984a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2984a8: 0x8e2200d0
    ctx->pc = 0x2984a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x2984ac: 0xc6200044
    ctx->pc = 0x2984acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2984b0: 0xe4400034
    ctx->pc = 0x2984b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x2984b4: 0x8e2200d0
    ctx->pc = 0x2984b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x2984b8: 0xc6200048
    ctx->pc = 0x2984b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2984bc: 0xe4400038
    ctx->pc = 0x2984bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2984c0: 0x8e2200d0
    ctx->pc = 0x2984c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x2984c4: 0x2610fbb0
    ctx->pc = 0x2984c4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294966192));
    // 0x2984c8: 0xc6000034
    ctx->pc = 0x2984c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2984cc: 0x3c013dcc
    ctx->pc = 0x2984ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x2984d0: 0x3421cccd
    ctx->pc = 0x2984d0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2984d4: 0x44810800
    ctx->pc = 0x2984d4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2984d8: 0x46010000
    ctx->pc = 0x2984d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2984dc: 0xe4400034
    ctx->pc = 0x2984dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_2984e0:
    // 0x2984e0: 0x3c020031
    ctx->pc = 0x2984e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2984e4: 0xdc420e28
    ctx->pc = 0x2984e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x2984e8: 0x30420010
    ctx->pc = 0x2984e8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x2984ec: 0x10400077
    ctx->pc = 0x2984ECu;
    {
        const bool branch_taken_0x2984ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2984F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2984ec) {
            ctx->pc = 0x2986CCu;
            goto label_2986cc;
        }
    }
    ctx->pc = 0x2984F4u;
    // 0x2984f4: 0x3c020031
    ctx->pc = 0x2984f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2984f8: 0x8c420008
    ctx->pc = 0x2984f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2984fc: 0x10400073
    ctx->pc = 0x2984FCu;
    {
        const bool branch_taken_0x2984fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x298500u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2984fc) {
            ctx->pc = 0x2986CCu;
            goto label_2986cc;
        }
    }
    ctx->pc = 0x298504u;
    // 0x298504: 0x220202d
    ctx->pc = 0x298504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298508: 0x27a50040
    ctx->pc = 0x298508u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    // 0x29850c: 0x27a60044
    ctx->pc = 0x29850cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 68));
    // 0x298510: 0xc0a5f20
    ctx->pc = 0x298510u;
    SET_GPR_U32(ctx, 31, 0x298518u);
    ctx->pc = 0x298514u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x297C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritGetTgtPrintInfo_0x297c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298518u; }
    }
    if (ctx->pc != 0x298518u) { return; }
    ctx->pc = 0x298518u;
    // 0x298518: 0x8e230004
    ctx->pc = 0x298518u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29851c: 0x862a0124
    ctx->pc = 0x29851cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x298520: 0x24020090
    ctx->pc = 0x298520u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 144));
    // 0x298524: 0x1425018
    ctx->pc = 0x298524u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x298528: 0x8c620124
    ctx->pc = 0x298528u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x29852c: 0x1425021
    ctx->pc = 0x29852cu;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x298530: 0xc62204f4
    ctx->pc = 0x298530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x298534: 0xc620011c
    ctx->pc = 0x298534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298538: 0x3c014120
    ctx->pc = 0x298538u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x29853c: 0x44810800
    ctx->pc = 0x29853cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x298540: 0x46010002
    ctx->pc = 0x298540u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x298544: 0x46000064
    ctx->pc = 0x298544u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x298548: 0xe7a10000
    ctx->pc = 0x298548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29854c: 0xc620009c
    ctx->pc = 0x29854cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298550: 0x3c013f00
    ctx->pc = 0x298550u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x298554: 0x44810800
    ctx->pc = 0x298554u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x298558: 0x46010000
    ctx->pc = 0x298558u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29855c: 0x460000e4
    ctx->pc = 0x29855cu;
    *(int32_t*)&ctx->f[3] = FPU_CVT_W_S(ctx->f[0]);
    // 0x298560: 0xe7a30008
    ctx->pc = 0x298560u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x298564: 0x86220130
    ctx->pc = 0x298564u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x298568: 0xafa20010
    ctx->pc = 0x298568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x29856c: 0xc7a00044
    ctx->pc = 0x29856cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298570: 0x46010000
    ctx->pc = 0x298570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x298574: 0x460000e4
    ctx->pc = 0x298574u;
    *(int32_t*)&ctx->f[3] = FPU_CVT_W_S(ctx->f[0]);
    // 0x298578: 0xe7a30018
    ctx->pc = 0x298578u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x29857c: 0xc7a00040
    ctx->pc = 0x29857cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298580: 0x46010000
    ctx->pc = 0x298580u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x298584: 0x46000064
    ctx->pc = 0x298584u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x298588: 0xe7a10020
    ctx->pc = 0x298588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29858c: 0x24040008
    ctx->pc = 0x29858cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x298590: 0x240500d6
    ctx->pc = 0x298590u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 214));
    // 0x298594: 0x302d
    ctx->pc = 0x298594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298598: 0x3c0700ff
    ctx->pc = 0x298598u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x29859c: 0x34e7ffff
    ctx->pc = 0x29859cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x2985a0: 0x3c08003b
    ctx->pc = 0x2985a0u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x2985a4: 0x2508e360
    ctx->pc = 0x2985a4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294959968));
    // 0x2985a8: 0x27a90030
    ctx->pc = 0x2985a8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2985ac: 0x46001024
    ctx->pc = 0x2985acu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[2]);
    // 0x2985b0: 0x440b0000
    ctx->pc = 0x2985b0u;
    SET_GPR_U32(ctx, 11, *(uint32_t*)&ctx->f[0]);
    // 0x2985b4: 0xc0804c8
    ctx->pc = 0x2985B4u;
    SET_GPR_U32(ctx, 31, 0x2985BCu);
    ctx->pc = 0x2985B8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 16));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2985BCu; }
    }
    if (ctx->pc != 0x2985BCu) { return; }
    ctx->pc = 0x2985BCu;
    // 0x2985bc: 0x241300e0
    ctx->pc = 0x2985bcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 224));
    // 0x2985c0: 0x8e300b60
    ctx->pc = 0x2985c0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 2912)));
    // 0x2985c4: 0x12000040
    ctx->pc = 0x2985C4u;
    {
        const bool branch_taken_0x2985c4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2985C8u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2985c4) {
            ctx->pc = 0x2986C8u;
            goto label_2986c8;
        }
    }
    ctx->pc = 0x2985CCu;
    // 0x2985cc: 0x3c02003b
    ctx->pc = 0x2985ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2985d0: 0x2451e398
    ctx->pc = 0x2985d0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294960024));
    // 0x2985d4: 0x3c014120
    ctx->pc = 0x2985d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x2985d8: 0x4481a800
    ctx->pc = 0x2985d8u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x2985dc: 0x3c013f00
    ctx->pc = 0x2985dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2985e0: 0x4481a000
    ctx->pc = 0x2985e0u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2985e4: 0x0
    ctx->pc = 0x2985e4u;
    // NOP
label_2985e8:
    // 0x2985e8: 0x200202d
    ctx->pc = 0x2985e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2985ec: 0x27a50040
    ctx->pc = 0x2985ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    // 0x2985f0: 0x27a60044
    ctx->pc = 0x2985f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 68));
    // 0x2985f4: 0xc0a5f20
    ctx->pc = 0x2985F4u;
    SET_GPR_U32(ctx, 31, 0x2985FCu);
    ctx->pc = 0x2985F8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x297C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritGetTgtPrintInfo_0x297c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2985FCu; }
    }
    if (ctx->pc != 0x2985FCu) { return; }
    ctx->pc = 0x2985FCu;
    // 0x2985fc: 0x86040124
    ctx->pc = 0x2985fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x298600: 0x4800007
    ctx->pc = 0x298600u;
    {
        const bool branch_taken_0x298600 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x298604u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 144));
        if (branch_taken_0x298600) {
            ctx->pc = 0x298620u;
            goto label_298620;
        }
    }
    ctx->pc = 0x298608u;
    // 0x298608: 0x8e030004
    ctx->pc = 0x298608u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29860c: 0x821018
    ctx->pc = 0x29860cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x298610: 0x8c630124
    ctx->pc = 0x298610u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x298614: 0x431021
    ctx->pc = 0x298614u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x298618: 0x10000003
    ctx->pc = 0x298618u;
    {
        const bool branch_taken_0x298618 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29861Cu;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x298618) {
            ctx->pc = 0x298628u;
            goto label_298628;
        }
    }
    ctx->pc = 0x298620u;
label_298620:
    // 0x298620: 0x3c02003b
    ctx->pc = 0x298620u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x298624: 0x244be3d0
    ctx->pc = 0x298624u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 2), 4294960080));
label_298628:
    // 0x298628: 0xc60004f4
    ctx->pc = 0x298628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29862c: 0x46000064
    ctx->pc = 0x29862cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x298630: 0xe7a10000
    ctx->pc = 0x298630u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x298634: 0xc600011c
    ctx->pc = 0x298634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298638: 0x46150002
    ctx->pc = 0x298638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x29863c: 0x46000064
    ctx->pc = 0x29863cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x298640: 0xe7a10008
    ctx->pc = 0x298640u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x298644: 0x86020124
    ctx->pc = 0x298644u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x298648: 0x4400006
    ctx->pc = 0x298648u;
    {
        const bool branch_taken_0x298648 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29864Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x298648) {
            ctx->pc = 0x298664u;
            goto label_298664;
        }
    }
    ctx->pc = 0x298650u;
    // 0x298650: 0xc600009c
    ctx->pc = 0x298650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298654: 0x46000064
    ctx->pc = 0x298654u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x298658: 0x44020800
    ctx->pc = 0x298658u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x29865c: 0x10000002
    ctx->pc = 0x29865Cu;
    {
        const bool branch_taken_0x29865c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x298660u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x29865c) {
            ctx->pc = 0x298668u;
            goto label_298668;
        }
    }
    ctx->pc = 0x298664u;
label_298664:
    // 0x298664: 0xafa20010
    ctx->pc = 0x298664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_298668:
    // 0x298668: 0x86020130
    ctx->pc = 0x298668u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x29866c: 0xafa20018
    ctx->pc = 0x29866cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x298670: 0xc7a00044
    ctx->pc = 0x298670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298674: 0x46140000
    ctx->pc = 0x298674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x298678: 0x46000064
    ctx->pc = 0x298678u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x29867c: 0xe7a10020
    ctx->pc = 0x29867cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x298680: 0xc7a00040
    ctx->pc = 0x298680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298684: 0x46140000
    ctx->pc = 0x298684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x298688: 0x46000064
    ctx->pc = 0x298688u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x29868c: 0xe7a10028
    ctx->pc = 0x29868cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x298690: 0x24040008
    ctx->pc = 0x298690u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x298694: 0x260282d
    ctx->pc = 0x298694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298698: 0x302d
    ctx->pc = 0x298698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29869c: 0x3c0700ff
    ctx->pc = 0x29869cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x2986a0: 0x34e7ffff
    ctx->pc = 0x2986a0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x2986a4: 0x220402d
    ctx->pc = 0x2986a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2986a8: 0x240482d
    ctx->pc = 0x2986a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2986ac: 0xc0804c8
    ctx->pc = 0x2986ACu;
    SET_GPR_U32(ctx, 31, 0x2986B4u);
    ctx->pc = 0x2986B0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2986B4u; }
    }
    if (ctx->pc != 0x2986B4u) { return; }
    ctx->pc = 0x2986B4u;
    // 0x2986b4: 0x2673000a
    ctx->pc = 0x2986b4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 10));
    // 0x2986b8: 0x8e100b60
    ctx->pc = 0x2986b8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 2912)));
    // 0x2986bc: 0x1600ffca
    ctx->pc = 0x2986BCu;
    {
        const bool branch_taken_0x2986bc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2986C0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x2986bc) {
            ctx->pc = 0x2985E8u;
            goto label_2985e8;
        }
    }
    ctx->pc = 0x2986C4u;
    // 0x2986c4: 0x0
    ctx->pc = 0x2986c4u;
    // NOP
label_2986c8:
    // 0x2986c8: 0x24020001
    ctx->pc = 0x2986c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2986cc:
    // 0x2986cc: 0xdfbf00a0
    ctx->pc = 0x2986ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2986d0: 0xdfb40090
    ctx->pc = 0x2986d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2986d4: 0xdfb30080
    ctx->pc = 0x2986d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2986d8: 0xdfb20070
    ctx->pc = 0x2986d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2986dc: 0xdfb10060
    ctx->pc = 0x2986dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2986e0: 0xdfb00050
    ctx->pc = 0x2986e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2986e4: 0xc7b500b8
    ctx->pc = 0x2986e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2986e8: 0xc7b400b0
    ctx->pc = 0x2986e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2986ec: 0x3e00008
    ctx->pc = 0x2986ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2986F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x297DF0u: goto label_297df0;
            case 0x297E0Cu: goto label_297e0c;
            case 0x297E74u: goto label_297e74;
            case 0x297EC0u: goto label_297ec0;
            case 0x297EC8u: goto label_297ec8;
            case 0x297ECCu: goto label_297ecc;
            case 0x297EDCu: goto label_297edc;
            case 0x297EF8u: goto label_297ef8;
            case 0x297F1Cu: goto label_297f1c;
            case 0x297F68u: goto label_297f68;
            case 0x297F8Cu: goto label_297f8c;
            case 0x297FD0u: goto label_297fd0;
            case 0x297FE0u: goto label_297fe0;
            case 0x298000u: goto label_298000;
            case 0x298004u: goto label_298004;
            case 0x298024u: goto label_298024;
            case 0x29804Cu: goto label_29804c;
            case 0x29805Cu: goto label_29805c;
            case 0x298070u: goto label_298070;
            case 0x2980A0u: goto label_2980a0;
            case 0x2980C0u: goto label_2980c0;
            case 0x2980D4u: goto label_2980d4;
            case 0x2980FCu: goto label_2980fc;
            case 0x29810Cu: goto label_29810c;
            case 0x298110u: goto label_298110;
            case 0x298124u: goto label_298124;
            case 0x298128u: goto label_298128;
            case 0x298130u: goto label_298130;
            case 0x2981ACu: goto label_2981ac;
            case 0x298220u: goto label_298220;
            case 0x298240u: goto label_298240;
            case 0x298244u: goto label_298244;
            case 0x298254u: goto label_298254;
            case 0x298258u: goto label_298258;
            case 0x29825Cu: goto label_29825c;
            case 0x298260u: goto label_298260;
            case 0x298278u: goto label_298278;
            case 0x2982A4u: goto label_2982a4;
            case 0x2982C0u: goto label_2982c0;
            case 0x2982C4u: goto label_2982c4;
            case 0x2982C8u: goto label_2982c8;
            case 0x2982CCu: goto label_2982cc;
            case 0x2982E8u: goto label_2982e8;
            case 0x2982ECu: goto label_2982ec;
            case 0x298340u: goto label_298340;
            case 0x298398u: goto label_298398;
            case 0x2983B4u: goto label_2983b4;
            case 0x298458u: goto label_298458;
            case 0x29845Cu: goto label_29845c;
            case 0x298488u: goto label_298488;
            case 0x29848Cu: goto label_29848c;
            case 0x2984E0u: goto label_2984e0;
            case 0x2985E8u: goto label_2985e8;
            case 0x298620u: goto label_298620;
            case 0x298628u: goto label_298628;
            case 0x298664u: goto label_298664;
            case 0x298668u: goto label_298668;
            case 0x2986C8u: goto label_2986c8;
            case 0x2986CCu: goto label_2986cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2986F4u;
}
