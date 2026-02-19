#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: damage_enemy
// Address: 0x239ef0 - 0x23a6f8
void damage_enemy_0x239ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x239ef0u;

    // 0x239ef0: 0x27bdff20
    ctx->pc = 0x239ef0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x239ef4: 0xffbf00c0
    ctx->pc = 0x239ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x239ef8: 0xffb500b0
    ctx->pc = 0x239ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x239efc: 0xffb400a0
    ctx->pc = 0x239efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x239f00: 0xffb30090
    ctx->pc = 0x239f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x239f04: 0xffb20080
    ctx->pc = 0x239f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x239f08: 0xffb10070
    ctx->pc = 0x239f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x239f0c: 0xffb00060
    ctx->pc = 0x239f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x239f10: 0xe7b400d0
    ctx->pc = 0x239f10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x239f14: 0x80902d
    ctx->pc = 0x239f14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239f18: 0xe7ac0050
    ctx->pc = 0x239f18u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x239f1c: 0xa0882d
    ctx->pc = 0x239f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239f20: 0xafa60054
    ctx->pc = 0x239f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
    // 0x239f24: 0xe0a82d
    ctx->pc = 0x239f24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239f28: 0x100a02d
    ctx->pc = 0x239f28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239f2c: 0x120982d
    ctx->pc = 0x239f2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239f30: 0xc6540214
    ctx->pc = 0x239f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x239f34: 0x8e4300c8
    ctx->pc = 0x239f34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 200)));
    // 0x239f38: 0x24020007
    ctx->pc = 0x239f38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x239f3c: 0x10620008
    ctx->pc = 0x239F3Cu;
    {
        const bool branch_taken_0x239f3c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x239F40u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x239f3c) {
            ctx->pc = 0x239F60u;
            goto label_239f60;
        }
    }
    ctx->pc = 0x239F44u;
    // 0x239f44: 0x8e4300c8
    ctx->pc = 0x239f44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 200)));
    // 0x239f48: 0x24020008
    ctx->pc = 0x239f48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x239f4c: 0x10620004
    ctx->pc = 0x239F4Cu;
    {
        const bool branch_taken_0x239f4c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x239F50u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
        if (branch_taken_0x239f4c) {
            ctx->pc = 0x239F60u;
            goto label_239f60;
        }
    }
    ctx->pc = 0x239F54u;
    // 0x239f54: 0x8e430000
    ctx->pc = 0x239f54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x239f58: 0x14620003
    ctx->pc = 0x239F58u;
    {
        const bool branch_taken_0x239f58 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x239f58) {
            ctx->pc = 0x239F68u;
            goto label_239f68;
        }
    }
    ctx->pc = 0x239F60u;
label_239f60:
    // 0x239f60: 0x100001db
    ctx->pc = 0x239F60u;
    {
        const bool branch_taken_0x239f60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x239F64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x239f60) {
            ctx->pc = 0x23A6D0u;
            goto label_23a6d0;
        }
    }
    ctx->pc = 0x239F68u;
label_239f68:
    // 0x239f68: 0x6200005
    ctx->pc = 0x239F68u;
    {
        const bool branch_taken_0x239f68 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x239F6Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x239f68) {
            ctx->pc = 0x239F80u;
            goto label_239f80;
        }
    }
    ctx->pc = 0x239F70u;
    // 0x239f70: 0x2231818
    ctx->pc = 0x239f70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x239f74: 0x3c020032
    ctx->pc = 0x239f74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x239f78: 0x24421bc0
    ctx->pc = 0x239f78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x239f7c: 0x628021
    ctx->pc = 0x239f7cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_239f80:
    // 0x239f80: 0x12000003
    ctx->pc = 0x239F80u;
    {
        const bool branch_taken_0x239f80 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x239F84u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x239f80) {
            ctx->pc = 0x239F90u;
            goto label_239f90;
        }
    }
    ctx->pc = 0x239F88u;
    // 0x239f88: 0x24020001
    ctx->pc = 0x239f88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x239f8c: 0xac6207f0
    ctx->pc = 0x239f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2032), GPR_U32(ctx, 2));
label_239f90:
    // 0x239f90: 0x8e430000
    ctx->pc = 0x239f90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x239f94: 0x2402001e
    ctx->pc = 0x239f94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
    // 0x239f98: 0x54620077
    ctx->pc = 0x239F98u;
    {
        const bool branch_taken_0x239f98 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x239f98) {
            ctx->pc = 0x239F9Cu;
            WRITE16(ADD32(GPR_U32(ctx, 18), 746), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x23A178u;
            goto label_23a178;
        }
    }
    ctx->pc = 0x239FA0u;
    // 0x239fa0: 0x8fa20054
    ctx->pc = 0x239fa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x239fa4: 0x30420200
    ctx->pc = 0x239fa4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 512));
    // 0x239fa8: 0x50400018
    ctx->pc = 0x239FA8u;
    {
        const bool branch_taken_0x239fa8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x239fa8) {
            ctx->pc = 0x239FACu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 200)));
            ctx->pc = 0x23A00Cu;
            goto label_23a00c;
        }
    }
    ctx->pc = 0x239FB0u;
    // 0x239fb0: 0x52000062
    ctx->pc = 0x239FB0u;
    {
        const bool branch_taken_0x239fb0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x239fb0) {
            ctx->pc = 0x239FB4u;
            WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 0));
            ctx->pc = 0x23A13Cu;
            goto label_23a13c;
        }
    }
    ctx->pc = 0x239FB8u;
    // 0x239fb8: 0x8e032ac0
    ctx->pc = 0x239fb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
    // 0x239fbc: 0x2862004c
    ctx->pc = 0x239fbcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 76));
    // 0x239fc0: 0x5440005e
    ctx->pc = 0x239FC0u;
    {
        const bool branch_taken_0x239fc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x239fc0) {
            ctx->pc = 0x239FC4u;
            WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 0));
            ctx->pc = 0x23A13Cu;
            goto label_23a13c;
        }
    }
    ctx->pc = 0x239FC8u;
    // 0x239fc8: 0x2462ffb5
    ctx->pc = 0x239fc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967221));
    // 0x239fcc: 0x44826000
    ctx->pc = 0x239fccu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x239fd0: 0x46806320
    ctx->pc = 0x239fd0u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x239fd4: 0x3c013d03
    ctx->pc = 0x239fd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15619 << 16));
    // 0x239fd8: 0x3421126f
    ctx->pc = 0x239fd8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x239fdc: 0x44810000
    ctx->pc = 0x239fdcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x239fe0: 0x46006302
    ctx->pc = 0x239fe0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x239fe4: 0x3c013e4c
    ctx->pc = 0x239fe4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15948 << 16));
    // 0x239fe8: 0x3421cccd
    ctx->pc = 0x239fe8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x239fec: 0x44810000
    ctx->pc = 0x239fecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x239ff0: 0x46006300
    ctx->pc = 0x239ff0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x239ff4: 0xc6400214
    ctx->pc = 0x239ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239ff8: 0x200202d
    ctx->pc = 0x239ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239ffc: 0xc08c97e
    ctx->pc = 0x239FFCu;
    SET_GPR_U32(ctx, 31, 0x23A004u);
    ctx->pc = 0x23A000u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->pc = 0x2325F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        heal_player_0x2325f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A004u; }
    }
    if (ctx->pc != 0x23A004u) { return; }
    ctx->pc = 0x23A004u;
    // 0x23a004: 0x1000004d
    ctx->pc = 0x23A004u;
    {
        const bool branch_taken_0x23a004 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A008u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 0));
        if (branch_taken_0x23a004) {
            ctx->pc = 0x23A13Cu;
            goto label_23a13c;
        }
    }
    ctx->pc = 0x23A00Cu;
