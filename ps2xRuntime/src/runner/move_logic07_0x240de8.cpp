#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic07
// Address: 0x240de8 - 0x241194
void move_logic07_0x240de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x240de8u;

    // 0x240de8: 0x27bdff90
    ctx->pc = 0x240de8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x240dec: 0xffbf0050
    ctx->pc = 0x240decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x240df0: 0xffb30040
    ctx->pc = 0x240df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x240df4: 0xffb20030
    ctx->pc = 0x240df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x240df8: 0xffb10020
    ctx->pc = 0x240df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x240dfc: 0xffb00010
    ctx->pc = 0x240dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x240e00: 0xe7b50068
    ctx->pc = 0x240e00u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x240e04: 0xe7b40060
    ctx->pc = 0x240e04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x240e08: 0x80902d
    ctx->pc = 0x240e08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240e0c: 0x240303b0
    ctx->pc = 0x240e0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x240e10: 0x2431818
    ctx->pc = 0x240e10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x240e14: 0x3c020033
    ctx->pc = 0x240e14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x240e18: 0x2442dfd0
    ctx->pc = 0x240e18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x240e1c: 0x628021
    ctx->pc = 0x240e1cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240e20: 0x982d
    ctx->pc = 0x240e20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240e24: 0x3c03003c
    ctx->pc = 0x240e24u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x240e28: 0x24631bb8
    ctx->pc = 0x240e28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7096));
    // 0x240e2c: 0x8e020000
    ctx->pc = 0x240e2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x240e30: 0x21080
    ctx->pc = 0x240e30u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x240e34: 0x431021
    ctx->pc = 0x240e34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x240e38: 0xc08ed18
    ctx->pc = 0x240E38u;
    SET_GPR_U32(ctx, 31, 0x240E40u);
    ctx->pc = 0x240E3Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->pc = 0x23B460u;
    {
        const uint32_t __entryPc = ctx->pc;
        FoundSuicideBomber_0x23b460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240E40u; }
    }
    if (ctx->pc != 0x240E40u) { return; }
    ctx->pc = 0x240E40u;
    // 0x240e40: 0x14400008
    ctx->pc = 0x240E40u;
    {
        const bool branch_taken_0x240e40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x240E44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
        if (branch_taken_0x240e40) {
            ctx->pc = 0x240E64u;
            goto label_240e64;
        }
    }
    ctx->pc = 0x240E48u;
    // 0x240e48: 0x860202f2
    ctx->pc = 0x240e48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 754)));
    // 0x240e4c: 0x10400004
    ctx->pc = 0x240E4Cu;
    {
        const bool branch_taken_0x240e4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x240E50u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x240e4c) {
            ctx->pc = 0x240E60u;
            goto label_240e60;
        }
    }
    ctx->pc = 0x240E54u;
    // 0x240e54: 0x86020288
    ctx->pc = 0x240e54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x240e58: 0x4410007
    ctx->pc = 0x240E58u;
    {
        const bool branch_taken_0x240e58 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x240E5Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x240e58) {
            ctx->pc = 0x240E78u;
            goto label_240e78;
        }
    }
    ctx->pc = 0x240E60u;
label_240e60:
    // 0x240e60: 0x24420005
    ctx->pc = 0x240e60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5));
label_240e64:
    // 0x240e64: 0xa6020324
    ctx->pc = 0x240e64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x240e68: 0xc09095a
    ctx->pc = 0x240E68u;
    SET_GPR_U32(ctx, 31, 0x240E70u);
    ctx->pc = 0x240E6Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x242568u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_ai_0x242568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240E70u; }
    }
    if (ctx->pc != 0x240E70u) { return; }
    ctx->pc = 0x240E70u;
    // 0x240e70: 0x100000c0
    ctx->pc = 0x240E70u;
    {
        const bool branch_taken_0x240e70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x240E74u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x240e70) {
            ctx->pc = 0x241174u;
            goto label_241174;
        }
    }
    ctx->pc = 0x240E78u;
