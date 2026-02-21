#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_enemy_attack
// Address: 0x242c70 - 0x242f08
void do_enemy_attack_0x242c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x242c70u;

    // 0x242c70: 0x27bdffd0
    ctx->pc = 0x242c70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x242c74: 0xffbf0020
    ctx->pc = 0x242c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x242c78: 0xffb10010
    ctx->pc = 0x242c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x242c7c: 0xffb00000
    ctx->pc = 0x242c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x242c80: 0x240203b0
    ctx->pc = 0x242c80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 944));
    // 0x242c84: 0x822018
    ctx->pc = 0x242c84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x242c88: 0x3c020033
    ctx->pc = 0x242c88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x242c8c: 0x2442dfd0
    ctx->pc = 0x242c8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x242c90: 0x828821
    ctx->pc = 0x242c90u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x242c94: 0x8e230000
    ctx->pc = 0x242c94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x242c98: 0x2402001e
    ctx->pc = 0x242c98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
    // 0x242c9c: 0x14620067
    ctx->pc = 0x242C9Cu;
    {
        const bool branch_taken_0x242c9c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x242CA0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
        if (branch_taken_0x242c9c) {
            ctx->pc = 0x242E3Cu;
            goto label_242e3c;
        }
    }
    ctx->pc = 0x242CA4u;
    // 0x242ca4: 0x8e220220
    ctx->pc = 0x242ca4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x242ca8: 0x1c400093
    ctx->pc = 0x242CA8u;
    {
        const bool branch_taken_0x242ca8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x242CACu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x242ca8) {
            ctx->pc = 0x242EF8u;
            goto label_242ef8;
        }
    }
    ctx->pc = 0x242CB0u;
    // 0x242cb0: 0x3c040032
    ctx->pc = 0x242cb0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x242cb4: 0x24841bc0
    ctx->pc = 0x242cb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7104));
    // 0x242cb8: 0x8e220298
    ctx->pc = 0x242cb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 664)));
    // 0x242cbc: 0x24032b00
    ctx->pc = 0x242cbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x242cc0: 0x431018
    ctx->pc = 0x242cc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x242cc4: 0x441021
    ctx->pc = 0x242cc4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x242cc8: 0x8c420134
    ctx->pc = 0x242cc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x242ccc: 0x3c030008
    ctx->pc = 0x242cccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
    // 0x242cd0: 0x431024
    ctx->pc = 0x242cd0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x242cd4: 0x54400089
    ctx->pc = 0x242CD4u;
    {
        const bool branch_taken_0x242cd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x242cd4) {
            ctx->pc = 0x242CD8u;
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x242EFCu;
            goto label_242efc;
        }
    }
    ctx->pc = 0x242CDCu;
    // 0x242cdc: 0x862202e8
    ctx->pc = 0x242cdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 744)));
    // 0x242ce0: 0x18400004
    ctx->pc = 0x242CE0u;
    {
        const bool branch_taken_0x242ce0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x242CE4u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 744)));
        if (branch_taken_0x242ce0) {
            ctx->pc = 0x242CF4u;
            goto label_242cf4;
        }
    }
    ctx->pc = 0x242CE8u;
    // 0x242ce8: 0x2462ffff
    ctx->pc = 0x242ce8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x242cec: 0x10000082
    ctx->pc = 0x242CECu;
    {
        const bool branch_taken_0x242cec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242CF0u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 744), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x242cec) {
            ctx->pc = 0x242EF8u;
            goto label_242ef8;
        }
    }
    ctx->pc = 0x242CF4u;