label_23a00c:
    // 0x23a00c: 0x24020006
    ctx->pc = 0x23a00cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x23a010: 0x14620029
    ctx->pc = 0x23A010u;
    {
        const bool branch_taken_0x23a010 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x23a010) {
            ctx->pc = 0x23A0B8u;
            goto label_23a0b8;
        }
    }
    ctx->pc = 0x23A018u;
    // 0x23a018: 0x52600005
    ctx->pc = 0x23A018u;
    {
        const bool branch_taken_0x23a018 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x23a018) {
            ctx->pc = 0x23A01Cu;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 744)));
            ctx->pc = 0x23A030u;
            goto label_23a030;
        }
    }
    ctx->pc = 0x23A020u;
    // 0x23a020: 0x8e440000
    ctx->pc = 0x23a020u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23a024: 0xc097efe
    ctx->pc = 0x23A024u;
    SET_GPR_U32(ctx, 31, 0x23A02Cu);
    ctx->pc = 0x23A028u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 64));
    ctx->pc = 0x25FBF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioEnemyWeaponHit_0x25fbf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A02Cu; }
    }
    if (ctx->pc != 0x23A02Cu) { return; }
    ctx->pc = 0x23A02Cu;
    // 0x23a02c: 0x964202e8
    ctx->pc = 0x23a02cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 744)));
label_23a030:
    // 0x23a030: 0x2442ffff
    ctx->pc = 0x23a030u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23a034: 0xa64202e8
    ctx->pc = 0x23a034u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 744), (uint16_t)GPR_U32(ctx, 2));
    // 0x23a038: 0x21400
    ctx->pc = 0x23a038u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x23a03c: 0x1c4001a4
    ctx->pc = 0x23A03Cu;
    {
        const bool branch_taken_0x23a03c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x23A040u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23a03c) {
            ctx->pc = 0x23A6D0u;
            goto label_23a6d0;
        }
    }
    ctx->pc = 0x23A044u;
    // 0x23a044: 0x24020001
    ctx->pc = 0x23a044u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a048: 0x12600003
    ctx->pc = 0x23A048u;
    {
        const bool branch_taken_0x23a048 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A04Cu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 2));
        if (branch_taken_0x23a048) {
            ctx->pc = 0x23A058u;
            goto label_23a058;
        }
    }
    ctx->pc = 0x23A050u;
    // 0x23a050: 0xc097486
    ctx->pc = 0x23A050u;
    SET_GPR_U32(ctx, 31, 0x23A058u);
    ctx->pc = 0x23A054u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 64));
    ctx->pc = 0x25D218u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioDeathShatter_0x25d218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A058u; }
    }
    if (ctx->pc != 0x23A058u) { return; }
    ctx->pc = 0x23A058u;
label_23a058:
    // 0x23a058: 0x26500010
    ctx->pc = 0x23a058u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 16));
    // 0x23a05c: 0x27b10010
    ctx->pc = 0x23a05cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 16));
    // 0x23a060: 0x200202d
    ctx->pc = 0x23a060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a064: 0xc0b5494
    ctx->pc = 0x23A064u;
    SET_GPR_U32(ctx, 31, 0x23A06Cu);
    ctx->pc = 0x23A068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A06Cu; }
    }
    if (ctx->pc != 0x23A06Cu) { return; }
    ctx->pc = 0x23A06Cu;
    // 0x23a06c: 0x240202d
    ctx->pc = 0x23a06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a070: 0x8e450000
    ctx->pc = 0x23a070u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23a074: 0xc08e154
    ctx->pc = 0x23A074u;
    SET_GPR_U32(ctx, 31, 0x23A07Cu);
    ctx->pc = 0x23A078u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x238550u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetEnemyObj_0x238550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A07Cu; }
    }
    if (ctx->pc != 0x23A07Cu) { return; }
    ctx->pc = 0x23A07Cu;
    // 0x23a07c: 0x220202d
    ctx->pc = 0x23a07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a080: 0xc0b5494
    ctx->pc = 0x23A080u;
    SET_GPR_U32(ctx, 31, 0x23A088u);
    ctx->pc = 0x23A084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A088u; }
    }
    if (ctx->pc != 0x23A088u) { return; }
    ctx->pc = 0x23A088u;
    // 0x23a088: 0xc080ce2
    ctx->pc = 0x23A088u;
    SET_GPR_U32(ctx, 31, 0x23A090u);
    ctx->pc = 0x23A08Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203388u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjWorldMat_0x203388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A090u; }
    }
    if (ctx->pc != 0x23A090u) { return; }
    ctx->pc = 0x23A090u;
    // 0x23a090: 0x200202d
    ctx->pc = 0x23a090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a094: 0x26450240
    ctx->pc = 0x23a094u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 576));
    // 0x23a098: 0xc080cd4
    ctx->pc = 0x23A098u;
    SET_GPR_U32(ctx, 31, 0x23A0A0u);
    ctx->pc = 0x23A09Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 564));
    ctx->pc = 0x203350u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjOffsets_0x203350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A0A0u; }
    }
    if (ctx->pc != 0x23A0A0u) { return; }
    ctx->pc = 0x23A0A0u;
    // 0x23a0a0: 0x8e440070
    ctx->pc = 0x23a0a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x23a0a4: 0x24050002
    ctx->pc = 0x23a0a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x23a0a8: 0xc0b41e4
    ctx->pc = 0x23A0A8u;
    SET_GPR_U32(ctx, 31, 0x23A0B0u);
    ctx->pc = 0x23A0ACu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A0B0u; }
    }
    if (ctx->pc != 0x23A0B0u) { return; }
    ctx->pc = 0x23A0B0u;
    // 0x23a0b0: 0x10000187
    ctx->pc = 0x23A0B0u;
    {
        const bool branch_taken_0x23a0b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A0B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23a0b0) {
            ctx->pc = 0x23A6D0u;
            goto label_23a6d0;
        }
    }
    ctx->pc = 0x23A0B8u;
label_23a0b8:
    // 0x23a0b8: 0x12000016
    ctx->pc = 0x23A0B8u;
    {
        const bool branch_taken_0x23a0b8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A0BCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
        if (branch_taken_0x23a0b8) {
            ctx->pc = 0x23A114u;
            goto label_23a114;
        }
    }
    ctx->pc = 0x23A0C0u;
    // 0x23a0c0: 0x8e020134
    ctx->pc = 0x23a0c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x23a0c4: 0x431024
    ctx->pc = 0x23a0c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23a0c8: 0x10400012
    ctx->pc = 0x23A0C8u;
    {
        const bool branch_taken_0x23a0c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A0CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x23a0c8) {
            ctx->pc = 0x23A114u;
            goto label_23a114;
        }
    }
    ctx->pc = 0x23A0D0u;
    // 0x23a0d0: 0xc6400214
    ctx->pc = 0x23a0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a0d4: 0x3c013f80
    ctx->pc = 0x23a0d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x23a0d8: 0x44810800
    ctx->pc = 0x23a0d8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23a0dc: 0x46010001
    ctx->pc = 0x23a0dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23a0e0: 0xe6400214
    ctx->pc = 0x23a0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 532), bits); }
    // 0x23a0e4: 0x8643021a
    ctx->pc = 0x23a0e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 538)));
    // 0x23a0e8: 0x54620007
    ctx->pc = 0x23A0E8u;
    {
        const bool branch_taken_0x23a0e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x23a0e8) {
            ctx->pc = 0x23A0ECu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x23A108u;
            goto label_23a108;
        }
    }
    ctx->pc = 0x23A0F0u;
    // 0x23a0f0: 0x220202d
    ctx->pc = 0x23a0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a0f4: 0x24050001
    ctx->pc = 0x23a0f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a0f8: 0xc08d26a
    ctx->pc = 0x23A0F8u;
    SET_GPR_U32(ctx, 31, 0x23A100u);
    ctx->pc = 0x23A0FCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->pc = 0x2349A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddExp_0x2349a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A100u; }
    }
    if (ctx->pc != 0x23A100u) { return; }
    ctx->pc = 0x23A100u;
    // 0x23a100: 0x1000000f
    ctx->pc = 0x23A100u;
    {
        const bool branch_taken_0x23a100 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A104u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x23a100) {
            ctx->pc = 0x23A140u;
            goto label_23a140;
        }
    }
    ctx->pc = 0x23A108u;
