#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerDamageEnemy
// Address: 0x2470c8 - 0x247340
void PlayerDamageEnemy_0x2470c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2470c8u;

    // 0x2470c8: 0x27bdff60
    ctx->pc = 0x2470c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2470cc: 0xffbf0080
    ctx->pc = 0x2470ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2470d0: 0xffb60070
    ctx->pc = 0x2470d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2470d4: 0xffb50060
    ctx->pc = 0x2470d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2470d8: 0xffb40050
    ctx->pc = 0x2470d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2470dc: 0xffb30040
    ctx->pc = 0x2470dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2470e0: 0xffb20030
    ctx->pc = 0x2470e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2470e4: 0xffb10020
    ctx->pc = 0x2470e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2470e8: 0xffb00010
    ctx->pc = 0x2470e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2470ec: 0xe7b50098
    ctx->pc = 0x2470ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2470f0: 0xe7b40090
    ctx->pc = 0x2470f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2470f4: 0x80882d
    ctx->pc = 0x2470f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2470f8: 0x46006506
    ctx->pc = 0x2470f8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2470fc: 0xc0a02d
    ctx->pc = 0x2470fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247100: 0xe0a82d
    ctx->pc = 0x247100u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247104: 0x100b02d
    ctx->pc = 0x247104u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247108: 0x46006d46
    ctx->pc = 0x247108u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x24710c: 0x3402ffff
    ctx->pc = 0x24710cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x247110: 0x45102a
    ctx->pc = 0x247110u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 5)));
    // 0x247114: 0x10400009
    ctx->pc = 0x247114u;
    {
        const bool branch_taken_0x247114 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x247118u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x247114) {
            ctx->pc = 0x24713Cu;
            goto label_24713c;
        }
    }
    ctx->pc = 0x24711Cu;
    // 0x24711c: 0x902d
    ctx->pc = 0x24711cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247120: 0x30a3ffff
    ctx->pc = 0x247120u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 65535));
    // 0x247124: 0x24020b70
    ctx->pc = 0x247124u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2928));
    // 0x247128: 0x621818
    ctx->pc = 0x247128u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x24712c: 0x3c020035
    ctx->pc = 0x24712cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x247130: 0x24421dc0
    ctx->pc = 0x247130u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7616));
    // 0x247134: 0x10000008
    ctx->pc = 0x247134u;
    {
        const bool branch_taken_0x247134 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x247138u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x247134) {
            ctx->pc = 0x247158u;
            goto label_247158;
        }
    }
    ctx->pc = 0x24713Cu;
label_24713c:
    // 0x24713c: 0x4a00015
    ctx->pc = 0x24713Cu;
    {
        const bool branch_taken_0x24713c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x247140u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
        if (branch_taken_0x24713c) {
            ctx->pc = 0x247194u;
            goto label_247194;
        }
    }
    ctx->pc = 0x247144u;
    // 0x247144: 0xa31818
    ctx->pc = 0x247144u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x247148: 0x3c020033
    ctx->pc = 0x247148u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x24714c: 0x2442dfd0
    ctx->pc = 0x24714cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x247150: 0x629021
    ctx->pc = 0x247150u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x247154: 0x802d
    ctx->pc = 0x247154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247158:
    // 0x247158: 0x44800000
    ctx->pc = 0x247158u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x24715c: 0x46150034
    ctx->pc = 0x24715cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247160: 0x45000016
    ctx->pc = 0x247160u;
    {
        const bool branch_taken_0x247160 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247160) {
            ctx->pc = 0x2471BCu;
            goto label_2471bc;
        }
    }
    ctx->pc = 0x247168u;
    // 0x247168: 0x1240000c
    ctx->pc = 0x247168u;
    {
        const bool branch_taken_0x247168 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x24716Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x247168) {
            ctx->pc = 0x24719Cu;
            goto label_24719c;
        }
    }
    ctx->pc = 0x247170u;
    // 0x247170: 0x8e220000
    ctx->pc = 0x247170u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x247174: 0x24420001
    ctx->pc = 0x247174u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x247178: 0x21080
    ctx->pc = 0x247178u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x24717c: 0x2421021
    ctx->pc = 0x24717cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x247180: 0xc461ffa4
    ctx->pc = 0x247180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247184: 0xc44002c8
    ctx->pc = 0x247184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247188: 0x46000834
    ctx->pc = 0x247188u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24718c: 0x4500000a
    ctx->pc = 0x24718Cu;
    {
        const bool branch_taken_0x24718c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24718c) {
            ctx->pc = 0x2471B8u;
            goto label_2471b8;
        }
    }
    ctx->pc = 0x247194u;