label_240e78:
    // 0x240e78: 0x40034800
    ctx->pc = 0x240e78u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x240e7c: 0x3c02003a
    ctx->pc = 0x240e7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x240e80: 0x8c4221d0
    ctx->pc = 0x240e80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x240e84: 0xac4301d8
    ctx->pc = 0x240e84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 472), GPR_U32(ctx, 3));
    // 0x240e88: 0x86030324
    ctx->pc = 0x240e88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x240e8c: 0x86020328
    ctx->pc = 0x240e8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x240e90: 0x10620004
    ctx->pc = 0x240E90u;
    {
        const bool branch_taken_0x240e90 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x240E94u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x240e90) {
            ctx->pc = 0x240EA4u;
            goto label_240ea4;
        }
    }
    ctx->pc = 0x240E98u;
    // 0x240e98: 0xc08e210
    ctx->pc = 0x240E98u;
    SET_GPR_U32(ctx, 31, 0x240EA0u);
    ctx->pc = 0x240E9Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240EA0u; }
    }
    if (ctx->pc != 0x240EA0u) { return; }
    ctx->pc = 0x240EA0u;
    // 0x240ea0: 0x200202d
    ctx->pc = 0x240ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_240ea4:
    // 0x240ea4: 0xc08f0f0
    ctx->pc = 0x240EA4u;
    SET_GPR_U32(ctx, 31, 0x240EACu);
    ctx->pc = 0x240EA8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x23C3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_face_ang_0x23c3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240EACu; }
    }
    if (ctx->pc != 0x240EACu) { return; }
    ctx->pc = 0x240EACu;
    // 0x240eac: 0x3c02003c
    ctx->pc = 0x240eacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x240eb0: 0xe4401c6c
    ctx->pc = 0x240eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7276), bits); }
    // 0x240eb4: 0x8e03036c
    ctx->pc = 0x240eb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x240eb8: 0x18600005
    ctx->pc = 0x240EB8u;
    {
        const bool branch_taken_0x240eb8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x240EBCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x240eb8) {
            ctx->pc = 0x240ED0u;
            goto label_240ed0;
        }
    }
    ctx->pc = 0x240EC0u;
    // 0x240ec0: 0x8c42ffbc
    ctx->pc = 0x240ec0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x240ec4: 0x621023
    ctx->pc = 0x240ec4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240ec8: 0x1c400083
    ctx->pc = 0x240EC8u;
    {
        const bool branch_taken_0x240ec8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x240ECCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 2));
        if (branch_taken_0x240ec8) {
            ctx->pc = 0x2410D8u;
            goto label_2410d8;
        }
    }
    ctx->pc = 0x240ED0u;
label_240ed0:
    // 0x240ed0: 0x8e020298
    ctx->pc = 0x240ed0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x240ed4: 0x4410029
    ctx->pc = 0x240ED4u;
    {
        const bool branch_taken_0x240ed4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x240ED8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x240ed4) {
            ctx->pc = 0x240F7Cu;
            goto label_240f7c;
        }
    }
    ctx->pc = 0x240EDCu;
    // 0x240edc: 0x86030212
    ctx->pc = 0x240edcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 530)));
    // 0x240ee0: 0x24020001
    ctx->pc = 0x240ee0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x240ee4: 0x5462000e
    ctx->pc = 0x240EE4u;
    {
        const bool branch_taken_0x240ee4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x240ee4) {
            ctx->pc = 0x240EE8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 672)));
            ctx->pc = 0x240F20u;
            goto label_240f20;
        }
    }
    ctx->pc = 0x240EECu;
    // 0x240eec: 0x3c02003c
    ctx->pc = 0x240eecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x240ef0: 0xc4541c6c
    ctx->pc = 0x240ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x240ef4: 0x8e020368
    ctx->pc = 0x240ef4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x240ef8: 0x14400005
    ctx->pc = 0x240EF8u;
    {
        const bool branch_taken_0x240ef8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x240EFCu;
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
        if (branch_taken_0x240ef8) {
            ctx->pc = 0x240F10u;
            goto label_240f10;
        }
    }
    ctx->pc = 0x240F00u;
    // 0x240f00: 0xc08efec
    ctx->pc = 0x240F00u;
    SET_GPR_U32(ctx, 31, 0x240F08u);
    ctx->pc = 0x240F04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23BFB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_turn_dir_0x23bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240F08u; }
    }
    if (ctx->pc != 0x240F08u) { return; }
    ctx->pc = 0x240F08u;
    // 0x240f08: 0xae020368
    ctx->pc = 0x240f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
    // 0x240f0c: 0x8e020368
    ctx->pc = 0x240f0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