label_23a108:
    // 0x23a108: 0x46010000
    ctx->pc = 0x23a108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23a10c: 0x1000000b
    ctx->pc = 0x23A10Cu;
    {
        const bool branch_taken_0x23a10c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A110u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6672), bits); }
        if (branch_taken_0x23a10c) {
            ctx->pc = 0x23A13Cu;
            goto label_23a13c;
        }
    }
    ctx->pc = 0x23A114u;
label_23a114:
    // 0x23a114: 0xc6400214
    ctx->pc = 0x23a114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a118: 0x3c013f80
    ctx->pc = 0x23a118u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x23a11c: 0x44810800
    ctx->pc = 0x23a11cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23a120: 0x46010001
    ctx->pc = 0x23a120u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23a124: 0x12000005
    ctx->pc = 0x23A124u;
    {
        const bool branch_taken_0x23a124 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A128u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 532), bits); }
        if (branch_taken_0x23a124) {
            ctx->pc = 0x23A13Cu;
            goto label_23a13c;
        }
    }
    ctx->pc = 0x23A12Cu;
    // 0x23a12c: 0x202d
    ctx->pc = 0x23a12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a130: 0x220282d
    ctx->pc = 0x23a130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a134: 0xc0a3a1c
    ctx->pc = 0x23A134u;
    SET_GPR_U32(ctx, 31, 0x23A13Cu);
    ctx->pc = 0x23A138u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 96));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A13Cu; }
    }
    if (ctx->pc != 0x23A13Cu) { return; }
    ctx->pc = 0x23A13Cu;
label_23a13c:
    // 0x23a13c: 0xc6410214
    ctx->pc = 0x23a13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23a140:
    // 0x23a140: 0x44800000
    ctx->pc = 0x23a140u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x23a144: 0x46000836
    ctx->pc = 0x23a144u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a148: 0x0
    ctx->pc = 0x23a148u;
    // NOP
    // 0x23a14c: 0x45000160
    ctx->pc = 0x23A14Cu;
    {
        const bool branch_taken_0x23a14c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23A150u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23a14c) {
            ctx->pc = 0x23A6D0u;
            goto label_23a6d0;
        }
    }
    ctx->pc = 0x23A154u;
    // 0x23a154: 0x12600004
    ctx->pc = 0x23A154u;
    {
        const bool branch_taken_0x23a154 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A158u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23a154) {
            ctx->pc = 0x23A168u;
            goto label_23a168;
        }
    }
    ctx->pc = 0x23A15Cu;
    // 0x23a15c: 0xc097492
    ctx->pc = 0x23A15Cu;
    SET_GPR_U32(ctx, 31, 0x23A164u);
    ctx->pc = 0x23A160u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 64));
    ctx->pc = 0x25D248u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioDeathDies_0x25d248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A164u; }
    }
    if (ctx->pc != 0x23A164u) { return; }
    ctx->pc = 0x23A164u;
    // 0x23a164: 0x240202d
    ctx->pc = 0x23a164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23a168:
    // 0x23a168: 0xc08e6d0
    ctx->pc = 0x23A168u;
    SET_GPR_U32(ctx, 31, 0x23A170u);
    ctx->pc = 0x23A16Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x239B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        enemy_dies_0x239b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A170u; }
    }
    if (ctx->pc != 0x23A170u) { return; }
    ctx->pc = 0x23A170u;
    // 0x23a170: 0x100000c2
    ctx->pc = 0x23A170u;
    {
        const bool branch_taken_0x23a170 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x23a170) {
            ctx->pc = 0x23A47Cu;
            goto label_23a47c;
        }
    }
    ctx->pc = 0x23A178u;
label_23a178:
    // 0x23a178: 0x3c030080
    ctx->pc = 0x23a178u;
    SET_GPR_U32(ctx, 3, ((uint32_t)128 << 16));
    // 0x23a17c: 0x8fa20054
    ctx->pc = 0x23a17cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x23a180: 0x431024
    ctx->pc = 0x23a180u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23a184: 0x1040000b
    ctx->pc = 0x23A184u;
    {
        const bool branch_taken_0x23a184 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x23a184) {
            ctx->pc = 0x23A1B4u;
            goto label_23a1b4;
        }
    }
    ctx->pc = 0x23A18Cu;
    // 0x23a18c: 0x12000009
    ctx->pc = 0x23A18Cu;
    {
        const bool branch_taken_0x23a18c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A190u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x23a18c) {
            ctx->pc = 0x23A1B4u;
            goto label_23a1b4;
        }
    }
    ctx->pc = 0x23A194u;
    // 0x23a194: 0xc6400214
    ctx->pc = 0x23a194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a198: 0x460c0034
    ctx->pc = 0x23a198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a19c: 0x0
    ctx->pc = 0x23a19cu;
    // NOP
    // 0x23a1a0: 0x45030001
    ctx->pc = 0x23A1A0u;
    {
        const bool branch_taken_0x23a1a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a1a0) {
            ctx->pc = 0x23A1A4u;
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x23A1A8u;
            goto label_23a1a8;
        }
    }
    ctx->pc = 0x23A1A8u;
label_23a1a8:
    // 0x23a1a8: 0x200202d
    ctx->pc = 0x23a1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a1ac: 0xc08c9a4
    ctx->pc = 0x23A1ACu;
    SET_GPR_U32(ctx, 31, 0x23A1B4u);
    ctx->pc = 0x23A1B0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 16));
    ctx->pc = 0x232690u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_heal_players_0x232690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A1B4u; }
    }
    if (ctx->pc != 0x23A1B4u) { return; }
    ctx->pc = 0x23A1B4u;
label_23a1b4:
    // 0x23a1b4: 0x6200025
    ctx->pc = 0x23A1B4u;
    {
        const bool branch_taken_0x23a1b4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x23A1B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x23a1b4) {
            ctx->pc = 0x23A24Cu;
            goto label_23a24c;
        }
    }
    ctx->pc = 0x23A1BCu;
    // 0x23a1bc: 0x8c42e7c8
    ctx->pc = 0x23a1bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x23a1c0: 0xc441009c
    ctx->pc = 0x23a1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a1c4: 0x44800000
    ctx->pc = 0x23a1c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x23a1c8: 0x46010034
    ctx->pc = 0x23a1c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a1cc: 0x0
    ctx->pc = 0x23a1ccu;
    // NOP
    // 0x23a1d0: 0x4500001f
    ctx->pc = 0x23A1D0u;
    {
        const bool branch_taken_0x23a1d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23A1D4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
        if (branch_taken_0x23a1d0) {
            ctx->pc = 0x23A250u;
            goto label_23a250;
        }
    }
    ctx->pc = 0x23A1D8u;
    // 0x23a1d8: 0x3c013f80
    ctx->pc = 0x23a1d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x23a1dc: 0x44811000
    ctx->pc = 0x23a1dcu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x23a1e0: 0xc6002ac0
    ctx->pc = 0x23a1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a1e4: 0x46800020
    ctx->pc = 0x23a1e4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x23a1e8: 0x46010034
    ctx->pc = 0x23a1e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a1ec: 0x45000008
    ctx->pc = 0x23A1ECu;
    {
        const bool branch_taken_0x23a1ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a1ec) {
            ctx->pc = 0x23A210u;
            goto label_23a210;
        }
    }
    ctx->pc = 0x23A1F4u;
    // 0x23a1f4: 0x46000801
    ctx->pc = 0x23a1f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23a1f8: 0x3c013c23
    ctx->pc = 0x23a1f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x23a1fc: 0x3421d70a
    ctx->pc = 0x23a1fcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x23a200: 0x44810800
    ctx->pc = 0x23a200u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23a204: 0x46010002
    ctx->pc = 0x23a204u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x23a208: 0x1000000d
    ctx->pc = 0x23A208u;
    {
        const bool branch_taken_0x23a208 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A20Cu;
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x23a208) {
            ctx->pc = 0x23A240u;
            goto label_23a240;
        }
    }
    ctx->pc = 0x23A210u;
