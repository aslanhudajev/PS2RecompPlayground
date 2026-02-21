#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EnemyWorldDamage
// Address: 0x242f08 - 0x24306c
void EnemyWorldDamage_0x242f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x242f08u;

    // 0x242f08: 0x27bdffa0
    ctx->pc = 0x242f08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x242f0c: 0xffbf0050
    ctx->pc = 0x242f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x242f10: 0xffb30040
    ctx->pc = 0x242f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x242f14: 0xffb20030
    ctx->pc = 0x242f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x242f18: 0xffb10020
    ctx->pc = 0x242f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x242f1c: 0xffb00010
    ctx->pc = 0x242f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x242f20: 0x80882d
    ctx->pc = 0x242f20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242f24: 0xc0982d
    ctx->pc = 0x242f24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242f28: 0xe0802d
    ctx->pc = 0x242f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242f2c: 0xc086fa0
    ctx->pc = 0x242F2Cu;
    SET_GPR_U32(ctx, 31, 0x242F34u);
    ctx->pc = 0x242F30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21BE80u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldObjGetAllFlags_0x21be80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242F34u; }
    }
    if (ctx->pc != 0x242F34u) { return; }
    ctx->pc = 0x242F34u;
    // 0x242f34: 0x40202d
    ctx->pc = 0x242f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242f38: 0x8e230000
    ctx->pc = 0x242f38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x242f3c: 0x2402001b
    ctx->pc = 0x242f3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 27));
    // 0x242f40: 0x10620043
    ctx->pc = 0x242F40u;
    {
        const bool branch_taken_0x242f40 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x242F44u;
        SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
        if (branch_taken_0x242f40) {
            ctx->pc = 0x243050u;
            goto label_243050;
        }
    }
    ctx->pc = 0x242F48u;
    // 0x242f48: 0x829024
    ctx->pc = 0x242f48u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x242f4c: 0x12400040
    ctx->pc = 0x242F4Cu;
    {
        const bool branch_taken_0x242f4c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x242F50u;
        SET_GPR_U32(ctx, 2, ((uint32_t)2560 << 16));
        if (branch_taken_0x242f4c) {
            ctx->pc = 0x243050u;
            goto label_243050;
        }
    }
    ctx->pc = 0x242F54u;
    // 0x242f54: 0x821024
    ctx->pc = 0x242f54u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x242f58: 0x3c030200
    ctx->pc = 0x242f58u;
    SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
    // 0x242f5c: 0x1043003d
    ctx->pc = 0x242F5Cu;
    {
        const bool branch_taken_0x242f5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x242F60u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x242f5c) {
            ctx->pc = 0x243054u;
            goto label_243054;
        }
    }
    ctx->pc = 0x242F64u;
    // 0x242f64: 0xc6600000
    ctx->pc = 0x242f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242f68: 0xc6010000
    ctx->pc = 0x242f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242f6c: 0x46010001
    ctx->pc = 0x242f6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x242f70: 0xe7a00000
    ctx->pc = 0x242f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x242f74: 0xafa00004
    ctx->pc = 0x242f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x242f78: 0xc6600008
    ctx->pc = 0x242f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242f7c: 0xc6010008
    ctx->pc = 0x242f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242f80: 0x46010001
    ctx->pc = 0x242f80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x242f84: 0xe7a00008
    ctx->pc = 0x242f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x242f88: 0xc0b58fc
    ctx->pc = 0x242F88u;
    SET_GPR_U32(ctx, 31, 0x242F90u);
    ctx->pc = 0x242F8Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D63F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector2D_0x2d63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242F90u; }
    }
    if (ctx->pc != 0x242F90u) { return; }
    ctx->pc = 0x242F90u;
    // 0x242f90: 0x240202d
    ctx->pc = 0x242f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242f94: 0x3c020003
    ctx->pc = 0x242f94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)3 << 16));
    // 0x242f98: 0x10820024
    ctx->pc = 0x242F98u;
    {
        const bool branch_taken_0x242f98 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x242F9Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
        if (branch_taken_0x242f98) {
            ctx->pc = 0x24302Cu;
            goto label_24302c;
        }
    }
    ctx->pc = 0x242FA0u;
    // 0x242fa0: 0x14400008
    ctx->pc = 0x242FA0u;
    {
        const bool branch_taken_0x242fa0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x242FA4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)5 << 16));
        if (branch_taken_0x242fa0) {
            ctx->pc = 0x242FC4u;
            goto label_242fc4;
        }
    }
    ctx->pc = 0x242FA8u;
    // 0x242fa8: 0x3c020001
    ctx->pc = 0x242fa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x242fac: 0x1082000e
    ctx->pc = 0x242FACu;
    {
        const bool branch_taken_0x242fac = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x242FB0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
        if (branch_taken_0x242fac) {
            ctx->pc = 0x242FE8u;
            goto label_242fe8;
        }
    }
    ctx->pc = 0x242FB4u;
    // 0x242fb4: 0x10820012
    ctx->pc = 0x242FB4u;
    {
        const bool branch_taken_0x242fb4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x242FB8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x242fb4) {
            ctx->pc = 0x243000u;
            goto label_243000;
        }
    }
    ctx->pc = 0x242FBCu;
    // 0x242fbc: 0x10000026
    ctx->pc = 0x242FBCu;
    {
        const bool branch_taken_0x242fbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242FC0u;
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x242fbc) {
            ctx->pc = 0x243058u;
            goto label_243058;
        }
    }
    ctx->pc = 0x242FC4u;