label_242cf4:
    // 0x242cf4: 0x220202d
    ctx->pc = 0x242cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242cf8: 0xc09de18
    ctx->pc = 0x242CF8u;
    SET_GPR_U32(ctx, 31, 0x242D00u);
    ctx->pc = 0x242CFCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x277860u;
    {
        const uint32_t __entryPc = ctx->pc;
        RequestEnemyAction_0x277860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242D00u; }
    }
    if (ctx->pc != 0x242D00u) { return; }
    ctx->pc = 0x242D00u;
    // 0x242d00: 0x3c020031
    ctx->pc = 0x242d00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x242d04: 0x8e23021c
    ctx->pc = 0x242d04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 540)));
    // 0x242d08: 0x8c42ffbc
    ctx->pc = 0x242d08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x242d0c: 0x621023
    ctx->pc = 0x242d0cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x242d10: 0x1c400078
    ctx->pc = 0x242D10u;
    {
        const bool branch_taken_0x242d10 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x242D14u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 540), GPR_U32(ctx, 2));
        if (branch_taken_0x242d10) {
            ctx->pc = 0x242EF4u;
            goto label_242ef4;
        }
    }
    ctx->pc = 0x242D18u;
    // 0x242d18: 0x24420003
    ctx->pc = 0x242d18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3));
    // 0x242d1c: 0xae22021c
    ctx->pc = 0x242d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 540), GPR_U32(ctx, 2));
    // 0x242d20: 0x8623021a
    ctx->pc = 0x242d20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 538)));
    // 0x242d24: 0x24020002
    ctx->pc = 0x242d24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x242d28: 0x54620007
    ctx->pc = 0x242D28u;
    {
        const bool branch_taken_0x242d28 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x242d28) {
            ctx->pc = 0x242D2Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->pc = 0x242D48u;
            goto label_242d48;
        }
    }
    ctx->pc = 0x242D30u;
    // 0x242d30: 0x8e240298
    ctx->pc = 0x242d30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 664)));
    // 0x242d34: 0x2405ffff
    ctx->pc = 0x242d34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x242d38: 0xc08d26a
    ctx->pc = 0x242D38u;
    SET_GPR_U32(ctx, 31, 0x242D40u);
    ctx->pc = 0x242D3Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->pc = 0x2349A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddExp_0x2349a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242D40u; }
    }
    if (ctx->pc != 0x242D40u) { return; }
    ctx->pc = 0x242D40u;
    // 0x242d40: 0x10000008
    ctx->pc = 0x242D40u;
    {
        const bool branch_taken_0x242d40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242D44u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x242d40) {
            ctx->pc = 0x242D64u;
            goto label_242d64;
        }
    }
    ctx->pc = 0x242D48u;
label_242d48:
    // 0x242d48: 0x8e240298
    ctx->pc = 0x242d48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 664)));
    // 0x242d4c: 0x46006307
    ctx->pc = 0x242d4cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x242d50: 0x24050001
    ctx->pc = 0x242d50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x242d54: 0x24061000
    ctx->pc = 0x242d54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x242d58: 0xc08c73c
    ctx->pc = 0x242D58u;
    SET_GPR_U32(ctx, 31, 0x242D60u);
    ctx->pc = 0x242D5Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        damage_player_0x231cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242D60u; }
    }
    if (ctx->pc != 0x242D60u) { return; }
    ctx->pc = 0x242D60u;
    // 0x242d60: 0x40802d
    ctx->pc = 0x242d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_242d64:
    // 0x242d64: 0x8623021a
    ctx->pc = 0x242d64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 538)));
    // 0x242d68: 0x24020002
    ctx->pc = 0x242d68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x242d6c: 0x14620007
    ctx->pc = 0x242D6Cu;
    {
        const bool branch_taken_0x242d6c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x242D70u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 130));
        if (branch_taken_0x242d6c) {
            ctx->pc = 0x242D8Cu;
            goto label_242d8c;
        }
    }
    ctx->pc = 0x242D74u;
    // 0x242d74: 0x24040080
    ctx->pc = 0x242d74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 128));
    // 0x242d78: 0x8e250298
    ctx->pc = 0x242d78u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 664)));
    // 0x242d7c: 0xc0a3a1c
    ctx->pc = 0x242D7Cu;
    SET_GPR_U32(ctx, 31, 0x242D84u);
    ctx->pc = 0x242D80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 80));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242D84u; }
    }
    if (ctx->pc != 0x242D84u) { return; }
    ctx->pc = 0x242D84u;
    // 0x242d84: 0x10000005
    ctx->pc = 0x242D84u;
    {
        const bool branch_taken_0x242d84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242D88u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x242d84) {
            ctx->pc = 0x242D9Cu;
            goto label_242d9c;
        }
    }
    ctx->pc = 0x242D8Cu;