label_23a210:
    // 0x23a210: 0x46000834
    ctx->pc = 0x23a210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a214: 0x0
    ctx->pc = 0x23a214u;
    // NOP
    // 0x23a218: 0x4502000a
    ctx->pc = 0x23A218u;
    {
        const bool branch_taken_0x23a218 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a218) {
            ctx->pc = 0x23A21Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x23A244u;
            goto label_23a244;
        }
    }
    ctx->pc = 0x23A220u;
    // 0x23a220: 0x46010081
    ctx->pc = 0x23a220u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23a224: 0x3c013dcc
    ctx->pc = 0x23a224u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x23a228: 0x3421cccd
    ctx->pc = 0x23a228u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x23a22c: 0x44810000
    ctx->pc = 0x23a22cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23a230: 0x46001082
    ctx->pc = 0x23a230u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x23a234: 0x3c013f80
    ctx->pc = 0x23a234u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x23a238: 0x44810000
    ctx->pc = 0x23a238u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23a23c: 0x46001080
    ctx->pc = 0x23a23cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_23a240:
    // 0x23a240: 0xc7a00050
    ctx->pc = 0x23a240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a244:
    // 0x23a244: 0x46020002
    ctx->pc = 0x23a244u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x23a248: 0xe7a00050
    ctx->pc = 0x23a248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_23a24c:
    // 0x23a24c: 0x27a40050
    ctx->pc = 0x23a24cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
label_23a250:
    // 0x23a250: 0x27a50054
    ctx->pc = 0x23a250u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 84));
    // 0x23a254: 0x8e4600dc
    ctx->pc = 0x23a254u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x23a258: 0xc0a433a
    ctx->pc = 0x23A258u;
    SET_GPR_U32(ctx, 31, 0x23A260u);
    ctx->pc = 0x23A25Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x290CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ModifyDamage_0x290ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A260u; }
    }
    if (ctx->pc != 0x23A260u) { return; }
    ctx->pc = 0x23A260u;
    // 0x23a260: 0x3c020032
    ctx->pc = 0x23a260u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x23a264: 0xc44107fc
    ctx->pc = 0x23a264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a268: 0x3c013f80
    ctx->pc = 0x23a268u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x23a26c: 0x44810000
    ctx->pc = 0x23a26cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23a270: 0x46000834
    ctx->pc = 0x23a270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a274: 0x0
    ctx->pc = 0x23a274u;
    // NOP
    // 0x23a278: 0x45000003
    ctx->pc = 0x23A278u;
    {
        const bool branch_taken_0x23a278 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23A27Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x23a278) {
            ctx->pc = 0x23A288u;
            goto label_23a288;
        }
    }
    ctx->pc = 0x23A280u;
    // 0x23a280: 0x46000000
    ctx->pc = 0x23a280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x23a284: 0xe7a00050
    ctx->pc = 0x23a284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_23a288:
    // 0x23a288: 0x6200007
    ctx->pc = 0x23A288u;
    {
        const bool branch_taken_0x23a288 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x23A28Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x23a288) {
            ctx->pc = 0x23A2A8u;
            goto label_23a2a8;
        }
    }
    ctx->pc = 0x23A290u;
    // 0x23a290: 0x3c013f80
    ctx->pc = 0x23a290u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x23a294: 0x44810800
    ctx->pc = 0x23a294u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23a298: 0x46010034
    ctx->pc = 0x23a298u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a29c: 0x0
    ctx->pc = 0x23a29cu;
    // NOP
    // 0x23a2a0: 0x45030001
    ctx->pc = 0x23A2A0u;
    {
        const bool branch_taken_0x23a2a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a2a0) {
            ctx->pc = 0x23A2A4u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
            ctx->pc = 0x23A2A8u;
            goto label_23a2a8;
        }
    }
    ctx->pc = 0x23A2A8u;
label_23a2a8:
    // 0x23a2a8: 0xc64002b4
    ctx->pc = 0x23a2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a2ac: 0xc7a10050
    ctx->pc = 0x23a2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a2b0: 0x46010000
    ctx->pc = 0x23a2b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23a2b4: 0xe64002b4
    ctx->pc = 0x23a2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 692), bits); }
    // 0x23a2b8: 0x8fa20054
    ctx->pc = 0x23a2b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x23a2bc: 0x3042000f
    ctx->pc = 0x23a2bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x23a2c0: 0x10400004
    ctx->pc = 0x23A2C0u;
    {
        const bool branch_taken_0x23a2c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A2C4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967280));
        if (branch_taken_0x23a2c0) {
            ctx->pc = 0x23A2D4u;
            goto label_23a2d4;
        }
    }
    ctx->pc = 0x23A2C8u;
    // 0x23a2c8: 0x8e4202b8
    ctx->pc = 0x23a2c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 696)));
    // 0x23a2cc: 0x431024
    ctx->pc = 0x23a2ccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23a2d0: 0xae4202b8
    ctx->pc = 0x23a2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 696), GPR_U32(ctx, 2));
label_23a2d4:
    // 0x23a2d4: 0x8e4202b8
    ctx->pc = 0x23a2d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 696)));
    // 0x23a2d8: 0x8fa30054
    ctx->pc = 0x23a2d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x23a2dc: 0x431025
    ctx->pc = 0x23a2dcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23a2e0: 0x1280000d
    ctx->pc = 0x23A2E0u;
    {
        const bool branch_taken_0x23a2e0 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A2E4u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 696), GPR_U32(ctx, 2));
        if (branch_taken_0x23a2e0) {
            ctx->pc = 0x23A318u;
            goto label_23a318;
        }
    }
    ctx->pc = 0x23A2E8u;
    // 0x23a2e8: 0xc6800000
    ctx->pc = 0x23a2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a2ec: 0xc64102bc
    ctx->pc = 0x23a2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a2f0: 0x46010000
    ctx->pc = 0x23a2f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23a2f4: 0xe64002bc
    ctx->pc = 0x23a2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 700), bits); }
    // 0x23a2f8: 0xc6800004
    ctx->pc = 0x23a2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a2fc: 0xc64102c0
    ctx->pc = 0x23a2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a300: 0x46010000
    ctx->pc = 0x23a300u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23a304: 0xe64002c0
    ctx->pc = 0x23a304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 704), bits); }
    // 0x23a308: 0xc6800008
    ctx->pc = 0x23a308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a30c: 0xc64102c4
    ctx->pc = 0x23a30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a310: 0x46010000
    ctx->pc = 0x23a310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23a314: 0xe64002c4
    ctx->pc = 0x23a314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 708), bits); }