label_240f10:
    // 0x240f10: 0x1c40000d
    ctx->pc = 0x240F10u;
    {
        const bool branch_taken_0x240f10 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x240F14u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x240f10) {
            ctx->pc = 0x240F48u;
            goto label_240f48;
        }
    }
    ctx->pc = 0x240F18u;
    // 0x240f18: 0x10000013
    ctx->pc = 0x240F18u;
    {
        const bool branch_taken_0x240f18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x240F1Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958976));
        if (branch_taken_0x240f18) {
            ctx->pc = 0x240F68u;
            goto label_240f68;
        }
    }
    ctx->pc = 0x240F20u;
label_240f20:
    // 0x240f20: 0x54400005
    ctx->pc = 0x240F20u;
    {
        const bool branch_taken_0x240f20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x240f20) {
            ctx->pc = 0x240F24u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->pc = 0x240F38u;
            goto label_240f38;
        }
    }
    ctx->pc = 0x240F28u;
    // 0x240f28: 0x8e02029c
    ctx->pc = 0x240f28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 668)));
    // 0x240f2c: 0x4400013
    ctx->pc = 0x240F2Cu;
    {
        const bool branch_taken_0x240f2c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x240F30u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x240f2c) {
            ctx->pc = 0x240F7Cu;
            goto label_240f7c;
        }
    }
    ctx->pc = 0x240F34u;
    // 0x240f34: 0xc6140260
    ctx->pc = 0x240f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_240f38:
    // 0x240f38: 0x8e020368
    ctx->pc = 0x240f38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x240f3c: 0x18400008
    ctx->pc = 0x240F3Cu;
    {
        const bool branch_taken_0x240f3c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x240F40u;
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
        if (branch_taken_0x240f3c) {
            ctx->pc = 0x240F60u;
            goto label_240f60;
        }
    }
    ctx->pc = 0x240F44u;
    // 0x240f44: 0x3c020033
    ctx->pc = 0x240f44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_240f48:
    // 0x240f48: 0x2442df80
    ctx->pc = 0x240f48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958976));
    // 0x240f4c: 0x111880
    ctx->pc = 0x240f4cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x240f50: 0x621821
    ctx->pc = 0x240f50u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240f54: 0xc4600000
    ctx->pc = 0x240f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240f58: 0x10000009
    ctx->pc = 0x240F58u;
    {
        const bool branch_taken_0x240f58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x240F5Cu;
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x240f58) {
            ctx->pc = 0x240F80u;
            goto label_240f80;
        }
    }
    ctx->pc = 0x240F60u;
label_240f60:
    // 0x240f60: 0x3c020033
    ctx->pc = 0x240f60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x240f64: 0x2442df80
    ctx->pc = 0x240f64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958976));
label_240f68:
    // 0x240f68: 0x111880
    ctx->pc = 0x240f68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x240f6c: 0x621821
    ctx->pc = 0x240f6cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240f70: 0xc4600000
    ctx->pc = 0x240f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240f74: 0x10000002
    ctx->pc = 0x240F74u;
    {
        const bool branch_taken_0x240f74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x240F78u;
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x240f74) {
            ctx->pc = 0x240F80u;
            goto label_240f80;
        }
    }
    ctx->pc = 0x240F7Cu;
label_240f7c:
    // 0x240f7c: 0xc4541c6c
    ctx->pc = 0x240f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_240f80:
    // 0x240f80: 0x3c014049
    ctx->pc = 0x240f80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x240f84: 0x34210fdb
    ctx->pc = 0x240f84u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x240f88: 0x44810000
    ctx->pc = 0x240f88u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x240f8c: 0x46140034
    ctx->pc = 0x240f8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x240f90: 0x45000006
    ctx->pc = 0x240F90u;
    {
        const bool branch_taken_0x240f90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x240f90) {
            ctx->pc = 0x240FACu;
            goto label_240fac;
        }
    }
    ctx->pc = 0x240F98u;
    // 0x240f98: 0x3c0140c9
    ctx->pc = 0x240f98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x240f9c: 0x34210fdb
    ctx->pc = 0x240f9cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x240fa0: 0x44810000
    ctx->pc = 0x240fa0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x240fa4: 0x1000000c
    ctx->pc = 0x240FA4u;
    {
        const bool branch_taken_0x240fa4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x240FA8u;
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x240fa4) {
            ctx->pc = 0x240FD8u;
            goto label_240fd8;
        }
    }
    ctx->pc = 0x240FACu;