label_242d8c:
    // 0x242d8c: 0x8e250298
    ctx->pc = 0x242d8cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 664)));
    // 0x242d90: 0xc0a3a1c
    ctx->pc = 0x242D90u;
    SET_GPR_U32(ctx, 31, 0x242D98u);
    ctx->pc = 0x242D94u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 80));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242D98u; }
    }
    if (ctx->pc != 0x242D98u) { return; }
    ctx->pc = 0x242D98u;
    // 0x242d98: 0x3c030032
    ctx->pc = 0x242d98u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_242d9c:
    // 0x242d9c: 0x24020001
    ctx->pc = 0x242d9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x242da0: 0xac6207f0
    ctx->pc = 0x242da0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2032), GPR_U32(ctx, 2));
    // 0x242da4: 0x962202e2
    ctx->pc = 0x242da4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 738)));
    // 0x242da8: 0x24420001
    ctx->pc = 0x242da8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x242dac: 0x12000003
    ctx->pc = 0x242DACu;
    {
        const bool branch_taken_0x242dac = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x242DB0u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 738), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x242dac) {
            ctx->pc = 0x242DBCu;
            goto label_242dbc;
        }
    }
    ctx->pc = 0x242DB4u;
    // 0x242db4: 0x10000009
    ctx->pc = 0x242DB4u;
    {
        const bool branch_taken_0x242db4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242DB8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
        if (branch_taken_0x242db4) {
            ctx->pc = 0x242DDCu;
            goto label_242ddc;
        }
    }
    ctx->pc = 0x242DBCu;
label_242dbc:
    // 0x242dbc: 0x8e2201f4
    ctx->pc = 0x242dbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 500)));
    // 0x242dc0: 0x4430007
    ctx->pc = 0x242DC0u;
    {
        const bool branch_taken_0x242dc0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x242dc0) {
            ctx->pc = 0x242DC4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x242DE0u;
            goto label_242de0;
        }
    }
    ctx->pc = 0x242DC8u;
    // 0x242dc8: 0x8e240070
    ctx->pc = 0x242dc8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x242dcc: 0x8625021a
    ctx->pc = 0x242dccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 538)));
    // 0x242dd0: 0xc09fd88
    ctx->pc = 0x242DD0u;
    SET_GPR_U32(ctx, 31, 0x242DD8u);
    ctx->pc = 0x242DD4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27F620u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartDeathFX_0x27f620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242DD8u; }
    }
    if (ctx->pc != 0x242DD8u) { return; }
    ctx->pc = 0x242DD8u;
    // 0x242dd8: 0xae2201f4
    ctx->pc = 0x242dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 2));
label_242ddc:
    // 0x242ddc: 0xc6200214
    ctx->pc = 0x242ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242de0:
    // 0x242de0: 0xc62100d0
    ctx->pc = 0x242de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242de4: 0x46010001
    ctx->pc = 0x242de4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x242de8: 0x44800800
    ctx->pc = 0x242de8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x242dec: 0x46000836
    ctx->pc = 0x242decu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242df0: 0x0
    ctx->pc = 0x242df0u;
    // NOP
    // 0x242df4: 0x45000008
    ctx->pc = 0x242DF4u;
    {
        const bool branch_taken_0x242df4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x242DF8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 532), bits); }
        if (branch_taken_0x242df4) {
            ctx->pc = 0x242E18u;
            goto label_242e18;
        }
    }
    ctx->pc = 0x242DFCu;
    // 0x242dfc: 0x26240040
    ctx->pc = 0x242dfcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 64));
    // 0x242e00: 0xc097464
    ctx->pc = 0x242E00u;
    SET_GPR_U32(ctx, 31, 0x242E08u);
    ctx->pc = 0x242E04u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 664)));
    ctx->pc = 0x25D190u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_death_sound_0x25d190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242E08u; }
    }
    if (ctx->pc != 0x242E08u) { return; }
    ctx->pc = 0x242E08u;
    // 0x242e08: 0x3c03003c
    ctx->pc = 0x242e08u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x242e0c: 0x24020001
    ctx->pc = 0x242e0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x242e10: 0x10000038
    ctx->pc = 0x242E10u;
    {
        const bool branch_taken_0x242e10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242E14u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 2));
        if (branch_taken_0x242e10) {
            ctx->pc = 0x242EF4u;
            goto label_242ef4;
        }
    }
    ctx->pc = 0x242E18u;