label_23a318:
    // 0x23a318: 0xc6400050
    ctx->pc = 0x23a318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a31c: 0xe7a00000
    ctx->pc = 0x23a31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23a320: 0xc6400054
    ctx->pc = 0x23a320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a324: 0xe7a00004
    ctx->pc = 0x23a324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x23a328: 0xc6400058
    ctx->pc = 0x23a328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a32c: 0xe7a00008
    ctx->pc = 0x23a32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23a330: 0x8e430000
    ctx->pc = 0x23a330u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23a334: 0x2402001d
    ctx->pc = 0x23a334u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
    // 0x23a338: 0x14620014
    ctx->pc = 0x23A338u;
    {
        const bool branch_taken_0x23a338 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x23A33Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x23a338) {
            ctx->pc = 0x23A38Cu;
            goto label_23a38c;
        }
    }
    ctx->pc = 0x23A340u;
    // 0x23a340: 0x3c020031
    ctx->pc = 0x23a340u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x23a344: 0x8c42002c
    ctx->pc = 0x23a344u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x23a348: 0x28420003
    ctx->pc = 0x23a348u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
    // 0x23a34c: 0x14400005
    ctx->pc = 0x23A34Cu;
    {
        const bool branch_taken_0x23a34c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23A350u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x23a34c) {
            ctx->pc = 0x23A364u;
            goto label_23a364;
        }
    }
    ctx->pc = 0x23A354u;
    // 0x23a354: 0x3c013f40
    ctx->pc = 0x23a354u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16192 << 16));
    // 0x23a358: 0x44810800
    ctx->pc = 0x23a358u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23a35c: 0x10000008
    ctx->pc = 0x23A35Cu;
    {
        const bool branch_taken_0x23a35c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A360u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x23a35c) {
            ctx->pc = 0x23A380u;
            goto label_23a380;
        }
    }
    ctx->pc = 0x23A364u;
label_23a364:
    // 0x23a364: 0x8c42002c
    ctx->pc = 0x23a364u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x23a368: 0x28420002
    ctx->pc = 0x23a368u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x23a36c: 0x14400007
    ctx->pc = 0x23A36Cu;
    {
        const bool branch_taken_0x23a36c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23A370u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x23a36c) {
            ctx->pc = 0x23A38Cu;
            goto label_23a38c;
        }
    }
    ctx->pc = 0x23A374u;
    // 0x23a374: 0xc7a00050
    ctx->pc = 0x23a374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a378: 0x3c013f00
    ctx->pc = 0x23a378u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x23a37c: 0x44810800
    ctx->pc = 0x23a37cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_23a380:
    // 0x23a380: 0x46010002
    ctx->pc = 0x23a380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x23a384: 0xe7a00050
    ctx->pc = 0x23a384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x23a388: 0xc7a10050
    ctx->pc = 0x23a388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23a38c:
    // 0x23a38c: 0x44800000
    ctx->pc = 0x23a38cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x23a390: 0x46000836
    ctx->pc = 0x23a390u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a394: 0x0
    ctx->pc = 0x23a394u;
    // NOP
    // 0x23a398: 0x45020003
    ctx->pc = 0x23A398u;
    {
        const bool branch_taken_0x23a398 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a398) {
            ctx->pc = 0x23A39Cu;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 536)));
            ctx->pc = 0x23A3A8u;
            goto label_23a3a8;
        }
    }
    ctx->pc = 0x23A3A0u;
    // 0x23a3a0: 0x10000003
    ctx->pc = 0x23A3A0u;
    {
        const bool branch_taken_0x23a3a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A3A4u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23a3a0) {
            ctx->pc = 0x23A3B0u;
            goto label_23a3b0;
        }
    }
    ctx->pc = 0x23A3A8u;
label_23a3a8:
    // 0x23a3a8: 0x24420001
    ctx->pc = 0x23a3a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23a3ac: 0xa6420218
    ctx->pc = 0x23a3acu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 536), (uint16_t)GPR_U32(ctx, 2));
label_23a3b0:
    // 0x23a3b0: 0x3c020031
    ctx->pc = 0x23a3b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x23a3b4: 0x8c43ffe8
    ctx->pc = 0x23a3b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294967272)));
    // 0x23a3b8: 0x24020003
    ctx->pc = 0x23a3b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x23a3bc: 0x3c01461c
    ctx->pc = 0x23a3bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17948 << 16));
    // 0x23a3c0: 0x34214000
    ctx->pc = 0x23a3c0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 16384));
    // 0x23a3c4: 0x44810000
    ctx->pc = 0x23a3c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23a3c8: 0x10620002
    ctx->pc = 0x23A3C8u;
    {
        const bool branch_taken_0x23a3c8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23A3CCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x23a3c8) {
            ctx->pc = 0x23A3D4u;
            goto label_23a3d4;
        }
    }
    ctx->pc = 0x23A3D0u;
    // 0x23a3d0: 0xc7a00050
    ctx->pc = 0x23a3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a3d4:
    // 0x23a3d4: 0x46006301
    ctx->pc = 0x23a3d4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x23a3d8: 0xe64c0214
    ctx->pc = 0x23a3d8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 532), bits); }
    // 0x23a3dc: 0xc08dfca
    ctx->pc = 0x23A3DCu;
    SET_GPR_U32(ctx, 31, 0x23A3E4u);
    ctx->pc = 0x23A3E0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x237F28u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_enemy_fight_0x237f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A3E4u; }
    }
    if (ctx->pc != 0x23A3E4u) { return; }
    ctx->pc = 0x23A3E4u;
    // 0x23a3e4: 0xe64000d0
    ctx->pc = 0x23a3e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
    // 0x23a3e8: 0x86430324
    ctx->pc = 0x23a3e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 804)));
    // 0x23a3ec: 0x2402000c
    ctx->pc = 0x23a3ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x23a3f0: 0x1462000f
    ctx->pc = 0x23A3F0u;
    {
        const bool branch_taken_0x23a3f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x23A3F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x23a3f0) {
            ctx->pc = 0x23A430u;
            goto label_23a430;
        }
    }
    ctx->pc = 0x23A3F8u;
    // 0x23a3f8: 0x8642032a
    ctx->pc = 0x23a3f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 810)));
    // 0x23a3fc: 0x28420002
    ctx->pc = 0x23a3fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x23a400: 0x1040000b
    ctx->pc = 0x23A400u;
    {
        const bool branch_taken_0x23a400 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A404u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x23a400) {
            ctx->pc = 0x23A430u;
            goto label_23a430;
        }
    }
    ctx->pc = 0x23A408u;
    // 0x23a408: 0x8e4302a4
    ctx->pc = 0x23a408u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 676)));
    // 0x23a40c: 0x10600006
    ctx->pc = 0x23A40Cu;
    {
        const bool branch_taken_0x23a40c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A410u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x23a40c) {
            ctx->pc = 0x23A428u;
            goto label_23a428;
        }
    }
    ctx->pc = 0x23A414u;
    // 0x23a414: 0xa06200fa
    ctx->pc = 0x23a414u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 250), (uint8_t)GPR_U32(ctx, 2));
    // 0x23a418: 0x8e4302a4
    ctx->pc = 0x23a418u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 676)));
    // 0x23a41c: 0x24020003
    ctx->pc = 0x23a41cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x23a420: 0x10000008
    ctx->pc = 0x23A420u;
    {
        const bool branch_taken_0x23a420 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A424u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 244), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x23a420) {
            ctx->pc = 0x23A444u;
            goto label_23a444;
        }
    }
    ctx->pc = 0x23A428u;
label_23a428:
    // 0x23a428: 0x86430324
    ctx->pc = 0x23a428u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 804)));
    // 0x23a42c: 0x2402000f
    ctx->pc = 0x23a42cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
label_23a430:
    // 0x23a430: 0x54620005
    ctx->pc = 0x23A430u;
    {
        const bool branch_taken_0x23a430 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x23a430) {
            ctx->pc = 0x23A434u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x23A448u;
            goto label_23a448;
        }
    }
    ctx->pc = 0x23A438u;
    // 0x23a438: 0x8e4202a4
    ctx->pc = 0x23a438u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 676)));
    // 0x23a43c: 0x54400001
    ctx->pc = 0x23A43Cu;
    {
        const bool branch_taken_0x23a43c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23a43c) {
            ctx->pc = 0x23A440u;
            WRITE8(ADD32(GPR_U32(ctx, 2), 247), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x23A444u;
            goto label_23a444;
        }
    }
    ctx->pc = 0x23A444u;