label_247194:
    // 0x247194: 0x1000005e
    ctx->pc = 0x247194u;
    {
        const bool branch_taken_0x247194 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x247198u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x247194) {
            ctx->pc = 0x247310u;
            goto label_247310;
        }
    }
    ctx->pc = 0x24719Cu;
label_24719c:
    // 0x24719c: 0x12000006
    ctx->pc = 0x24719Cu;
    {
        const bool branch_taken_0x24719c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2471A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24719c) {
            ctx->pc = 0x2471B8u;
            goto label_2471b8;
        }
    }
    ctx->pc = 0x2471A4u;
    // 0x2471a4: 0x8e250000
    ctx->pc = 0x2471a4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2471a8: 0xc0a682c
    ctx->pc = 0x2471A8u;
    SET_GPR_U32(ctx, 31, 0x2471B0u);
    ctx->pc = 0x2471ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x29A0B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterNoHit_0x29a0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2471B0u; }
    }
    if (ctx->pc != 0x2471B0u) { return; }
    ctx->pc = 0x2471B0u;
    // 0x2471b0: 0x14400057
    ctx->pc = 0x2471B0u;
    {
        const bool branch_taken_0x2471b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2471B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2471b0) {
            ctx->pc = 0x247310u;
            goto label_247310;
        }
    }
    ctx->pc = 0x2471B8u;
label_2471b8:
    // 0x2471b8: 0x44800000
    ctx->pc = 0x2471b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2471bc:
    // 0x2471bc: 0x4600a032
    ctx->pc = 0x2471bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2471c0: 0x0
    ctx->pc = 0x2471c0u;
    // NOP
    // 0x2471c4: 0x45030001
    ctx->pc = 0x2471C4u;
    {
        const bool branch_taken_0x2471c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2471c4) {
            ctx->pc = 0x2471C8u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->pc = 0x2471CCu;
            goto label_2471cc;
        }
    }
    ctx->pc = 0x2471CCu;
label_2471cc:
    // 0x2471cc: 0x8e220138
    ctx->pc = 0x2471ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x2471d0: 0x30420100
    ctx->pc = 0x2471d0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x2471d4: 0x54400001
    ctx->pc = 0x2471D4u;
    {
        const bool branch_taken_0x2471d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2471d4) {
            ctx->pc = 0x2471D8u;
            ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
            ctx->pc = 0x2471DCu;
            goto label_2471dc;
        }
    }
    ctx->pc = 0x2471DCu;