label_242e18:
    // 0x242e18: 0x24020001
    ctx->pc = 0x242e18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x242e1c: 0xae220334
    ctx->pc = 0x242e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 820), GPR_U32(ctx, 2));
    // 0x242e20: 0xc09748c
    ctx->pc = 0x242E20u;
    SET_GPR_U32(ctx, 31, 0x242E28u);
    ctx->pc = 0x242E24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 64));
    ctx->pc = 0x25D230u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioDeathLaugh_0x25d230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242E28u; }
    }
    if (ctx->pc != 0x242E28u) { return; }
    ctx->pc = 0x242E28u;
    // 0x242e28: 0x220202d
    ctx->pc = 0x242e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242e2c: 0xc08e6d0
    ctx->pc = 0x242E2Cu;
    SET_GPR_U32(ctx, 31, 0x242E34u);
    ctx->pc = 0x242E30u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 664)));
    ctx->pc = 0x239B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        enemy_dies_0x239b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242E34u; }
    }
    if (ctx->pc != 0x242E34u) { return; }
    ctx->pc = 0x242E34u;
    // 0x242e34: 0x10000030
    ctx->pc = 0x242E34u;
    {
        const bool branch_taken_0x242e34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242E38u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x242e34) {
            ctx->pc = 0x242EF8u;
            goto label_242ef8;
        }
    }
    ctx->pc = 0x242E3Cu;
label_242e3c:
    // 0x242e3c: 0x5462001e
    ctx->pc = 0x242E3Cu;
    {
        const bool branch_taken_0x242e3c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x242e3c) {
            ctx->pc = 0x242E40u;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 804)));
            ctx->pc = 0x242EB8u;
            goto label_242eb8;
        }
    }
    ctx->pc = 0x242E44u;
    // 0x242e44: 0x3c020033
    ctx->pc = 0x242e44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x242e48: 0x8c44c7c4
    ctx->pc = 0x242e48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294952900)));
    // 0x242e4c: 0x4800006
    ctx->pc = 0x242E4Cu;
    {
        const bool branch_taken_0x242e4c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x242E50u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x242e4c) {
            ctx->pc = 0x242E68u;
            goto label_242e68;
        }
    }
    ctx->pc = 0x242E54u;
    // 0x242e54: 0x24631bc0
    ctx->pc = 0x242e54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7104));
    // 0x242e58: 0x24022b00
    ctx->pc = 0x242e58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x242e5c: 0x821018
    ctx->pc = 0x242e5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x242e60: 0x431021
    ctx->pc = 0x242e60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x242e64: 0xa440092c
    ctx->pc = 0x242e64u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2348), (uint16_t)GPR_U32(ctx, 0));
label_242e68:
    // 0x242e68: 0x3c100033
    ctx->pc = 0x242e68u;
    SET_GPR_U32(ctx, 16, ((uint32_t)51 << 16));
    // 0x242e6c: 0x8e230298
    ctx->pc = 0x242e6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 664)));
    // 0x242e70: 0xae03c7c4
    ctx->pc = 0x242e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952900), GPR_U32(ctx, 3));
    // 0x242e74: 0x3c060032
    ctx->pc = 0x242e74u;
    SET_GPR_U32(ctx, 6, ((uint32_t)50 << 16));
    // 0x242e78: 0x24c61bc0
    ctx->pc = 0x242e78u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 7104));
    // 0x242e7c: 0x24022b00
    ctx->pc = 0x242e7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x242e80: 0x621818
    ctx->pc = 0x242e80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x242e84: 0x662821
    ctx->pc = 0x242e84u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x242e88: 0x24020001
    ctx->pc = 0x242e88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x242e8c: 0xa4a2092c
    ctx->pc = 0x242e8cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2348), (uint16_t)GPR_U32(ctx, 2));
    // 0x242e90: 0xc33021
    ctx->pc = 0x242e90u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x242e94: 0x24040032
    ctx->pc = 0x242e94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 50));
    // 0x242e98: 0x8ca50000
    ctx->pc = 0x242e98u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x242e9c: 0xc0a3a1c
    ctx->pc = 0x242E9Cu;
    SET_GPR_U32(ctx, 31, 0x242EA4u);
    ctx->pc = 0x242EA0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 96));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242EA4u; }
    }
    if (ctx->pc != 0x242EA4u) { return; }
    ctx->pc = 0x242EA4u;
    // 0x242ea4: 0x220202d
    ctx->pc = 0x242ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242ea8: 0xc08e6d0
    ctx->pc = 0x242EA8u;
    SET_GPR_U32(ctx, 31, 0x242EB0u);
    ctx->pc = 0x242EACu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294952900)));
    ctx->pc = 0x239B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        enemy_dies_0x239b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242EB0u; }
    }
    if (ctx->pc != 0x242EB0u) { return; }
    ctx->pc = 0x242EB0u;
    // 0x242eb0: 0x10000011
    ctx->pc = 0x242EB0u;
    {
        const bool branch_taken_0x242eb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242EB4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x242eb0) {
            ctx->pc = 0x242EF8u;
            goto label_242ef8;
        }
    }
    ctx->pc = 0x242EB8u;