label_23a444:
    // 0x23a444: 0xc6400214
    ctx->pc = 0x23a444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a448:
    // 0x23a448: 0x44800800
    ctx->pc = 0x23a448u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x23a44c: 0x46010036
    ctx->pc = 0x23a44cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a450: 0x0
    ctx->pc = 0x23a450u;
    // NOP
    // 0x23a454: 0x45000079
    ctx->pc = 0x23A454u;
    {
        const bool branch_taken_0x23a454 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23A458u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x23a454) {
            ctx->pc = 0x23A63Cu;
            goto label_23a63c;
        }
    }
    ctx->pc = 0x23A45Cu;
    // 0x23a45c: 0x8e430000
    ctx->pc = 0x23a45cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23a460: 0x8c42d934
    ctx->pc = 0x23a460u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x23a464: 0x1462000f
    ctx->pc = 0x23A464u;
    {
        const bool branch_taken_0x23a464 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x23a464) {
            ctx->pc = 0x23A4A4u;
            goto label_23a4a4;
        }
    }
    ctx->pc = 0x23A46Cu;
    // 0x23a46c: 0x46140834
    ctx->pc = 0x23a46cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a470: 0x0
    ctx->pc = 0x23a470u;
    // NOP
    // 0x23a474: 0x45000096
    ctx->pc = 0x23A474u;
    {
        const bool branch_taken_0x23a474 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23A478u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x23a474) {
            ctx->pc = 0x23A6D0u;
            goto label_23a6d0;
        }
    }
    ctx->pc = 0x23A47Cu;
label_23a47c:
    // 0x23a47c: 0x1200006d
    ctx->pc = 0x23A47Cu;
    {
        const bool branch_taken_0x23a47c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A480u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
        if (branch_taken_0x23a47c) {
            ctx->pc = 0x23A634u;
            goto label_23a634;
        }
    }
    ctx->pc = 0x23A484u;
    // 0x23a484: 0x8e02000c
    ctx->pc = 0x23a484u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23a488: 0x431018
    ctx->pc = 0x23a488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23a48c: 0x26030b2c
    ctx->pc = 0x23a48cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 2860));
    // 0x23a490: 0x621821
    ctx->pc = 0x23a490u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23a494: 0x8c620000
    ctx->pc = 0x23a494u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23a498: 0x24420001
    ctx->pc = 0x23a498u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23a49c: 0x10000065
    ctx->pc = 0x23A49Cu;
    {
        const bool branch_taken_0x23a49c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A4A0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x23a49c) {
            ctx->pc = 0x23A634u;
            goto label_23a634;
        }
    }
    ctx->pc = 0x23A4A4u;
label_23a4a4:
    // 0x23a4a4: 0x12600009
    ctx->pc = 0x23A4A4u;
    {
        const bool branch_taken_0x23a4a4 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A4A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 18));
        if (branch_taken_0x23a4a4) {
            ctx->pc = 0x23A4CCu;
            goto label_23a4cc;
        }
    }
    ctx->pc = 0x23A4ACu;
    // 0x23a4ac: 0x86430324
    ctx->pc = 0x23a4acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 804)));
    // 0x23a4b0: 0x14620004
    ctx->pc = 0x23A4B0u;
    {
        const bool branch_taken_0x23a4b0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x23A4B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23a4b0) {
            ctx->pc = 0x23A4C4u;
            goto label_23a4c4;
        }
    }
    ctx->pc = 0x23A4B8u;
    // 0x23a4b8: 0xc097f20
    ctx->pc = 0x23A4B8u;
    SET_GPR_U32(ctx, 31, 0x23A4C0u);
    ctx->pc = 0x25FC80u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSuicideYellKill_0x25fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A4C0u; }
    }
    if (ctx->pc != 0x23A4C0u) { return; }
    ctx->pc = 0x23A4C0u;
    // 0x23a4c0: 0x240202d
    ctx->pc = 0x23a4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23a4c4:
    // 0x23a4c4: 0xc097e96
    ctx->pc = 0x23A4C4u;
    SET_GPR_U32(ctx, 31, 0x23A4CCu);
    ctx->pc = 0x23A4C8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25FA58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioEnemyDies_0x25fa58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A4CCu; }
    }
    if (ctx->pc != 0x23A4CCu) { return; }
    ctx->pc = 0x23A4CCu;
label_23a4cc:
    // 0x23a4cc: 0x240202d
    ctx->pc = 0x23a4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a4d0: 0xc08e6d0
    ctx->pc = 0x23A4D0u;
    SET_GPR_U32(ctx, 31, 0x23A4D8u);
    ctx->pc = 0x23A4D4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x239B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        enemy_dies_0x239b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A4D8u; }
    }
    if (ctx->pc != 0x23A4D8u) { return; }
    ctx->pc = 0x23A4D8u;
    // 0x23a4d8: 0x12000008
    ctx->pc = 0x23A4D8u;
    {
        const bool branch_taken_0x23a4d8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A4DCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
        if (branch_taken_0x23a4d8) {
            ctx->pc = 0x23A4FCu;
            goto label_23a4fc;
        }
    }
    ctx->pc = 0x23A4E0u;
    // 0x23a4e0: 0x8e02000c
    ctx->pc = 0x23a4e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23a4e4: 0x431018
    ctx->pc = 0x23a4e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23a4e8: 0x26030b2c
    ctx->pc = 0x23a4e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 2860));
    // 0x23a4ec: 0x621821
    ctx->pc = 0x23a4ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23a4f0: 0x8c620000
    ctx->pc = 0x23a4f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23a4f4: 0x24420001
    ctx->pc = 0x23a4f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23a4f8: 0xac620000
    ctx->pc = 0x23a4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_23a4fc:
    // 0x23a4fc: 0x2a22ffff
    ctx->pc = 0x23a4fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4294967295));
    // 0x23a500: 0x14400073
    ctx->pc = 0x23A500u;
    {
        const bool branch_taken_0x23a500 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23A504u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x23a500) {
            ctx->pc = 0x23A6D0u;
            goto label_23a6d0;
        }
    }
    ctx->pc = 0x23A508u;
    // 0x23a508: 0x8e420070
    ctx->pc = 0x23a508u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x23a50c: 0x1040003b
    ctx->pc = 0x23A50Cu;
    {
        const bool branch_taken_0x23a50c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A510u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
        if (branch_taken_0x23a50c) {
            ctx->pc = 0x23A5FCu;
            goto label_23a5fc;
        }
    }
    ctx->pc = 0x23A514u;
    // 0x23a514: 0x8e430000
    ctx->pc = 0x23a514u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23a518: 0x1462000a
    ctx->pc = 0x23A518u;
    {
        const bool branch_taken_0x23a518 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x23A51Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
        if (branch_taken_0x23a518) {
            ctx->pc = 0x23A544u;
            goto label_23a544;
        }
    }
    ctx->pc = 0x23A520u;
    // 0x23a520: 0x8fa20054
    ctx->pc = 0x23a520u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x23a524: 0x3042000f
    ctx->pc = 0x23a524u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x23a528: 0x14400006
    ctx->pc = 0x23A528u;
    {
        const bool branch_taken_0x23a528 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23A52Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
        if (branch_taken_0x23a528) {
            ctx->pc = 0x23A544u;
            goto label_23a544;
        }
    }
    ctx->pc = 0x23A530u;
    // 0x23a530: 0x3c020034
    ctx->pc = 0x23a530u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x23a534: 0x264401f8
    ctx->pc = 0x23a534u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 504));
    // 0x23a538: 0x8c45551c
    ctx->pc = 0x23a538u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 21788)));
    // 0x23a53c: 0x10000013
    ctx->pc = 0x23A53Cu;
    {
        const bool branch_taken_0x23a53c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A540u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x23a53c) {
            ctx->pc = 0x23A58Cu;
            goto label_23a58c;
        }
    }
    ctx->pc = 0x23A544u;