label_240fac:
    // 0x240fac: 0x3c01c049
    ctx->pc = 0x240facu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x240fb0: 0x34210fdb
    ctx->pc = 0x240fb0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x240fb4: 0x44810000
    ctx->pc = 0x240fb4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x240fb8: 0x4600a036
    ctx->pc = 0x240fb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x240fbc: 0x0
    ctx->pc = 0x240fbcu;
    // NOP
    // 0x240fc0: 0x45020005
    ctx->pc = 0x240FC0u;
    {
        const bool branch_taken_0x240fc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x240fc0) {
            ctx->pc = 0x240FC4u;
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->pc = 0x240FD8u;
            goto label_240fd8;
        }
    }
    ctx->pc = 0x240FC8u;
    // 0x240fc8: 0x3c0140c9
    ctx->pc = 0x240fc8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x240fcc: 0x34210fdb
    ctx->pc = 0x240fccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x240fd0: 0x44810000
    ctx->pc = 0x240fd0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x240fd4: 0x4600a000
    ctx->pc = 0x240fd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_240fd8:
    // 0x240fd8: 0x46000506
    ctx->pc = 0x240fd8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x240fdc: 0xc6000040
    ctx->pc = 0x240fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240fe0: 0xe7a00000
    ctx->pc = 0x240fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x240fe4: 0xc6020044
    ctx->pc = 0x240fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x240fe8: 0xc6000048
    ctx->pc = 0x240fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240fec: 0xe7a00008
    ctx->pc = 0x240fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x240ff0: 0xc600024c
    ctx->pc = 0x240ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240ff4: 0x3c013dcc
    ctx->pc = 0x240ff4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x240ff8: 0x3421cccd
    ctx->pc = 0x240ff8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x240ffc: 0x44810800
    ctx->pc = 0x240ffcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x241000: 0x46010000
    ctx->pc = 0x241000u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x241004: 0x46020000
    ctx->pc = 0x241004u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x241008: 0xe7a00004
    ctx->pc = 0x241008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24100c: 0xc0b9e4a
    ctx->pc = 0x24100Cu;
    SET_GPR_U32(ctx, 31, 0x241014u);
    ctx->pc = 0x241010u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241014u; }
    }
    if (ctx->pc != 0x241014u) { return; }
    ctx->pc = 0x241014u;
    // 0x241014: 0x46150002
    ctx->pc = 0x241014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x241018: 0xc7a10000
    ctx->pc = 0x241018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24101c: 0x46010000
    ctx->pc = 0x24101cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x241020: 0xe7a00000
    ctx->pc = 0x241020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x241024: 0xc0b9dce
    ctx->pc = 0x241024u;
    SET_GPR_U32(ctx, 31, 0x24102Cu);
    ctx->pc = 0x241028u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24102Cu; }
    }
    if (ctx->pc != 0x24102Cu) { return; }
    ctx->pc = 0x24102Cu;
    // 0x24102c: 0x46150002
    ctx->pc = 0x24102cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x241030: 0xc7a10008
    ctx->pc = 0x241030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241034: 0x46010000
    ctx->pc = 0x241034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x241038: 0xe7a00008
    ctx->pc = 0x241038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x24103c: 0xc6000260
    ctx->pc = 0x24103cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241040: 0xc6010264
    ctx->pc = 0x241040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241044: 0x46010001
    ctx->pc = 0x241044u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x241048: 0x46000005
    ctx->pc = 0x241048u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x24104c: 0x3c013d0e
    ctx->pc = 0x24104cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15630 << 16));
    // 0x241050: 0x3421fa36
    ctx->pc = 0x241050u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 64054));
    // 0x241054: 0x44811000
    ctx->pc = 0x241054u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x241058: 0x46001034
    ctx->pc = 0x241058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24105c: 0x0
    ctx->pc = 0x24105cu;
    // NOP
    // 0x241060: 0x45000008
    ctx->pc = 0x241060u;
    {
        const bool branch_taken_0x241060 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x241064u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x241060) {
            ctx->pc = 0x241084u;
            goto label_241084;
        }
    }
    ctx->pc = 0x241068u;
    // 0x241068: 0x4601a001
    ctx->pc = 0x241068u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x24106c: 0x46000005
    ctx->pc = 0x24106cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x241070: 0x46020036
    ctx->pc = 0x241070u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x241074: 0x0
    ctx->pc = 0x241074u;
    // NOP
    // 0x241078: 0x45030007
    ctx->pc = 0x241078u;
    {
        const bool branch_taken_0x241078 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x241078) {
            ctx->pc = 0x24107Cu;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x241098u;
            goto label_241098;
        }
    }
    ctx->pc = 0x241080u;
    // 0x241080: 0x3a0202d
    ctx->pc = 0x241080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_241084:
    // 0x241084: 0xc08f296
    ctx->pc = 0x241084u;
    SET_GPR_U32(ctx, 31, 0x24108Cu);
    ctx->pc = 0x241088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23CA58u;
    {
        const uint32_t __entryPc = ctx->pc;
        check_vacancy_0x23ca58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24108Cu; }
    }
    if (ctx->pc != 0x24108Cu) { return; }
    ctx->pc = 0x24108Cu;
    // 0x24108c: 0x54400005
    ctx->pc = 0x24108Cu;
    {
        const bool branch_taken_0x24108c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x24108c) {
            ctx->pc = 0x241090u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 890), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x2410A4u;
            goto label_2410a4;
        }
    }
    ctx->pc = 0x241094u;
    // 0x241094: 0x24130001
    ctx->pc = 0x241094u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