label_242eb8:
    // 0x242eb8: 0x2402001f
    ctx->pc = 0x242eb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
    // 0x242ebc: 0x1062000d
    ctx->pc = 0x242EBCu;
    {
        const bool branch_taken_0x242ebc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x242EC0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x242ebc) {
            ctx->pc = 0x242EF4u;
            goto label_242ef4;
        }
    }
    ctx->pc = 0x242EC4u;
    // 0x242ec4: 0x96220298
    ctx->pc = 0x242ec4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 664)));
    // 0x242ec8: 0xa62202e0
    ctx->pc = 0x242ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 736), (uint16_t)GPR_U32(ctx, 2));
    // 0x242ecc: 0x962202e2
    ctx->pc = 0x242eccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 738)));
    // 0x242ed0: 0x30420007
    ctx->pc = 0x242ed0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x242ed4: 0x14430005
    ctx->pc = 0x242ED4u;
    {
        const bool branch_taken_0x242ed4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x242ED8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x242ed4) {
            ctx->pc = 0x242EECu;
            goto label_242eec;
        }
    }
    ctx->pc = 0x242EDCu;
    // 0x242edc: 0xc09de18
    ctx->pc = 0x242EDCu;
    SET_GPR_U32(ctx, 31, 0x242EE4u);
    ctx->pc = 0x242EE0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x277860u;
    {
        const uint32_t __entryPc = ctx->pc;
        RequestEnemyAction_0x277860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242EE4u; }
    }
    if (ctx->pc != 0x242EE4u) { return; }
    ctx->pc = 0x242EE4u;
    // 0x242ee4: 0x10000004
    ctx->pc = 0x242EE4u;
    {
        const bool branch_taken_0x242ee4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242EE8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x242ee4) {
            ctx->pc = 0x242EF8u;
            goto label_242ef8;
        }
    }
    ctx->pc = 0x242EECu;
label_242eec:
    // 0x242eec: 0xc09de18
    ctx->pc = 0x242EECu;
    SET_GPR_U32(ctx, 31, 0x242EF4u);
    ctx->pc = 0x242EF0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x277860u;
    {
        const uint32_t __entryPc = ctx->pc;
        RequestEnemyAction_0x277860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242EF4u; }
    }
    if (ctx->pc != 0x242EF4u) { return; }
    ctx->pc = 0x242EF4u;
label_242ef4:
    // 0x242ef4: 0xdfbf0020
    ctx->pc = 0x242ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_242ef8:
    // 0x242ef8: 0xdfb10010
    ctx->pc = 0x242ef8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_242efc:
    // 0x242efc: 0xdfb00000
    ctx->pc = 0x242efcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242f00: 0x3e00008
    ctx->pc = 0x242F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242F04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242CF4u: goto label_242cf4;
            case 0x242D48u: goto label_242d48;
            case 0x242D64u: goto label_242d64;
            case 0x242D8Cu: goto label_242d8c;
            case 0x242D9Cu: goto label_242d9c;
            case 0x242DBCu: goto label_242dbc;
            case 0x242DDCu: goto label_242ddc;
            case 0x242DE0u: goto label_242de0;
            case 0x242E18u: goto label_242e18;
            case 0x242E3Cu: goto label_242e3c;
            case 0x242E68u: goto label_242e68;
            case 0x242EB8u: goto label_242eb8;
            case 0x242EECu: goto label_242eec;
            case 0x242EF4u: goto label_242ef4;
            case 0x242EF8u: goto label_242ef8;
            case 0x242EFCu: goto label_242efc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242F08u;
}