label_2471dc:
    // 0x2471dc: 0xc6200040
    ctx->pc = 0x2471dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2471e0: 0xe7a00000
    ctx->pc = 0x2471e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2471e4: 0xc6200048
    ctx->pc = 0x2471e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2471e8: 0xe7a00008
    ctx->pc = 0x2471e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2471ec: 0x3c013d4c
    ctx->pc = 0x2471ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15692 << 16));
    // 0x2471f0: 0x3421cccd
    ctx->pc = 0x2471f0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2471f4: 0x44810000
    ctx->pc = 0x2471f4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2471f8: 0x4600a002
    ctx->pc = 0x2471f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2471fc: 0x3c014000
    ctx->pc = 0x2471fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x247200: 0x44810800
    ctx->pc = 0x247200u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x247204: 0x46000834
    ctx->pc = 0x247204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247208: 0x0
    ctx->pc = 0x247208u;
    // NOP
    // 0x24720c: 0x45000002
    ctx->pc = 0x24720Cu;
    {
        const bool branch_taken_0x24720c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x247210u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        if (branch_taken_0x24720c) {
            ctx->pc = 0x247218u;
            goto label_247218;
        }
    }
    ctx->pc = 0x247214u;
    // 0x247214: 0xe7a10004
    ctx->pc = 0x247214u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_247218:
    // 0x247218: 0x12400029
    ctx->pc = 0x247218u;
    {
        const bool branch_taken_0x247218 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x247218) {
            ctx->pc = 0x2472C0u;
            goto label_2472c0;
        }
    }
    ctx->pc = 0x247220u;
    // 0x247220: 0xc6410214
    ctx->pc = 0x247220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247224: 0x44800000
    ctx->pc = 0x247224u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x247228: 0x46010034
    ctx->pc = 0x247228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24722c: 0x0
    ctx->pc = 0x24722cu;
    // NOP
    // 0x247230: 0x4500000f
    ctx->pc = 0x247230u;
    {
        const bool branch_taken_0x247230 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x247234u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 200)));
        if (branch_taken_0x247230) {
            ctx->pc = 0x247270u;
            goto label_247270;
        }
    }
    ctx->pc = 0x247238u;
    // 0x247238: 0x24020001
    ctx->pc = 0x247238u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x24723c: 0x12020003
    ctx->pc = 0x24723Cu;
    {
        const bool branch_taken_0x24723c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x247240u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x24723c) {
            ctx->pc = 0x24724Cu;
            goto label_24724c;
        }
    }
    ctx->pc = 0x247244u;
    // 0x247244: 0x1602000a
    ctx->pc = 0x247244u;
    {
        const bool branch_taken_0x247244 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        if (branch_taken_0x247244) {
            ctx->pc = 0x247270u;
            goto label_247270;
        }
    }
    ctx->pc = 0x24724Cu;
label_24724c:
    // 0x24724c: 0x240202d
    ctx->pc = 0x24724cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247250: 0x4600a306
    ctx->pc = 0x247250u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x247254: 0x8e250000
    ctx->pc = 0x247254u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x247258: 0x280302d
    ctx->pc = 0x247258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24725c: 0x2a0382d
    ctx->pc = 0x24725cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247260: 0x3a0402d
    ctx->pc = 0x247260u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247264: 0xc08e7bc
    ctx->pc = 0x247264u;
    SET_GPR_U32(ctx, 31, 0x24726Cu);
    ctx->pc = 0x247268u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x239EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        damage_enemy_0x239ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24726Cu; }
    }
    if (ctx->pc != 0x24726Cu) { return; }
    ctx->pc = 0x24726Cu;
    // 0x24726c: 0x40982d
    ctx->pc = 0x24726cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247270:
    // 0x247270: 0x6600006
    ctx->pc = 0x247270u;
    {
        const bool branch_taken_0x247270 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x247274u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x247270) {
            ctx->pc = 0x24728Cu;
            goto label_24728c;
        }
    }
    ctx->pc = 0x247278u;
    // 0x247278: 0x240282d
    ctx->pc = 0x247278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24727c: 0x200302d
    ctx->pc = 0x24727cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247280: 0x260382d
    ctx->pc = 0x247280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247284: 0xc0a4424
    ctx->pc = 0x247284u;
    SET_GPR_U32(ctx, 31, 0x24728Cu);
    ctx->pc = 0x247288u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x291090u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerDamagedEnemy_0x291090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24728Cu; }
    }
    if (ctx->pc != 0x24728Cu) { return; }
    ctx->pc = 0x24728Cu;
label_24728c:
    // 0x24728c: 0x44800000
    ctx->pc = 0x24728cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x247290: 0x46150034
    ctx->pc = 0x247290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247294: 0x0
    ctx->pc = 0x247294u;
    // NOP
    // 0x247298: 0x4500001c
    ctx->pc = 0x247298u;
    {
        const bool branch_taken_0x247298 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24729Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x247298) {
            ctx->pc = 0x24730Cu;
            goto label_24730c;
        }
    }
    ctx->pc = 0x2472A0u;
    // 0x2472a0: 0x8e220000
    ctx->pc = 0x2472a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2472a4: 0x24420001
    ctx->pc = 0x2472a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2472a8: 0x21080
    ctx->pc = 0x2472a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2472ac: 0x2421021
    ctx->pc = 0x2472acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2472b0: 0xc460ffa4
    ctx->pc = 0x2472b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2472b4: 0x4600a800
    ctx->pc = 0x2472b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x2472b8: 0x10000014
    ctx->pc = 0x2472B8u;
    {
        const bool branch_taken_0x2472b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2472BCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 712), bits); }
        if (branch_taken_0x2472b8) {
            ctx->pc = 0x24730Cu;
            goto label_24730c;
        }
    }
    ctx->pc = 0x2472C0u;