label_23a544:
    // 0x23a544: 0x54620006
    ctx->pc = 0x23A544u;
    {
        const bool branch_taken_0x23a544 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x23a544) {
            ctx->pc = 0x23A548u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x23A560u;
            goto label_23a560;
        }
    }
    ctx->pc = 0x23A54Cu;
    // 0x23a54c: 0x8fa20054
    ctx->pc = 0x23a54cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x23a550: 0x3042000f
    ctx->pc = 0x23a550u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x23a554: 0x1040000a
    ctx->pc = 0x23A554u;
    {
        const bool branch_taken_0x23a554 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A558u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x23a554) {
            ctx->pc = 0x23A580u;
            goto label_23a580;
        }
    }
    ctx->pc = 0x23A55Cu;
    // 0x23a55c: 0x8e430000
    ctx->pc = 0x23a55cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_23a560:
    // 0x23a560: 0x24020005
    ctx->pc = 0x23a560u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x23a564: 0x5462000f
    ctx->pc = 0x23A564u;
    {
        const bool branch_taken_0x23a564 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x23a564) {
            ctx->pc = 0x23A568u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x23A5A4u;
            goto label_23a5a4;
        }
    }
    ctx->pc = 0x23A56Cu;
    // 0x23a56c: 0x8fa20054
    ctx->pc = 0x23a56cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x23a570: 0x3042000f
    ctx->pc = 0x23a570u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x23a574: 0x5440000b
    ctx->pc = 0x23A574u;
    {
        const bool branch_taken_0x23a574 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23a574) {
            ctx->pc = 0x23A578u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x23A5A4u;
            goto label_23a5a4;
        }
    }
    ctx->pc = 0x23A57Cu;
    // 0x23a57c: 0x3c020034
    ctx->pc = 0x23a57cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_23a580:
    // 0x23a580: 0x264401f8
    ctx->pc = 0x23a580u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 504));
    // 0x23a584: 0x8c455520
    ctx->pc = 0x23a584u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 21792)));
    // 0x23a588: 0x2406000a
    ctx->pc = 0x23a588u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_23a58c:
    // 0x23a58c: 0x3c013f00
    ctx->pc = 0x23a58cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x23a590: 0x44816000
    ctx->pc = 0x23a590u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x23a594: 0xc09ffc6
    ctx->pc = 0x23A594u;
    SET_GPR_U32(ctx, 31, 0x23A59Cu);
    ctx->pc = 0x23A598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27FF18u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetSkinFX_0x27ff18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A59Cu; }
    }
    if (ctx->pc != 0x23A59Cu) { return; }
    ctx->pc = 0x23A59Cu;
    // 0x23a59c: 0x10000014
    ctx->pc = 0x23A59Cu;
    {
        const bool branch_taken_0x23a59c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A5A0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 112)));
        if (branch_taken_0x23a59c) {
            ctx->pc = 0x23A5F0u;
            goto label_23a5f0;
        }
    }
    ctx->pc = 0x23A5A4u;
label_23a5a4:
    // 0x23a5a4: 0x3c014000
    ctx->pc = 0x23a5a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x23a5a8: 0x44810000
    ctx->pc = 0x23a5a8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23a5ac: 0x46010034
    ctx->pc = 0x23a5acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a5b0: 0x0
    ctx->pc = 0x23a5b0u;
    // NOP
    // 0x23a5b4: 0x4500000d
    ctx->pc = 0x23A5B4u;
    {
        const bool branch_taken_0x23a5b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23A5B8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x23a5b4) {
            ctx->pc = 0x23A5ECu;
            goto label_23a5ec;
        }
    }
    ctx->pc = 0x23A5BCu;
    // 0x23a5bc: 0x24635500
    ctx->pc = 0x23a5bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 21760));
    // 0x23a5c0: 0x8fa20054
    ctx->pc = 0x23a5c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x23a5c4: 0x3042000f
    ctx->pc = 0x23a5c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x23a5c8: 0x21080
    ctx->pc = 0x23a5c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x23a5cc: 0x431021
    ctx->pc = 0x23a5ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23a5d0: 0x264401f8
    ctx->pc = 0x23a5d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 504));
    // 0x23a5d4: 0x8c450000
    ctx->pc = 0x23a5d4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23a5d8: 0x2406000a
    ctx->pc = 0x23a5d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    // 0x23a5dc: 0x3c013f00
    ctx->pc = 0x23a5dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x23a5e0: 0x44816000
    ctx->pc = 0x23a5e0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x23a5e4: 0xc09ffc6
    ctx->pc = 0x23A5E4u;
    SET_GPR_U32(ctx, 31, 0x23A5ECu);
    ctx->pc = 0x23A5E8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27FF18u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetSkinFX_0x27ff18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A5ECu; }
    }
    if (ctx->pc != 0x23A5ECu) { return; }
    ctx->pc = 0x23A5ECu;
label_23a5ec:
    // 0x23a5ec: 0x8e440070
    ctx->pc = 0x23a5ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_23a5f0:
    // 0x23a5f0: 0x240503e7
    ctx->pc = 0x23a5f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 999));
    // 0x23a5f4: 0xc0b4156
    ctx->pc = 0x23A5F4u;
    SET_GPR_U32(ctx, 31, 0x23A5FCu);
    ctx->pc = 0x23A5F8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0558u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAmbientAdd_0x2d0558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A5FCu; }
    }
    if (ctx->pc != 0x23A5FCu) { return; }
    ctx->pc = 0x23A5FCu;
label_23a5fc:
    // 0x23a5fc: 0x8fa60054
    ctx->pc = 0x23a5fcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x23a600: 0x3c020100
    ctx->pc = 0x23a600u;
    SET_GPR_U32(ctx, 2, ((uint32_t)256 << 16));
    // 0x23a604: 0xc21024
    ctx->pc = 0x23a604u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x23a608: 0x14400031
    ctx->pc = 0x23A608u;
    {
        const bool branch_taken_0x23a608 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23A60Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x23a608) {
            ctx->pc = 0x23A6D0u;
            goto label_23a6d0;
        }
    }
    ctx->pc = 0x23A610u;
    // 0x23a610: 0x3c020036
    ctx->pc = 0x23a610u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x23a614: 0x8e480000
    ctx->pc = 0x23a614u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23a618: 0x8c42d934
    ctx->pc = 0x23a618u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x23a61c: 0x11020005
    ctx->pc = 0x23A61Cu;
    {
        const bool branch_taken_0x23a61c = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        ctx->pc = 0x23A620u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23a61c) {
            ctx->pc = 0x23A634u;
            goto label_23a634;
        }
    }
    ctx->pc = 0x23A624u;
    // 0x23a624: 0x26450010
    ctx->pc = 0x23a624u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 16));
    // 0x23a628: 0x24070001
    ctx->pc = 0x23a628u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a62c: 0xc09f65e
    ctx->pc = 0x23A62Cu;
    SET_GPR_U32(ctx, 31, 0x23A634u);
    ctx->pc = 0x23A630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x27D978u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddEnemyHitCol_0x27d978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A634u; }
    }
    if (ctx->pc != 0x23A634u) { return; }
    ctx->pc = 0x23A634u;
label_23a634:
    // 0x23a634: 0x10000026
    ctx->pc = 0x23A634u;
    {
        const bool branch_taken_0x23a634 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A638u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x23a634) {
            ctx->pc = 0x23A6D0u;
            goto label_23a6d0;
        }
    }
    ctx->pc = 0x23A63Cu;