label_241098:
    // 0x241098: 0x9602037a
    ctx->pc = 0x241098u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 890)));
    // 0x24109c: 0x24420001
    ctx->pc = 0x24109cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2410a0: 0xa602037a
    ctx->pc = 0x2410a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 890), (uint16_t)GPR_U32(ctx, 2));
label_2410a4:
    // 0x2410a4: 0x8602037a
    ctx->pc = 0x2410a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 890)));
    // 0x2410a8: 0x2842000b
    ctx->pc = 0x2410a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 11));
    // 0x2410ac: 0x14400004
    ctx->pc = 0x2410ACu;
    {
        const bool branch_taken_0x2410ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2410B0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2410ac) {
            ctx->pc = 0x2410C0u;
            goto label_2410c0;
        }
    }
    ctx->pc = 0x2410B4u;
    // 0x2410b4: 0xc4401c6c
    ctx->pc = 0x2410b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2410b8: 0xe6000260
    ctx->pc = 0x2410b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x2410bc: 0x46000506
    ctx->pc = 0x2410bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2410c0:
    // 0x2410c0: 0x16600007
    ctx->pc = 0x2410C0u;
    {
        const bool branch_taken_0x2410c0 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x2410C4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2410c0) {
            ctx->pc = 0x2410E0u;
            goto label_2410e0;
        }
    }
    ctx->pc = 0x2410C8u;
    // 0x2410c8: 0xc6000260
    ctx->pc = 0x2410c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2410cc: 0xe6000264
    ctx->pc = 0x2410ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 612), bits); }
    // 0x2410d0: 0x10000003
    ctx->pc = 0x2410D0u;
    {
        const bool branch_taken_0x2410d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2410D4u;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
        if (branch_taken_0x2410d0) {
            ctx->pc = 0x2410E0u;
            goto label_2410e0;
        }
    }
    ctx->pc = 0x2410D8u;
label_2410d8:
    // 0x2410d8: 0xc6140260
    ctx->pc = 0x2410d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2410dc: 0x200202d
    ctx->pc = 0x2410dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2410e0:
    // 0x2410e0: 0x3c013f80
    ctx->pc = 0x2410e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2410e4: 0x44816000
    ctx->pc = 0x2410e4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2410e8: 0xc08f14c
    ctx->pc = 0x2410E8u;
    SET_GPR_U32(ctx, 31, 0x2410F0u);
    ctx->pc = 0x2410ECu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x23C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_enemy_trans_0x23c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2410F0u; }
    }
    if (ctx->pc != 0x2410F0u) { return; }
    ctx->pc = 0x2410F0u;
    // 0x2410f0: 0x12600005
    ctx->pc = 0x2410F0u;
    {
        const bool branch_taken_0x2410f0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2410F4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2410f0) {
            ctx->pc = 0x241108u;
            goto label_241108;
        }
    }
    ctx->pc = 0x2410F8u;
    // 0x2410f8: 0xc4401c6c
    ctx->pc = 0x2410f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2410fc: 0x4600a032
    ctx->pc = 0x2410fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x241100: 0x45000005
    ctx->pc = 0x241100u;
    {
        const bool branch_taken_0x241100 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x241100) {
            ctx->pc = 0x241118u;
            goto label_241118;
        }
    }
    ctx->pc = 0x241108u;
label_241108:
    // 0x241108: 0x200202d
    ctx->pc = 0x241108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24110c: 0xc08f196
    ctx->pc = 0x24110Cu;
    SET_GPR_U32(ctx, 31, 0x241114u);
    ctx->pc = 0x241110u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x23C658u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_ang_0x23c658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241114u; }
    }
    if (ctx->pc != 0x241114u) { return; }
    ctx->pc = 0x241114u;
    // 0x241114: 0xe6000258
    ctx->pc = 0x241114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