label_2472c0:
    // 0x2472c0: 0x12000012
    ctx->pc = 0x2472C0u;
    {
        const bool branch_taken_0x2472c0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2472C4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2472c0) {
            ctx->pc = 0x24730Cu;
            goto label_24730c;
        }
    }
    ctx->pc = 0x2472C8u;
    // 0x2472c8: 0x4600a306
    ctx->pc = 0x2472c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2472cc: 0x8e250000
    ctx->pc = 0x2472ccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2472d0: 0x280302d
    ctx->pc = 0x2472d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2472d4: 0x2a0382d
    ctx->pc = 0x2472d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2472d8: 0x3a0402d
    ctx->pc = 0x2472d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2472dc: 0xc0a6498
    ctx->pc = 0x2472DCu;
    SET_GPR_U32(ctx, 31, 0x2472E4u);
    ctx->pc = 0x2472E0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x299260u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDamage_0x299260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2472E4u; }
    }
    if (ctx->pc != 0x2472E4u) { return; }
    ctx->pc = 0x2472E4u;
    // 0x2472e4: 0x44800000
    ctx->pc = 0x2472e4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2472e8: 0x46150034
    ctx->pc = 0x2472e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2472ec: 0x0
    ctx->pc = 0x2472ecu;
    // NOP
    // 0x2472f0: 0x45000006
    ctx->pc = 0x2472F0u;
    {
        const bool branch_taken_0x2472f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2472F4u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2472f0) {
            ctx->pc = 0x24730Cu;
            goto label_24730c;
        }
    }
    ctx->pc = 0x2472F8u;
    // 0x2472f8: 0x8e250000
    ctx->pc = 0x2472f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2472fc: 0x200202d
    ctx->pc = 0x2472fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247300: 0x24a50001
    ctx->pc = 0x247300u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x247304: 0xc0a67da
    ctx->pc = 0x247304u;
    SET_GPR_U32(ctx, 31, 0x24730Cu);
    ctx->pc = 0x247308u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x299F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterSetFxHitTime_0x299f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24730Cu; }
    }
    if (ctx->pc != 0x24730Cu) { return; }
    ctx->pc = 0x24730Cu;
label_24730c:
    // 0x24730c: 0x260102d
    ctx->pc = 0x24730cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_247310:
    // 0x247310: 0xdfbf0080
    ctx->pc = 0x247310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x247314: 0xdfb60070
    ctx->pc = 0x247314u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x247318: 0xdfb50060
    ctx->pc = 0x247318u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24731c: 0xdfb40050
    ctx->pc = 0x24731cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x247320: 0xdfb30040
    ctx->pc = 0x247320u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x247324: 0xdfb20030
    ctx->pc = 0x247324u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x247328: 0xdfb10020
    ctx->pc = 0x247328u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24732c: 0xdfb00010
    ctx->pc = 0x24732cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247330: 0xc7b50098
    ctx->pc = 0x247330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x247334: 0xc7b40090
    ctx->pc = 0x247334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x247338: 0x3e00008
    ctx->pc = 0x247338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24733Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24713Cu: goto label_24713c;
            case 0x247158u: goto label_247158;
            case 0x247194u: goto label_247194;
            case 0x24719Cu: goto label_24719c;
            case 0x2471B8u: goto label_2471b8;
            case 0x2471BCu: goto label_2471bc;
            case 0x2471CCu: goto label_2471cc;
            case 0x2471DCu: goto label_2471dc;
            case 0x247218u: goto label_247218;
            case 0x24724Cu: goto label_24724c;
            case 0x247270u: goto label_247270;
            case 0x24728Cu: goto label_24728c;
            case 0x2472C0u: goto label_2472c0;
            case 0x24730Cu: goto label_24730c;
            case 0x247310u: goto label_247310;
            default: break;
        }
        return;
    }
    ctx->pc = 0x247340u;
}