label_23a63c:
    // 0x23a63c: 0x12600003
    ctx->pc = 0x23A63Cu;
    {
        const bool branch_taken_0x23a63c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A640u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23a63c) {
            ctx->pc = 0x23A64Cu;
            goto label_23a64c;
        }
    }
    ctx->pc = 0x23A644u;
    // 0x23a644: 0xc097ec4
    ctx->pc = 0x23A644u;
    SET_GPR_U32(ctx, 31, 0x23A64Cu);
    ctx->pc = 0x23A648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25FB10u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioEnemyHurt_0x25fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A64Cu; }
    }
    if (ctx->pc != 0x23A64Cu) { return; }
    ctx->pc = 0x23A64Cu;
label_23a64c:
    // 0x23a64c: 0x8fa20054
    ctx->pc = 0x23a64cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x23a650: 0x3c030100
    ctx->pc = 0x23a650u;
    SET_GPR_U32(ctx, 3, ((uint32_t)256 << 16));
    // 0x23a654: 0x431024
    ctx->pc = 0x23a654u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23a658: 0x1440001d
    ctx->pc = 0x23A658u;
    {
        const bool branch_taken_0x23a658 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23A65Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23a658) {
            ctx->pc = 0x23A6D0u;
            goto label_23a6d0;
        }
    }
    ctx->pc = 0x23A660u;
    // 0x23a660: 0x3c020036
    ctx->pc = 0x23a660u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x23a664: 0x8e430000
    ctx->pc = 0x23a664u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23a668: 0x8c42d934
    ctx->pc = 0x23a668u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x23a66c: 0x50620018
    ctx->pc = 0x23A66Cu;
    {
        const bool branch_taken_0x23a66c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x23a66c) {
            ctx->pc = 0x23A670u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x23A6D0u;
            goto label_23a6d0;
        }
    }
    ctx->pc = 0x23A674u;
    // 0x23a674: 0x12a0000f
    ctx->pc = 0x23A674u;
    {
        const bool branch_taken_0x23a674 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x23A678u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23a674) {
            ctx->pc = 0x23A6B4u;
            goto label_23a6b4;
        }
    }
    ctx->pc = 0x23A67Cu;
    // 0x23a67c: 0xc6410250
    ctx->pc = 0x23a67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a680: 0x3c014080
    ctx->pc = 0x23a680u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x23a684: 0x44810000
    ctx->pc = 0x23a684u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23a688: 0x46010036
    ctx->pc = 0x23a688u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a68c: 0x0
    ctx->pc = 0x23a68cu;
    // NOP
    // 0x23a690: 0x45000009
    ctx->pc = 0x23A690u;
    {
        const bool branch_taken_0x23a690 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23A694u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 16));
        if (branch_taken_0x23a690) {
            ctx->pc = 0x23A6B8u;
            goto label_23a6b8;
        }
    }
    ctx->pc = 0x23A698u;
    // 0x23a698: 0xc6a00000
    ctx->pc = 0x23a698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a69c: 0xe7a00000
    ctx->pc = 0x23a69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23a6a0: 0xc6a00004
    ctx->pc = 0x23a6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a6a4: 0xe7a00004
    ctx->pc = 0x23a6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x23a6a8: 0xc6a00008
    ctx->pc = 0x23a6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a6ac: 0xe7a00008
    ctx->pc = 0x23a6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23a6b0: 0x3a0202d
    ctx->pc = 0x23a6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23a6b4:
    // 0x23a6b4: 0x26450010
    ctx->pc = 0x23a6b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 16));
label_23a6b8:
    // 0x23a6b8: 0x8fa60054
    ctx->pc = 0x23a6b8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x23a6bc: 0x382d
    ctx->pc = 0x23a6bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a6c0: 0x8e480000
    ctx->pc = 0x23a6c0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23a6c4: 0xc09f65e
    ctx->pc = 0x23A6C4u;
    SET_GPR_U32(ctx, 31, 0x23A6CCu);
    ctx->pc = 0x23A6C8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x27D978u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddEnemyHitCol_0x27d978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A6CCu; }
    }
    if (ctx->pc != 0x23A6CCu) { return; }
    ctx->pc = 0x23A6CCu;
    // 0x23a6cc: 0x102d
    ctx->pc = 0x23a6ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a6d0:
    // 0x23a6d0: 0xdfbf00c0
    ctx->pc = 0x23a6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23a6d4: 0xdfb500b0
    ctx->pc = 0x23a6d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23a6d8: 0xdfb400a0
    ctx->pc = 0x23a6d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23a6dc: 0xdfb30090
    ctx->pc = 0x23a6dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23a6e0: 0xdfb20080
    ctx->pc = 0x23a6e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23a6e4: 0xdfb10070
    ctx->pc = 0x23a6e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23a6e8: 0xdfb00060
    ctx->pc = 0x23a6e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23a6ec: 0xc7b400d0
    ctx->pc = 0x23a6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23a6f0: 0x3e00008
    ctx->pc = 0x23A6F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A6F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239F60u: goto label_239f60;
            case 0x239F68u: goto label_239f68;
            case 0x239F80u: goto label_239f80;
            case 0x239F90u: goto label_239f90;
            case 0x23A00Cu: goto label_23a00c;
            case 0x23A030u: goto label_23a030;
            case 0x23A058u: goto label_23a058;
            case 0x23A0B8u: goto label_23a0b8;
            case 0x23A108u: goto label_23a108;
            case 0x23A114u: goto label_23a114;
            case 0x23A13Cu: goto label_23a13c;
            case 0x23A140u: goto label_23a140;
            case 0x23A168u: goto label_23a168;
            case 0x23A178u: goto label_23a178;
            case 0x23A1A8u: goto label_23a1a8;
            case 0x23A1B4u: goto label_23a1b4;
            case 0x23A210u: goto label_23a210;
            case 0x23A240u: goto label_23a240;
            case 0x23A244u: goto label_23a244;
            case 0x23A24Cu: goto label_23a24c;
            case 0x23A250u: goto label_23a250;
            case 0x23A288u: goto label_23a288;
            case 0x23A2A8u: goto label_23a2a8;
            case 0x23A2D4u: goto label_23a2d4;
            case 0x23A318u: goto label_23a318;
            case 0x23A364u: goto label_23a364;
            case 0x23A380u: goto label_23a380;
            case 0x23A38Cu: goto label_23a38c;
            case 0x23A3A8u: goto label_23a3a8;
            case 0x23A3B0u: goto label_23a3b0;
            case 0x23A3D4u: goto label_23a3d4;
            case 0x23A428u: goto label_23a428;
            case 0x23A430u: goto label_23a430;
            case 0x23A444u: goto label_23a444;
            case 0x23A448u: goto label_23a448;
            case 0x23A47Cu: goto label_23a47c;
            case 0x23A4A4u: goto label_23a4a4;
            case 0x23A4C4u: goto label_23a4c4;
            case 0x23A4CCu: goto label_23a4cc;
            case 0x23A4FCu: goto label_23a4fc;
            case 0x23A544u: goto label_23a544;
            case 0x23A560u: goto label_23a560;
            case 0x23A580u: goto label_23a580;
            case 0x23A58Cu: goto label_23a58c;
            case 0x23A5A4u: goto label_23a5a4;
            case 0x23A5ECu: goto label_23a5ec;
            case 0x23A5F0u: goto label_23a5f0;
            case 0x23A5FCu: goto label_23a5fc;
            case 0x23A634u: goto label_23a634;
            case 0x23A63Cu: goto label_23a63c;
            case 0x23A64Cu: goto label_23a64c;
            case 0x23A6B4u: goto label_23a6b4;
            case 0x23A6B8u: goto label_23a6b8;
            case 0x23A6D0u: goto label_23a6d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23A6F8u;
}