label_241118:
    // 0x241118: 0xc090e82
    ctx->pc = 0x241118u;
    SET_GPR_U32(ctx, 31, 0x241120u);
    ctx->pc = 0x24111Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241120u; }
    }
    if (ctx->pc != 0x241120u) { return; }
    ctx->pc = 0x241120u;
    // 0x241120: 0x8e030000
    ctx->pc = 0x241120u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x241124: 0x24020003
    ctx->pc = 0x241124u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x241128: 0x14620006
    ctx->pc = 0x241128u;
    {
        const bool branch_taken_0x241128 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x241128) {
            ctx->pc = 0x241144u;
            goto label_241144;
        }
    }
    ctx->pc = 0x241130u;
    // 0x241130: 0x8e0200e4
    ctx->pc = 0x241130u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x241134: 0x14400003
    ctx->pc = 0x241134u;
    {
        const bool branch_taken_0x241134 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x241138u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x241134) {
            ctx->pc = 0x241144u;
            goto label_241144;
        }
    }
    ctx->pc = 0x24113Cu;
    // 0x24113c: 0xc09de18
    ctx->pc = 0x24113Cu;
    SET_GPR_U32(ctx, 31, 0x241144u);
    ctx->pc = 0x241140u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x277860u;
    {
        const uint32_t __entryPc = ctx->pc;
        RequestEnemyAction_0x277860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241144u; }
    }
    if (ctx->pc != 0x241144u) { return; }
    ctx->pc = 0x241144u;
label_241144:
    // 0x241144: 0x40034800
    ctx->pc = 0x241144u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x241148: 0x3c02003a
    ctx->pc = 0x241148u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x24114c: 0x8c4421d0
    ctx->pc = 0x24114cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x241150: 0x8c8201d8
    ctx->pc = 0x241150u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 472)));
    // 0x241154: 0x621823
    ctx->pc = 0x241154u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241158: 0x8c8201d0
    ctx->pc = 0x241158u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 464)));
    // 0x24115c: 0x621821
    ctx->pc = 0x24115cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241160: 0xac8301d0
    ctx->pc = 0x241160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 464), GPR_U32(ctx, 3));
    // 0x241164: 0x8c8201d4
    ctx->pc = 0x241164u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x241168: 0x24420001
    ctx->pc = 0x241168u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x24116c: 0xac8201d4
    ctx->pc = 0x24116cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 2));
    // 0x241170: 0xdfbf0050
    ctx->pc = 0x241170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_241174:
    // 0x241174: 0xdfb30040
    ctx->pc = 0x241174u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x241178: 0xdfb20030
    ctx->pc = 0x241178u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24117c: 0xdfb10020
    ctx->pc = 0x24117cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241180: 0xdfb00010
    ctx->pc = 0x241180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241184: 0xc7b50068
    ctx->pc = 0x241184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x241188: 0xc7b40060
    ctx->pc = 0x241188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24118c: 0x3e00008
    ctx->pc = 0x24118Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241190u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240E60u: goto label_240e60;
            case 0x240E64u: goto label_240e64;
            case 0x240E78u: goto label_240e78;
            case 0x240EA4u: goto label_240ea4;
            case 0x240ED0u: goto label_240ed0;
            case 0x240F10u: goto label_240f10;
            case 0x240F20u: goto label_240f20;
            case 0x240F38u: goto label_240f38;
            case 0x240F48u: goto label_240f48;
            case 0x240F60u: goto label_240f60;
            case 0x240F68u: goto label_240f68;
            case 0x240F7Cu: goto label_240f7c;
            case 0x240F80u: goto label_240f80;
            case 0x240FACu: goto label_240fac;
            case 0x240FD8u: goto label_240fd8;
            case 0x241084u: goto label_241084;
            case 0x241098u: goto label_241098;
            case 0x2410A4u: goto label_2410a4;
            case 0x2410C0u: goto label_2410c0;
            case 0x2410D8u: goto label_2410d8;
            case 0x2410E0u: goto label_2410e0;
            case 0x241108u: goto label_241108;
            case 0x241118u: goto label_241118;
            case 0x241144u: goto label_241144;
            case 0x241174u: goto label_241174;
            default: break;
        }
        return;
    }
    ctx->pc = 0x241194u;
}