label_242fc4:
    // 0x242fc4: 0x10820019
    ctx->pc = 0x242FC4u;
    {
        const bool branch_taken_0x242fc4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x242FC8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
        if (branch_taken_0x242fc4) {
            ctx->pc = 0x24302Cu;
            goto label_24302c;
        }
    }
    ctx->pc = 0x242FCCu;
    // 0x242fcc: 0x14400021
    ctx->pc = 0x242FCCu;
    {
        const bool branch_taken_0x242fcc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x242FD0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x242fcc) {
            ctx->pc = 0x243054u;
            goto label_243054;
        }
    }
    ctx->pc = 0x242FD4u;
    // 0x242fd4: 0x3c020004
    ctx->pc = 0x242fd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4 << 16));
    // 0x242fd8: 0x10820015
    ctx->pc = 0x242FD8u;
    {
        const bool branch_taken_0x242fd8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x242FDCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x242fd8) {
            ctx->pc = 0x243030u;
            goto label_243030;
        }
    }
    ctx->pc = 0x242FE0u;
    // 0x242fe0: 0x1000001d
    ctx->pc = 0x242FE0u;
    {
        const bool branch_taken_0x242fe0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242FE4u;
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x242fe0) {
            ctx->pc = 0x243058u;
            goto label_243058;
        }
    }
    ctx->pc = 0x242FE8u;
label_242fe8:
    // 0x242fe8: 0x220202d
    ctx->pc = 0x242fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242fec: 0x3c0140a0
    ctx->pc = 0x242fecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x242ff0: 0x44816000
    ctx->pc = 0x242ff0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x242ff4: 0x2405ffff
    ctx->pc = 0x242ff4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x242ff8: 0x10000006
    ctx->pc = 0x242FF8u;
    {
        const bool branch_taken_0x242ff8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242FFCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x242ff8) {
            ctx->pc = 0x243014u;
            goto label_243014;
        }
    }
    ctx->pc = 0x243000u;
label_243000:
    // 0x243000: 0x220202d
    ctx->pc = 0x243000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243004: 0x3c0140a0
    ctx->pc = 0x243004u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x243008: 0x44816000
    ctx->pc = 0x243008u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x24300c: 0x2405ffff
    ctx->pc = 0x24300cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x243010: 0x24060010
    ctx->pc = 0x243010u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
label_243014:
    // 0x243014: 0x200382d
    ctx->pc = 0x243014u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243018: 0x3a0402d
    ctx->pc = 0x243018u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24301c: 0xc08e7bc
    ctx->pc = 0x24301Cu;
    SET_GPR_U32(ctx, 31, 0x243024u);
    ctx->pc = 0x243020u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x239EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        damage_enemy_0x239ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243024u; }
    }
    if (ctx->pc != 0x243024u) { return; }
    ctx->pc = 0x243024u;
    // 0x243024: 0x1000000b
    ctx->pc = 0x243024u;
    {
        const bool branch_taken_0x243024 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x243028u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x243024) {
            ctx->pc = 0x243054u;
            goto label_243054;
        }
    }
    ctx->pc = 0x24302Cu;
label_24302c:
    // 0x24302c: 0x220202d
    ctx->pc = 0x24302cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_243030:
    // 0x243030: 0x3c014170
    ctx->pc = 0x243030u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16752 << 16));
    // 0x243034: 0x44816000
    ctx->pc = 0x243034u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x243038: 0x2405ffff
    ctx->pc = 0x243038u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24303c: 0x24060020
    ctx->pc = 0x24303cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    // 0x243040: 0x200382d
    ctx->pc = 0x243040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243044: 0x3a0402d
    ctx->pc = 0x243044u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243048: 0xc08e7bc
    ctx->pc = 0x243048u;
    SET_GPR_U32(ctx, 31, 0x243050u);
    ctx->pc = 0x24304Cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x239EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        damage_enemy_0x239ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243050u; }
    }
    if (ctx->pc != 0x243050u) { return; }
    ctx->pc = 0x243050u;
label_243050:
    // 0x243050: 0xdfbf0050
    ctx->pc = 0x243050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_243054:
    // 0x243054: 0xdfb30040
    ctx->pc = 0x243054u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_243058:
    // 0x243058: 0xdfb20030
    ctx->pc = 0x243058u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24305c: 0xdfb10020
    ctx->pc = 0x24305cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243060: 0xdfb00010
    ctx->pc = 0x243060u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243064: 0x3e00008
    ctx->pc = 0x243064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243068u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242FC4u: goto label_242fc4;
            case 0x242FE8u: goto label_242fe8;
            case 0x243000u: goto label_243000;
            case 0x243014u: goto label_243014;
            case 0x24302Cu: goto label_24302c;
            case 0x243030u: goto label_243030;
            case 0x243050u: goto label_243050;
            case 0x243054u: goto label_243054;
            case 0x243058u: goto label_243058;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24306Cu;
}
