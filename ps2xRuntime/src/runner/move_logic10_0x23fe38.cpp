#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic10
// Address: 0x23fe38 - 0x2408c0
void move_logic10_0x23fe38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23fe38u;

    // 0x23fe38: 0x27bdff90
    ctx->pc = 0x23fe38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23fe3c: 0xffbf0050
    ctx->pc = 0x23fe3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x23fe40: 0xffb30040
    ctx->pc = 0x23fe40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x23fe44: 0xffb20030
    ctx->pc = 0x23fe44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x23fe48: 0xffb10020
    ctx->pc = 0x23fe48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x23fe4c: 0xffb00010
    ctx->pc = 0x23fe4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x23fe50: 0xe7b50068
    ctx->pc = 0x23fe50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x23fe54: 0xe7b40060
    ctx->pc = 0x23fe54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x23fe58: 0x80902d
    ctx->pc = 0x23fe58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fe5c: 0x240303b0
    ctx->pc = 0x23fe5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23fe60: 0x2431818
    ctx->pc = 0x23fe60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23fe64: 0x3c020033
    ctx->pc = 0x23fe64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23fe68: 0x2442dfd0
    ctx->pc = 0x23fe68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23fe6c: 0x628021
    ctx->pc = 0x23fe6cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23fe70: 0x982d
    ctx->pc = 0x23fe70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fe74: 0x3c03003c
    ctx->pc = 0x23fe74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x23fe78: 0x24631bb8
    ctx->pc = 0x23fe78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7096));
    // 0x23fe7c: 0x8e020000
    ctx->pc = 0x23fe7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23fe80: 0x21080
    ctx->pc = 0x23fe80u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x23fe84: 0x431021
    ctx->pc = 0x23fe84u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23fe88: 0xc08ed18
    ctx->pc = 0x23FE88u;
    SET_GPR_U32(ctx, 31, 0x23FE90u);
    ctx->pc = 0x23FE8Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->pc = 0x23B460u;
    {
        const uint32_t __entryPc = ctx->pc;
        FoundSuicideBomber_0x23b460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FE90u; }
    }
    if (ctx->pc != 0x23FE90u) { return; }
    ctx->pc = 0x23FE90u;
    // 0x23fe90: 0x14400008
    ctx->pc = 0x23FE90u;
    {
        const bool branch_taken_0x23fe90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23FE94u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
        if (branch_taken_0x23fe90) {
            ctx->pc = 0x23FEB4u;
            goto label_23feb4;
        }
    }
    ctx->pc = 0x23FE98u;
    // 0x23fe98: 0x860202f2
    ctx->pc = 0x23fe98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 754)));
    // 0x23fe9c: 0x10400004
    ctx->pc = 0x23FE9Cu;
    {
        const bool branch_taken_0x23fe9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23FEA0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x23fe9c) {
            ctx->pc = 0x23FEB0u;
            goto label_23feb0;
        }
    }
    ctx->pc = 0x23FEA4u;
    // 0x23fea4: 0x86020288
    ctx->pc = 0x23fea4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x23fea8: 0x4410007
    ctx->pc = 0x23FEA8u;
    {
        const bool branch_taken_0x23fea8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23FEACu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x23fea8) {
            ctx->pc = 0x23FEC8u;
            goto label_23fec8;
        }
    }
    ctx->pc = 0x23FEB0u;
label_23feb0:
    // 0x23feb0: 0x24420005
    ctx->pc = 0x23feb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5));
label_23feb4:
    // 0x23feb4: 0xa6020324
    ctx->pc = 0x23feb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x23feb8: 0xc09095a
    ctx->pc = 0x23FEB8u;
    SET_GPR_U32(ctx, 31, 0x23FEC0u);
    ctx->pc = 0x23FEBCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x242568u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_ai_0x242568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FEC0u; }
    }
    if (ctx->pc != 0x23FEC0u) { return; }
    ctx->pc = 0x23FEC0u;
    // 0x23fec0: 0x10000277
    ctx->pc = 0x23FEC0u;
    {
        const bool branch_taken_0x23fec0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23FEC4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x23fec0) {
            ctx->pc = 0x2408A0u;
            goto label_2408a0;
        }
    }
    ctx->pc = 0x23FEC8u;
label_23fec8:
    // 0x23fec8: 0xc08ea10
    ctx->pc = 0x23FEC8u;
    SET_GPR_U32(ctx, 31, 0x23FED0u);
    ctx->pc = 0x23FECCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23A840u;
    {
        const uint32_t __entryPc = ctx->pc;
        update_enemy_milestone_0x23a840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FED0u; }
    }
    if (ctx->pc != 0x23FED0u) { return; }
    ctx->pc = 0x23FED0u;
    // 0x23fed0: 0x8603032a
    ctx->pc = 0x23fed0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 810)));
    // 0x23fed4: 0x10600005
    ctx->pc = 0x23FED4u;
    {
        const bool branch_taken_0x23fed4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x23FED8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x23fed4) {
            ctx->pc = 0x23FEECu;
            goto label_23feec;
        }
    }
    ctx->pc = 0x23FEDCu;
    // 0x23fedc: 0x1062009c
    ctx->pc = 0x23FEDCu;
    {
        const bool branch_taken_0x23fedc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x23fedc) {
            ctx->pc = 0x240150u;
            goto label_240150;
        }
    }
    ctx->pc = 0x23FEE4u;
    // 0x23fee4: 0x10000180
    ctx->pc = 0x23FEE4u;
    {
        const bool branch_taken_0x23fee4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23FEE8u;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
        if (branch_taken_0x23fee4) {
            ctx->pc = 0x2404E8u;
            goto label_2404e8;
        }
    }
    ctx->pc = 0x23FEECu;
label_23feec:
    // 0x23feec: 0xc08ff66
    ctx->pc = 0x23FEECu;
    SET_GPR_U32(ctx, 31, 0x23FEF4u);
    ctx->pc = 0x23FEF0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23FD98u;
    {
        const uint32_t __entryPc = ctx->pc;
        logic10_attacking_0x23fd98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FEF4u; }
    }
    if (ctx->pc != 0x23FEF4u) { return; }
    ctx->pc = 0x23FEF4u;
    // 0x23fef4: 0x1440026a
    ctx->pc = 0x23FEF4u;
    {
        const bool branch_taken_0x23fef4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23FEF8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x23fef4) {
            ctx->pc = 0x2408A0u;
            goto label_2408a0;
        }
    }
    ctx->pc = 0x23FEFCu;
    // 0x23fefc: 0x86030324
    ctx->pc = 0x23fefcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x23ff00: 0x86020328
    ctx->pc = 0x23ff00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x23ff04: 0x50620004
    ctx->pc = 0x23FF04u;
    {
        const bool branch_taken_0x23ff04 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x23ff04) {
            ctx->pc = 0x23FF08u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
            ctx->pc = 0x23FF18u;
            goto label_23ff18;
        }
    }
    ctx->pc = 0x23FF0Cu;
    // 0x23ff0c: 0xc08e210
    ctx->pc = 0x23FF0Cu;
    SET_GPR_U32(ctx, 31, 0x23FF14u);
    ctx->pc = 0x23FF10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FF14u; }
    }
    if (ctx->pc != 0x23FF14u) { return; }
    ctx->pc = 0x23FF14u;
    // 0x23ff14: 0x86020378
    ctx->pc = 0x23ff14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
label_23ff18:
    // 0x23ff18: 0x28420005
    ctx->pc = 0x23ff18u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
    // 0x23ff1c: 0x14400011
    ctx->pc = 0x23FF1Cu;
    {
        const bool branch_taken_0x23ff1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23FF20u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23ff1c) {
            ctx->pc = 0x23FF64u;
            goto label_23ff64;
        }
    }
    ctx->pc = 0x23FF24u;
    // 0x23ff24: 0xa600037a
    ctx->pc = 0x23ff24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 890), (uint16_t)GPR_U32(ctx, 0));
    // 0x23ff28: 0x3c040032
    ctx->pc = 0x23ff28u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x23ff2c: 0x24841bc0
    ctx->pc = 0x23ff2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7104));
    // 0x23ff30: 0x86020288
    ctx->pc = 0x23ff30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x23ff34: 0x24032b00
    ctx->pc = 0x23ff34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x23ff38: 0x431018
    ctx->pc = 0x23ff38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23ff3c: 0x441021
    ctx->pc = 0x23ff3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23ff40: 0x8c420950
    ctx->pc = 0x23ff40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2384)));
    // 0x23ff44: 0x440000b
    ctx->pc = 0x23FF44u;
    {
        const bool branch_taken_0x23ff44 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23FF48u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 2));
        if (branch_taken_0x23ff44) {
            ctx->pc = 0x23FF74u;
            goto label_23ff74;
        }
    }
    ctx->pc = 0x23FF4Cu;
    // 0x23ff4c: 0x9602032a
    ctx->pc = 0x23ff4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 810)));
    // 0x23ff50: 0x24420001
    ctx->pc = 0x23ff50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23ff54: 0xa602032a
    ctx->pc = 0x23ff54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 810), (uint16_t)GPR_U32(ctx, 2));
    // 0x23ff58: 0xa600032c
    ctx->pc = 0x23ff58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 812), (uint16_t)GPR_U32(ctx, 0));
    // 0x23ff5c: 0x10000005
    ctx->pc = 0x23FF5Cu;
    {
        const bool branch_taken_0x23ff5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23FF60u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x23ff5c) {
            ctx->pc = 0x23FF74u;
            goto label_23ff74;
        }
    }
    ctx->pc = 0x23FF64u;
label_23ff64:
    // 0x23ff64: 0xc08f0f0
    ctx->pc = 0x23FF64u;
    SET_GPR_U32(ctx, 31, 0x23FF6Cu);
    ctx->pc = 0x23FF68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x23C3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_face_ang_0x23c3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FF6Cu; }
    }
    if (ctx->pc != 0x23FF6Cu) { return; }
    ctx->pc = 0x23FF6Cu;
    // 0x23ff6c: 0x3c02003c
    ctx->pc = 0x23ff6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x23ff70: 0xe4401c6c
    ctx->pc = 0x23ff70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7276), bits); }
label_23ff74:
    // 0x23ff74: 0x8e03036c
    ctx->pc = 0x23ff74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x23ff78: 0x18600005
    ctx->pc = 0x23FF78u;
    {
        const bool branch_taken_0x23ff78 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x23FF7Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x23ff78) {
            ctx->pc = 0x23FF90u;
            goto label_23ff90;
        }
    }
    ctx->pc = 0x23FF80u;
    // 0x23ff80: 0x8c42ffbc
    ctx->pc = 0x23ff80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x23ff84: 0x621023
    ctx->pc = 0x23ff84u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ff88: 0x1c400143
    ctx->pc = 0x23FF88u;
    {
        const bool branch_taken_0x23ff88 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x23FF8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 2));
        if (branch_taken_0x23ff88) {
            ctx->pc = 0x240498u;
            goto label_240498;
        }
    }
    ctx->pc = 0x23FF90u;
label_23ff90:
    // 0x23ff90: 0x86030212
    ctx->pc = 0x23ff90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 530)));
    // 0x23ff94: 0x24020001
    ctx->pc = 0x23ff94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ff98: 0x5462000e
    ctx->pc = 0x23FF98u;
    {
        const bool branch_taken_0x23ff98 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x23ff98) {
            ctx->pc = 0x23FF9Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 672)));
            ctx->pc = 0x23FFD4u;
            goto label_23ffd4;
        }
    }
    ctx->pc = 0x23FFA0u;
    // 0x23ffa0: 0x3c02003c
    ctx->pc = 0x23ffa0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x23ffa4: 0xc4541c6c
    ctx->pc = 0x23ffa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23ffa8: 0x8e020368
    ctx->pc = 0x23ffa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x23ffac: 0x14400005
    ctx->pc = 0x23FFACu;
    {
        const bool branch_taken_0x23ffac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23FFB0u;
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
        if (branch_taken_0x23ffac) {
            ctx->pc = 0x23FFC4u;
            goto label_23ffc4;
        }
    }
    ctx->pc = 0x23FFB4u;
    // 0x23ffb4: 0xc08efec
    ctx->pc = 0x23FFB4u;
    SET_GPR_U32(ctx, 31, 0x23FFBCu);
    ctx->pc = 0x23FFB8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23BFB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_turn_dir_0x23bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FFBCu; }
    }
    if (ctx->pc != 0x23FFBCu) { return; }
    ctx->pc = 0x23FFBCu;
    // 0x23ffbc: 0xae020368
    ctx->pc = 0x23ffbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
    // 0x23ffc0: 0x8e020368
    ctx->pc = 0x23ffc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
label_23ffc4:
    // 0x23ffc4: 0x1c40000d
    ctx->pc = 0x23FFC4u;
    {
        const bool branch_taken_0x23ffc4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x23FFC8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x23ffc4) {
            ctx->pc = 0x23FFFCu;
            goto label_23fffc;
        }
    }
    ctx->pc = 0x23FFCCu;
    // 0x23ffcc: 0x10000013
    ctx->pc = 0x23FFCCu;
    {
        const bool branch_taken_0x23ffcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23FFD0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958912));
        if (branch_taken_0x23ffcc) {
            ctx->pc = 0x24001Cu;
            goto label_24001c;
        }
    }
    ctx->pc = 0x23FFD4u;
label_23ffd4:
    // 0x23ffd4: 0x54400005
    ctx->pc = 0x23FFD4u;
    {
        const bool branch_taken_0x23ffd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23ffd4) {
            ctx->pc = 0x23FFD8u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->pc = 0x23FFECu;
            goto label_23ffec;
        }
    }
    ctx->pc = 0x23FFDCu;
    // 0x23ffdc: 0x8e02029c
    ctx->pc = 0x23ffdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 668)));
    // 0x23ffe0: 0x4400013
    ctx->pc = 0x23FFE0u;
    {
        const bool branch_taken_0x23ffe0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23FFE4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x23ffe0) {
            ctx->pc = 0x240030u;
            goto label_240030;
        }
    }
    ctx->pc = 0x23FFE8u;
    // 0x23ffe8: 0xc6140260
    ctx->pc = 0x23ffe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_23ffec:
    // 0x23ffec: 0x8e020368
    ctx->pc = 0x23ffecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x23fff0: 0x18400008
    ctx->pc = 0x23FFF0u;
    {
        const bool branch_taken_0x23fff0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23FFF4u;
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
        if (branch_taken_0x23fff0) {
            ctx->pc = 0x240014u;
            goto label_240014;
        }
    }
    ctx->pc = 0x23FFF8u;
    // 0x23fff8: 0x3c020033
    ctx->pc = 0x23fff8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_23fffc:
    // 0x23fffc: 0x2442df40
    ctx->pc = 0x23fffcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958912));
    // 0x240000: 0x111880
    ctx->pc = 0x240000u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x240004: 0x621821
    ctx->pc = 0x240004u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240008: 0xc4600000
    ctx->pc = 0x240008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24000c: 0x10000009
    ctx->pc = 0x24000Cu;
    {
        const bool branch_taken_0x24000c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x240010u;
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x24000c) {
            ctx->pc = 0x240034u;
            goto label_240034;
        }
    }
    ctx->pc = 0x240014u;
label_240014:
    // 0x240014: 0x3c020033
    ctx->pc = 0x240014u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x240018: 0x2442df40
    ctx->pc = 0x240018u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958912));
label_24001c:
    // 0x24001c: 0x111880
    ctx->pc = 0x24001cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x240020: 0x621821
    ctx->pc = 0x240020u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240024: 0xc4600000
    ctx->pc = 0x240024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240028: 0x10000002
    ctx->pc = 0x240028u;
    {
        const bool branch_taken_0x240028 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24002Cu;
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x240028) {
            ctx->pc = 0x240034u;
            goto label_240034;
        }
    }
    ctx->pc = 0x240030u;
label_240030:
    // 0x240030: 0xc4541c6c
    ctx->pc = 0x240030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_240034:
    // 0x240034: 0x3c014049
    ctx->pc = 0x240034u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x240038: 0x34210fdb
    ctx->pc = 0x240038u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x24003c: 0x44810000
    ctx->pc = 0x24003cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x240040: 0x46140034
    ctx->pc = 0x240040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x240044: 0x45000006
    ctx->pc = 0x240044u;
    {
        const bool branch_taken_0x240044 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x240044) {
            ctx->pc = 0x240060u;
            goto label_240060;
        }
    }
    ctx->pc = 0x24004Cu;
    // 0x24004c: 0x3c0140c9
    ctx->pc = 0x24004cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x240050: 0x34210fdb
    ctx->pc = 0x240050u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x240054: 0x44810000
    ctx->pc = 0x240054u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x240058: 0x1000000c
    ctx->pc = 0x240058u;
    {
        const bool branch_taken_0x240058 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24005Cu;
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x240058) {
            ctx->pc = 0x24008Cu;
            goto label_24008c;
        }
    }
    ctx->pc = 0x240060u;
label_240060:
    // 0x240060: 0x3c01c049
    ctx->pc = 0x240060u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x240064: 0x34210fdb
    ctx->pc = 0x240064u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x240068: 0x44810000
    ctx->pc = 0x240068u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x24006c: 0x4600a036
    ctx->pc = 0x24006cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x240070: 0x0
    ctx->pc = 0x240070u;
    // NOP
    // 0x240074: 0x45020005
    ctx->pc = 0x240074u;
    {
        const bool branch_taken_0x240074 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x240074) {
            ctx->pc = 0x240078u;
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->pc = 0x24008Cu;
            goto label_24008c;
        }
    }
    ctx->pc = 0x24007Cu;
    // 0x24007c: 0x3c0140c9
    ctx->pc = 0x24007cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x240080: 0x34210fdb
    ctx->pc = 0x240080u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x240084: 0x44810000
    ctx->pc = 0x240084u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x240088: 0x4600a000
    ctx->pc = 0x240088u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_24008c:
    // 0x24008c: 0x46000506
    ctx->pc = 0x24008cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x240090: 0xc6000040
    ctx->pc = 0x240090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240094: 0xe7a00000
    ctx->pc = 0x240094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x240098: 0xc6020044
    ctx->pc = 0x240098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24009c: 0xc6000048
    ctx->pc = 0x24009cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2400a0: 0xe7a00008
    ctx->pc = 0x2400a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2400a4: 0xc600024c
    ctx->pc = 0x2400a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2400a8: 0x3c013dcc
    ctx->pc = 0x2400a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x2400ac: 0x3421cccd
    ctx->pc = 0x2400acu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2400b0: 0x44810800
    ctx->pc = 0x2400b0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2400b4: 0x46010000
    ctx->pc = 0x2400b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2400b8: 0x46020000
    ctx->pc = 0x2400b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2400bc: 0xe7a00004
    ctx->pc = 0x2400bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2400c0: 0xc0b9e4a
    ctx->pc = 0x2400C0u;
    SET_GPR_U32(ctx, 31, 0x2400C8u);
    ctx->pc = 0x2400C4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2400C8u; }
    }
    if (ctx->pc != 0x2400C8u) { return; }
    ctx->pc = 0x2400C8u;
    // 0x2400c8: 0x46150002
    ctx->pc = 0x2400c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2400cc: 0xc7a10000
    ctx->pc = 0x2400ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2400d0: 0x46010000
    ctx->pc = 0x2400d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2400d4: 0xe7a00000
    ctx->pc = 0x2400d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2400d8: 0xc0b9dce
    ctx->pc = 0x2400D8u;
    SET_GPR_U32(ctx, 31, 0x2400E0u);
    ctx->pc = 0x2400DCu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2400E0u; }
    }
    if (ctx->pc != 0x2400E0u) { return; }
    ctx->pc = 0x2400E0u;
    // 0x2400e0: 0x46150002
    ctx->pc = 0x2400e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2400e4: 0xc7a10008
    ctx->pc = 0x2400e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2400e8: 0x46010000
    ctx->pc = 0x2400e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2400ec: 0xe7a00008
    ctx->pc = 0x2400ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2400f0: 0xc6000260
    ctx->pc = 0x2400f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2400f4: 0xc6010264
    ctx->pc = 0x2400f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2400f8: 0x46010001
    ctx->pc = 0x2400f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2400fc: 0x46000005
    ctx->pc = 0x2400fcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x240100: 0x3c013d0e
    ctx->pc = 0x240100u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15630 << 16));
    // 0x240104: 0x3421fa36
    ctx->pc = 0x240104u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 64054));
    // 0x240108: 0x44811000
    ctx->pc = 0x240108u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x24010c: 0x46001034
    ctx->pc = 0x24010cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x240110: 0x0
    ctx->pc = 0x240110u;
    // NOP
    // 0x240114: 0x45000008
    ctx->pc = 0x240114u;
    {
        const bool branch_taken_0x240114 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x240118u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x240114) {
            ctx->pc = 0x240138u;
            goto label_240138;
        }
    }
    ctx->pc = 0x24011Cu;
    // 0x24011c: 0x4601a001
    ctx->pc = 0x24011cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x240120: 0x46000005
    ctx->pc = 0x240120u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x240124: 0x46020036
    ctx->pc = 0x240124u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x240128: 0x0
    ctx->pc = 0x240128u;
    // NOP
    // 0x24012c: 0x450300ca
    ctx->pc = 0x24012Cu;
    {
        const bool branch_taken_0x24012c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24012c) {
            ctx->pc = 0x240130u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x240458u;
            goto label_240458;
        }
    }
    ctx->pc = 0x240134u;
    // 0x240134: 0x3a0202d
    ctx->pc = 0x240134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_240138:
    // 0x240138: 0xc08f296
    ctx->pc = 0x240138u;
    SET_GPR_U32(ctx, 31, 0x240140u);
    ctx->pc = 0x24013Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23CA58u;
    {
        const uint32_t __entryPc = ctx->pc;
        check_vacancy_0x23ca58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240140u; }
    }
    if (ctx->pc != 0x240140u) { return; }
    ctx->pc = 0x240140u;
    // 0x240140: 0x504000c5
    ctx->pc = 0x240140u;
    {
        const bool branch_taken_0x240140 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x240140) {
            ctx->pc = 0x240144u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x240458u;
            goto label_240458;
        }
    }
    ctx->pc = 0x240148u;
    // 0x240148: 0x100000c6
    ctx->pc = 0x240148u;
    {
        const bool branch_taken_0x240148 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24014Cu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 890), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x240148) {
            ctx->pc = 0x240464u;
            goto label_240464;
        }
    }
    ctx->pc = 0x240150u;
label_240150:
    // 0x240150: 0xc08ff66
    ctx->pc = 0x240150u;
    SET_GPR_U32(ctx, 31, 0x240158u);
    ctx->pc = 0x240154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23FD98u;
    {
        const uint32_t __entryPc = ctx->pc;
        logic10_attacking_0x23fd98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240158u; }
    }
    if (ctx->pc != 0x240158u) { return; }
    ctx->pc = 0x240158u;
    // 0x240158: 0x144001d1
    ctx->pc = 0x240158u;
    {
        const bool branch_taken_0x240158 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24015Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x240158) {
            ctx->pc = 0x2408A0u;
            goto label_2408a0;
        }
    }
    ctx->pc = 0x240160u;
    // 0x240160: 0x86030324
    ctx->pc = 0x240160u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x240164: 0x86020328
    ctx->pc = 0x240164u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x240168: 0x50620004
    ctx->pc = 0x240168u;
    {
        const bool branch_taken_0x240168 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x240168) {
            ctx->pc = 0x24016Cu;
            SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 860)));
            ctx->pc = 0x24017Cu;
            goto label_24017c;
        }
    }
    ctx->pc = 0x240170u;
    // 0x240170: 0xc08e210
    ctx->pc = 0x240170u;
    SET_GPR_U32(ctx, 31, 0x240178u);
    ctx->pc = 0x240174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240178u; }
    }
    if (ctx->pc != 0x240178u) { return; }
    ctx->pc = 0x240178u;
    // 0x240178: 0x8e11035c
    ctx->pc = 0x240178u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 860)));
label_24017c:
    // 0x24017c: 0x6220017
    ctx->pc = 0x24017Cu;
    {
        const bool branch_taken_0x24017c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x24017c) {
            ctx->pc = 0x240180u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 812)));
            ctx->pc = 0x2401DCu;
            goto label_2401dc;
        }
    }
    ctx->pc = 0x240184u;
    // 0x240184: 0x8602037a
    ctx->pc = 0x240184u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 890)));
    // 0x240188: 0x28420005
    ctx->pc = 0x240188u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
    // 0x24018c: 0x1440000e
    ctx->pc = 0x24018Cu;
    {
        const bool branch_taken_0x24018c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x240190u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24018c) {
            ctx->pc = 0x2401C8u;
            goto label_2401c8;
        }
    }
    ctx->pc = 0x240194u;
    // 0x240194: 0x9605032c
    ctx->pc = 0x240194u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 812)));
    // 0x240198: 0x24a50001
    ctx->pc = 0x240198u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x24019c: 0xa605032c
    ctx->pc = 0x24019cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 812), (uint16_t)GPR_U32(ctx, 5));
    // 0x2401a0: 0x52c00
    ctx->pc = 0x2401a0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 16));
    // 0x2401a4: 0x220202d
    ctx->pc = 0x2401a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2401a8: 0xc08f214
    ctx->pc = 0x2401A8u;
    SET_GPR_U32(ctx, 31, 0x2401B0u);
    ctx->pc = 0x2401ACu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->pc = 0x23C850u;
    {
        const uint32_t __entryPc = ctx->pc;
        find_neighbor_milestone_0x23c850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2401B0u; }
    }
    if (ctx->pc != 0x2401B0u) { return; }
    ctx->pc = 0x2401B0u;
    // 0x2401b0: 0x4410002
    ctx->pc = 0x2401B0u;
    {
        const bool branch_taken_0x2401b0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2401B4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 2));
        if (branch_taken_0x2401b0) {
            ctx->pc = 0x2401BCu;
            goto label_2401bc;
        }
    }
    ctx->pc = 0x2401B8u;
    // 0x2401b8: 0xae11035c
    ctx->pc = 0x2401b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 17));
label_2401bc:
    // 0x2401bc: 0xa600037a
    ctx->pc = 0x2401bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 890), (uint16_t)GPR_U32(ctx, 0));
    // 0x2401c0: 0xa6000378
    ctx->pc = 0x2401c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 0));
    // 0x2401c4: 0x200202d
    ctx->pc = 0x2401c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2401c8:
    // 0x2401c8: 0xc08f11c
    ctx->pc = 0x2401C8u;
    SET_GPR_U32(ctx, 31, 0x2401D0u);
    ctx->pc = 0x2401CCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 860)));
    ctx->pc = 0x23C470u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_milestone_ang_0x23c470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2401D0u; }
    }
    if (ctx->pc != 0x2401D0u) { return; }
    ctx->pc = 0x2401D0u;
    // 0x2401d0: 0x3c02003c
    ctx->pc = 0x2401d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2401d4: 0x1000001f
    ctx->pc = 0x2401D4u;
    {
        const bool branch_taken_0x2401d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2401D8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7276), bits); }
        if (branch_taken_0x2401d4) {
            ctx->pc = 0x240254u;
            goto label_240254;
        }
    }
    ctx->pc = 0x2401DCu;
label_2401dc:
    // 0x2401dc: 0x2442ffff
    ctx->pc = 0x2401dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2401e0: 0xa602032c
    ctx->pc = 0x2401e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 812), (uint16_t)GPR_U32(ctx, 2));
    // 0x2401e4: 0x21400
    ctx->pc = 0x2401e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x2401e8: 0x22c03
    ctx->pc = 0x2401e8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2401ec: 0x18a0000e
    ctx->pc = 0x2401ECu;
    {
        const bool branch_taken_0x2401ec = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2401F0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2401ec) {
            ctx->pc = 0x240228u;
            goto label_240228;
        }
    }
    ctx->pc = 0x2401F4u;
    // 0x2401f4: 0xc08f214
    ctx->pc = 0x2401F4u;
    SET_GPR_U32(ctx, 31, 0x2401FCu);
    ctx->pc = 0x2401F8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 860)));
    ctx->pc = 0x23C850u;
    {
        const uint32_t __entryPc = ctx->pc;
        find_neighbor_milestone_0x23c850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2401FCu; }
    }
    if (ctx->pc != 0x2401FCu) { return; }
    ctx->pc = 0x2401FCu;
    // 0x2401fc: 0x40282d
    ctx->pc = 0x2401fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240200: 0x28a20000
    ctx->pc = 0x240200u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 0));
    // 0x240204: 0x38510001
    ctx->pc = 0x240204u;
    SET_GPR_U32(ctx, 17, XOR32(GPR_U32(ctx, 2), 1));
    // 0x240208: 0x12200009
    ctx->pc = 0x240208u;
    {
        const bool branch_taken_0x240208 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x24020Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 5));
        if (branch_taken_0x240208) {
            ctx->pc = 0x240230u;
            goto label_240230;
        }
    }
    ctx->pc = 0x240210u;
    // 0x240210: 0xa600037a
    ctx->pc = 0x240210u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 890), (uint16_t)GPR_U32(ctx, 0));
    // 0x240214: 0xa6000378
    ctx->pc = 0x240214u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 0));
    // 0x240218: 0xc08f11c
    ctx->pc = 0x240218u;
    SET_GPR_U32(ctx, 31, 0x240220u);
    ctx->pc = 0x24021Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C470u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_milestone_ang_0x23c470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240220u; }
    }
    if (ctx->pc != 0x240220u) { return; }
    ctx->pc = 0x240220u;
    // 0x240220: 0x3c02003c
    ctx->pc = 0x240220u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x240224: 0xe4401c6c
    ctx->pc = 0x240224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7276), bits); }
label_240228:
    // 0x240228: 0x5620000b
    ctx->pc = 0x240228u;
    {
        const bool branch_taken_0x240228 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x240228) {
            ctx->pc = 0x24022Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->pc = 0x240258u;
            goto label_240258;
        }
    }
    ctx->pc = 0x240230u;
label_240230:
    // 0x240230: 0x200202d
    ctx->pc = 0x240230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240234: 0xc08f0f0
    ctx->pc = 0x240234u;
    SET_GPR_U32(ctx, 31, 0x24023Cu);
    ctx->pc = 0x240238u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x23C3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_face_ang_0x23c3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24023Cu; }
    }
    if (ctx->pc != 0x24023Cu) { return; }
    ctx->pc = 0x24023Cu;
    // 0x24023c: 0x3c02003c
    ctx->pc = 0x24023cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x240240: 0xe4401c6c
    ctx->pc = 0x240240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7276), bits); }
    // 0x240244: 0xa600032a
    ctx->pc = 0x240244u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 810), (uint16_t)GPR_U32(ctx, 0));
    // 0x240248: 0xa600032c
    ctx->pc = 0x240248u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 812), (uint16_t)GPR_U32(ctx, 0));
    // 0x24024c: 0xa600037a
    ctx->pc = 0x24024cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 890), (uint16_t)GPR_U32(ctx, 0));
    // 0x240250: 0xa6000378
    ctx->pc = 0x240250u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 0));
label_240254:
    // 0x240254: 0x8e03036c
    ctx->pc = 0x240254u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_240258:
    // 0x240258: 0x18600005
    ctx->pc = 0x240258u;
    {
        const bool branch_taken_0x240258 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x24025Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x240258) {
            ctx->pc = 0x240270u;
            goto label_240270;
        }
    }
    ctx->pc = 0x240260u;
    // 0x240260: 0x8c42ffbc
    ctx->pc = 0x240260u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x240264: 0x621023
    ctx->pc = 0x240264u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240268: 0x1c40008b
    ctx->pc = 0x240268u;
    {
        const bool branch_taken_0x240268 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x24026Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 2));
        if (branch_taken_0x240268) {
            ctx->pc = 0x240498u;
            goto label_240498;
        }
    }
    ctx->pc = 0x240270u;
label_240270:
    // 0x240270: 0x8e02035c
    ctx->pc = 0x240270u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x240274: 0x440000d
    ctx->pc = 0x240274u;
    {
        const bool branch_taken_0x240274 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x240278u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x240274) {
            ctx->pc = 0x2402ACu;
            goto label_2402ac;
        }
    }
    ctx->pc = 0x24027Cu;
    // 0x24027c: 0xc4541c6c
    ctx->pc = 0x24027cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x240280: 0x8e020368
    ctx->pc = 0x240280u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x240284: 0x14400005
    ctx->pc = 0x240284u;
    {
        const bool branch_taken_0x240284 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x240288u;
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
        if (branch_taken_0x240284) {
            ctx->pc = 0x24029Cu;
            goto label_24029c;
        }
    }
    ctx->pc = 0x24028Cu;
    // 0x24028c: 0xc08f058
    ctx->pc = 0x24028Cu;
    SET_GPR_U32(ctx, 31, 0x240294u);
    ctx->pc = 0x240290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C160u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_turn_to_ms_0x23c160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240294u; }
    }
    if (ctx->pc != 0x240294u) { return; }
    ctx->pc = 0x240294u;
    // 0x240294: 0xae020368
    ctx->pc = 0x240294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
label_240298:
    // 0x240298: 0x8e020368
    ctx->pc = 0x240298u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
label_24029c:
    // 0x24029c: 0x1c40001a
    ctx->pc = 0x24029Cu;
    {
        const bool branch_taken_0x24029c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2402A0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x24029c) {
            ctx->pc = 0x240308u;
            goto label_240308;
        }
    }
    ctx->pc = 0x2402A4u;
    // 0x2402a4: 0x10000020
    ctx->pc = 0x2402A4u;
    {
        const bool branch_taken_0x2402a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2402A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958912));
        if (branch_taken_0x2402a4) {
            ctx->pc = 0x240328u;
            goto label_240328;
        }
    }
    ctx->pc = 0x2402ACu;
label_2402ac:
    // 0x2402ac: 0x86030212
    ctx->pc = 0x2402acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 530)));
    // 0x2402b0: 0x24020001
    ctx->pc = 0x2402b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2402b4: 0x5462000a
    ctx->pc = 0x2402B4u;
    {
        const bool branch_taken_0x2402b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2402b4) {
            ctx->pc = 0x2402B8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 672)));
            ctx->pc = 0x2402E0u;
            goto label_2402e0;
        }
    }
    ctx->pc = 0x2402BCu;
    // 0x2402bc: 0x3c02003c
    ctx->pc = 0x2402bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2402c0: 0xc4541c6c
    ctx->pc = 0x2402c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2402c4: 0x8e020368
    ctx->pc = 0x2402c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x2402c8: 0x1440fff4
    ctx->pc = 0x2402C8u;
    {
        const bool branch_taken_0x2402c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2402CCu;
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
        if (branch_taken_0x2402c8) {
            ctx->pc = 0x24029Cu;
            goto label_24029c;
        }
    }
    ctx->pc = 0x2402D0u;
    // 0x2402d0: 0xc08efec
    ctx->pc = 0x2402D0u;
    SET_GPR_U32(ctx, 31, 0x2402D8u);
    ctx->pc = 0x2402D4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23BFB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_turn_dir_0x23bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2402D8u; }
    }
    if (ctx->pc != 0x2402D8u) { return; }
    ctx->pc = 0x2402D8u;
    // 0x2402d8: 0x1000ffef
    ctx->pc = 0x2402D8u;
    {
        const bool branch_taken_0x2402d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2402DCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
        if (branch_taken_0x2402d8) {
            ctx->pc = 0x240298u;
            goto label_240298;
        }
    }
    ctx->pc = 0x2402E0u;
label_2402e0:
    // 0x2402e0: 0x54400005
    ctx->pc = 0x2402E0u;
    {
        const bool branch_taken_0x2402e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2402e0) {
            ctx->pc = 0x2402E4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->pc = 0x2402F8u;
            goto label_2402f8;
        }
    }
    ctx->pc = 0x2402E8u;
    // 0x2402e8: 0x8e02029c
    ctx->pc = 0x2402e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 668)));
    // 0x2402ec: 0x4400013
    ctx->pc = 0x2402ECu;
    {
        const bool branch_taken_0x2402ec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2402F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2402ec) {
            ctx->pc = 0x24033Cu;
            goto label_24033c;
        }
    }
    ctx->pc = 0x2402F4u;
    // 0x2402f4: 0xc6140260
    ctx->pc = 0x2402f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2402f8:
    // 0x2402f8: 0x8e020368
    ctx->pc = 0x2402f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x2402fc: 0x18400008
    ctx->pc = 0x2402FCu;
    {
        const bool branch_taken_0x2402fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x240300u;
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
        if (branch_taken_0x2402fc) {
            ctx->pc = 0x240320u;
            goto label_240320;
        }
    }
    ctx->pc = 0x240304u;
    // 0x240304: 0x3c020033
    ctx->pc = 0x240304u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_240308:
    // 0x240308: 0x2442df40
    ctx->pc = 0x240308u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958912));
    // 0x24030c: 0x111880
    ctx->pc = 0x24030cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x240310: 0x621821
    ctx->pc = 0x240310u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240314: 0xc4600000
    ctx->pc = 0x240314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240318: 0x10000009
    ctx->pc = 0x240318u;
    {
        const bool branch_taken_0x240318 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24031Cu;
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x240318) {
            ctx->pc = 0x240340u;
            goto label_240340;
        }
    }
    ctx->pc = 0x240320u;
label_240320:
    // 0x240320: 0x3c020033
    ctx->pc = 0x240320u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x240324: 0x2442df40
    ctx->pc = 0x240324u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958912));
label_240328:
    // 0x240328: 0x111880
    ctx->pc = 0x240328u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x24032c: 0x621821
    ctx->pc = 0x24032cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240330: 0xc4600000
    ctx->pc = 0x240330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240334: 0x10000002
    ctx->pc = 0x240334u;
    {
        const bool branch_taken_0x240334 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x240338u;
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x240334) {
            ctx->pc = 0x240340u;
            goto label_240340;
        }
    }
    ctx->pc = 0x24033Cu;
label_24033c:
    // 0x24033c: 0xc4541c6c
    ctx->pc = 0x24033cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_240340:
    // 0x240340: 0x3c014049
    ctx->pc = 0x240340u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x240344: 0x34210fdb
    ctx->pc = 0x240344u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x240348: 0x44810000
    ctx->pc = 0x240348u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x24034c: 0x46140034
    ctx->pc = 0x24034cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x240350: 0x45000006
    ctx->pc = 0x240350u;
    {
        const bool branch_taken_0x240350 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x240350) {
            ctx->pc = 0x24036Cu;
            goto label_24036c;
        }
    }
    ctx->pc = 0x240358u;
    // 0x240358: 0x3c0140c9
    ctx->pc = 0x240358u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x24035c: 0x34210fdb
    ctx->pc = 0x24035cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x240360: 0x44810000
    ctx->pc = 0x240360u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x240364: 0x1000000c
    ctx->pc = 0x240364u;
    {
        const bool branch_taken_0x240364 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x240368u;
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x240364) {
            ctx->pc = 0x240398u;
            goto label_240398;
        }
    }
    ctx->pc = 0x24036Cu;
label_24036c:
    // 0x24036c: 0x3c01c049
    ctx->pc = 0x24036cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x240370: 0x34210fdb
    ctx->pc = 0x240370u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x240374: 0x44810000
    ctx->pc = 0x240374u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x240378: 0x4600a036
    ctx->pc = 0x240378u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24037c: 0x0
    ctx->pc = 0x24037cu;
    // NOP
    // 0x240380: 0x45020005
    ctx->pc = 0x240380u;
    {
        const bool branch_taken_0x240380 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x240380) {
            ctx->pc = 0x240384u;
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->pc = 0x240398u;
            goto label_240398;
        }
    }
    ctx->pc = 0x240388u;
    // 0x240388: 0x3c0140c9
    ctx->pc = 0x240388u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x24038c: 0x34210fdb
    ctx->pc = 0x24038cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x240390: 0x44810000
    ctx->pc = 0x240390u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x240394: 0x4600a000
    ctx->pc = 0x240394u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_240398:
    // 0x240398: 0x46000506
    ctx->pc = 0x240398u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x24039c: 0xc6000040
    ctx->pc = 0x24039cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2403a0: 0xe7a00000
    ctx->pc = 0x2403a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2403a4: 0xc6020044
    ctx->pc = 0x2403a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2403a8: 0xc6000048
    ctx->pc = 0x2403a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2403ac: 0xe7a00008
    ctx->pc = 0x2403acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2403b0: 0xc600024c
    ctx->pc = 0x2403b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2403b4: 0x3c013dcc
    ctx->pc = 0x2403b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x2403b8: 0x3421cccd
    ctx->pc = 0x2403b8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2403bc: 0x44810800
    ctx->pc = 0x2403bcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2403c0: 0x46010000
    ctx->pc = 0x2403c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2403c4: 0x46020000
    ctx->pc = 0x2403c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2403c8: 0xe7a00004
    ctx->pc = 0x2403c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2403cc: 0xc0b9e4a
    ctx->pc = 0x2403CCu;
    SET_GPR_U32(ctx, 31, 0x2403D4u);
    ctx->pc = 0x2403D0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2403D4u; }
    }
    if (ctx->pc != 0x2403D4u) { return; }
    ctx->pc = 0x2403D4u;
    // 0x2403d4: 0x46150002
    ctx->pc = 0x2403d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2403d8: 0xc7a10000
    ctx->pc = 0x2403d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2403dc: 0x46010000
    ctx->pc = 0x2403dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2403e0: 0xe7a00000
    ctx->pc = 0x2403e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2403e4: 0xc0b9dce
    ctx->pc = 0x2403E4u;
    SET_GPR_U32(ctx, 31, 0x2403ECu);
    ctx->pc = 0x2403E8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2403ECu; }
    }
    if (ctx->pc != 0x2403ECu) { return; }
    ctx->pc = 0x2403ECu;
    // 0x2403ec: 0x46150002
    ctx->pc = 0x2403ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2403f0: 0xc7a10008
    ctx->pc = 0x2403f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2403f4: 0x46010000
    ctx->pc = 0x2403f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2403f8: 0xe7a00008
    ctx->pc = 0x2403f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2403fc: 0xc6000260
    ctx->pc = 0x2403fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240400: 0xc6010264
    ctx->pc = 0x240400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240404: 0x46010001
    ctx->pc = 0x240404u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x240408: 0x46000005
    ctx->pc = 0x240408u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x24040c: 0x3c013d0e
    ctx->pc = 0x24040cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15630 << 16));
    // 0x240410: 0x3421fa36
    ctx->pc = 0x240410u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 64054));
    // 0x240414: 0x44811000
    ctx->pc = 0x240414u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x240418: 0x46001034
    ctx->pc = 0x240418u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24041c: 0x0
    ctx->pc = 0x24041cu;
    // NOP
    // 0x240420: 0x45000008
    ctx->pc = 0x240420u;
    {
        const bool branch_taken_0x240420 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x240424u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x240420) {
            ctx->pc = 0x240444u;
            goto label_240444;
        }
    }
    ctx->pc = 0x240428u;
    // 0x240428: 0x4601a001
    ctx->pc = 0x240428u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x24042c: 0x46000005
    ctx->pc = 0x24042cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x240430: 0x46020036
    ctx->pc = 0x240430u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x240434: 0x0
    ctx->pc = 0x240434u;
    // NOP
    // 0x240438: 0x45030007
    ctx->pc = 0x240438u;
    {
        const bool branch_taken_0x240438 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x240438) {
            ctx->pc = 0x24043Cu;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x240458u;
            goto label_240458;
        }
    }
    ctx->pc = 0x240440u;
    // 0x240440: 0x3a0202d
    ctx->pc = 0x240440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_240444:
    // 0x240444: 0xc08f296
    ctx->pc = 0x240444u;
    SET_GPR_U32(ctx, 31, 0x24044Cu);
    ctx->pc = 0x240448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23CA58u;
    {
        const uint32_t __entryPc = ctx->pc;
        check_vacancy_0x23ca58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24044Cu; }
    }
    if (ctx->pc != 0x24044Cu) { return; }
    ctx->pc = 0x24044Cu;
    // 0x24044c: 0x54400005
    ctx->pc = 0x24044Cu;
    {
        const bool branch_taken_0x24044c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x24044c) {
            ctx->pc = 0x240450u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 890), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x240464u;
            goto label_240464;
        }
    }
    ctx->pc = 0x240454u;
    // 0x240454: 0x24130001
    ctx->pc = 0x240454u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
label_240458:
    // 0x240458: 0x9602037a
    ctx->pc = 0x240458u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 890)));
    // 0x24045c: 0x24420001
    ctx->pc = 0x24045cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x240460: 0xa602037a
    ctx->pc = 0x240460u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 890), (uint16_t)GPR_U32(ctx, 2));
label_240464:
    // 0x240464: 0x8602037a
    ctx->pc = 0x240464u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 890)));
    // 0x240468: 0x2842000b
    ctx->pc = 0x240468u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 11));
    // 0x24046c: 0x14400004
    ctx->pc = 0x24046Cu;
    {
        const bool branch_taken_0x24046c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x240470u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x24046c) {
            ctx->pc = 0x240480u;
            goto label_240480;
        }
    }
    ctx->pc = 0x240474u;
    // 0x240474: 0xc4401c6c
    ctx->pc = 0x240474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240478: 0xe6000260
    ctx->pc = 0x240478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x24047c: 0x46000506
    ctx->pc = 0x24047cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_240480:
    // 0x240480: 0x16600007
    ctx->pc = 0x240480u;
    {
        const bool branch_taken_0x240480 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x240484u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x240480) {
            ctx->pc = 0x2404A0u;
            goto label_2404a0;
        }
    }
    ctx->pc = 0x240488u;
    // 0x240488: 0xc6000260
    ctx->pc = 0x240488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24048c: 0xe6000264
    ctx->pc = 0x24048cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 612), bits); }
    // 0x240490: 0x10000003
    ctx->pc = 0x240490u;
    {
        const bool branch_taken_0x240490 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x240494u;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
        if (branch_taken_0x240490) {
            ctx->pc = 0x2404A0u;
            goto label_2404a0;
        }
    }
    ctx->pc = 0x240498u;
label_240498:
    // 0x240498: 0xc6140260
    ctx->pc = 0x240498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24049c: 0x200202d
    ctx->pc = 0x24049cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2404a0:
    // 0x2404a0: 0x3c013f80
    ctx->pc = 0x2404a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2404a4: 0x44816000
    ctx->pc = 0x2404a4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2404a8: 0xc08f14c
    ctx->pc = 0x2404A8u;
    SET_GPR_U32(ctx, 31, 0x2404B0u);
    ctx->pc = 0x2404ACu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x23C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_enemy_trans_0x23c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2404B0u; }
    }
    if (ctx->pc != 0x2404B0u) { return; }
    ctx->pc = 0x2404B0u;
    // 0x2404b0: 0x12600005
    ctx->pc = 0x2404B0u;
    {
        const bool branch_taken_0x2404b0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2404B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2404b0) {
            ctx->pc = 0x2404C8u;
            goto label_2404c8;
        }
    }
    ctx->pc = 0x2404B8u;
    // 0x2404b8: 0xc4401c6c
    ctx->pc = 0x2404b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2404bc: 0x4600a032
    ctx->pc = 0x2404bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2404c0: 0x45000005
    ctx->pc = 0x2404C0u;
    {
        const bool branch_taken_0x2404c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2404c0) {
            ctx->pc = 0x2404D8u;
            goto label_2404d8;
        }
    }
    ctx->pc = 0x2404C8u;
label_2404c8:
    // 0x2404c8: 0x200202d
    ctx->pc = 0x2404c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2404cc: 0xc08f196
    ctx->pc = 0x2404CCu;
    SET_GPR_U32(ctx, 31, 0x2404D4u);
    ctx->pc = 0x2404D0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x23C658u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_ang_0x23c658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2404D4u; }
    }
    if (ctx->pc != 0x2404D4u) { return; }
    ctx->pc = 0x2404D4u;
    // 0x2404d4: 0xe6000258
    ctx->pc = 0x2404d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
label_2404d8:
    // 0x2404d8: 0xc090e82
    ctx->pc = 0x2404D8u;
    SET_GPR_U32(ctx, 31, 0x2404E0u);
    ctx->pc = 0x2404DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2404E0u; }
    }
    if (ctx->pc != 0x2404E0u) { return; }
    ctx->pc = 0x2404E0u;
    // 0x2404e0: 0x100000ef
    ctx->pc = 0x2404E0u;
    {
        const bool branch_taken_0x2404e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2404E4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2404e0) {
            ctx->pc = 0x2408A0u;
            goto label_2408a0;
        }
    }
    ctx->pc = 0x2404E8u;
label_2404e8:
    // 0x2404e8: 0x86020328
    ctx->pc = 0x2404e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x2404ec: 0x50620004
    ctx->pc = 0x2404ECu;
    {
        const bool branch_taken_0x2404ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2404ec) {
            ctx->pc = 0x2404F0u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 860)));
            ctx->pc = 0x240500u;
            goto label_240500;
        }
    }
    ctx->pc = 0x2404F4u;
    // 0x2404f4: 0xc08e210
    ctx->pc = 0x2404F4u;
    SET_GPR_U32(ctx, 31, 0x2404FCu);
    ctx->pc = 0x2404F8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2404FCu; }
    }
    if (ctx->pc != 0x2404FCu) { return; }
    ctx->pc = 0x2404FCu;
    // 0x2404fc: 0x8e05035c
    ctx->pc = 0x2404fcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 860)));
label_240500:
    // 0x240500: 0x4a0002b
    ctx->pc = 0x240500u;
    {
        const bool branch_taken_0x240500 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x240504u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 890)));
        if (branch_taken_0x240500) {
            ctx->pc = 0x2405B0u;
            goto label_2405b0;
        }
    }
    ctx->pc = 0x240508u;
    // 0x240508: 0x28420005
    ctx->pc = 0x240508u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
    // 0x24050c: 0x50400005
    ctx->pc = 0x24050Cu;
    {
        const bool branch_taken_0x24050c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x24050c) {
            ctx->pc = 0x240510u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 864)));
            ctx->pc = 0x240524u;
            goto label_240524;
        }
    }
    ctx->pc = 0x240514u;
    // 0x240514: 0xc08f11c
    ctx->pc = 0x240514u;
    SET_GPR_U32(ctx, 31, 0x24051Cu);
    ctx->pc = 0x240518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C470u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_milestone_ang_0x23c470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24051Cu; }
    }
    if (ctx->pc != 0x24051Cu) { return; }
    ctx->pc = 0x24051Cu;
    // 0x24051c: 0x1000003b
    ctx->pc = 0x24051Cu;
    {
        const bool branch_taken_0x24051c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x240520u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x24051c) {
            ctx->pc = 0x24060Cu;
            goto label_24060c;
        }
    }
    ctx->pc = 0x240524u;
label_240524:
    // 0x240524: 0x24440001
    ctx->pc = 0x240524u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 1));
    // 0x240528: 0xae040360
    ctx->pc = 0x240528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 4));
    // 0x24052c: 0x8e020364
    ctx->pc = 0x24052cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 868)));
    // 0x240530: 0x44102a
    ctx->pc = 0x240530u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x240534: 0x5440000d
    ctx->pc = 0x240534u;
    {
        const bool branch_taken_0x240534 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x240534) {
            ctx->pc = 0x240538u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
            ctx->pc = 0x24056Cu;
            goto label_24056c;
        }
    }
    ctx->pc = 0x24053Cu;
    // 0x24053c: 0x3c050032
    ctx->pc = 0x24053cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x240540: 0x24a51bc0
    ctx->pc = 0x240540u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7104));
    // 0x240544: 0x42080
    ctx->pc = 0x240544u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x240548: 0x86020288
    ctx->pc = 0x240548u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x24054c: 0x24032b00
    ctx->pc = 0x24054cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x240550: 0x431018
    ctx->pc = 0x240550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x240554: 0x822021
    ctx->pc = 0x240554u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x240558: 0xa42821
    ctx->pc = 0x240558u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x24055c: 0x8ca20950
    ctx->pc = 0x24055cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 2384)));
    // 0x240560: 0x4410007
    ctx->pc = 0x240560u;
    {
        const bool branch_taken_0x240560 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x240564u;
        SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
        if (branch_taken_0x240560) {
            ctx->pc = 0x240580u;
            goto label_240580;
        }
    }
    ctx->pc = 0x240568u;
    // 0x240568: 0xae000360
    ctx->pc = 0x240568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
label_24056c:
    // 0x24056c: 0x24020004
    ctx->pc = 0x24056cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x240570: 0xae020364
    ctx->pc = 0x240570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 2));
    // 0x240574: 0x2402ffff
    ctx->pc = 0x240574u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x240578: 0x10000020
    ctx->pc = 0x240578u;
    {
        const bool branch_taken_0x240578 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24057Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 2));
        if (branch_taken_0x240578) {
            ctx->pc = 0x2405FCu;
            goto label_2405fc;
        }
    }
    ctx->pc = 0x240580u;
label_240580:
    // 0x240580: 0x24a51bc0
    ctx->pc = 0x240580u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7104));
    // 0x240584: 0x8e030360
    ctx->pc = 0x240584u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x240588: 0x31880
    ctx->pc = 0x240588u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x24058c: 0x86020288
    ctx->pc = 0x24058cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x240590: 0x24042b00
    ctx->pc = 0x240590u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x240594: 0x441018
    ctx->pc = 0x240594u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x240598: 0x621821
    ctx->pc = 0x240598u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24059c: 0xa32821
    ctx->pc = 0x24059cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2405a0: 0x8ca20950
    ctx->pc = 0x2405a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 2384)));
    // 0x2405a4: 0xae02035c
    ctx->pc = 0x2405a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 2));
    // 0x2405a8: 0x10000019
    ctx->pc = 0x2405A8u;
    {
        const bool branch_taken_0x2405a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2405ACu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 890), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x2405a8) {
            ctx->pc = 0x240610u;
            goto label_240610;
        }
    }
    ctx->pc = 0x2405B0u;
label_2405b0:
    // 0x2405b0: 0x28420005
    ctx->pc = 0x2405b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
    // 0x2405b4: 0x14400012
    ctx->pc = 0x2405B4u;
    {
        const bool branch_taken_0x2405b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2405B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2405b4) {
            ctx->pc = 0x240600u;
            goto label_240600;
        }
    }
    ctx->pc = 0x2405BCu;
    // 0x2405bc: 0x3c050032
    ctx->pc = 0x2405bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x2405c0: 0x24a51bc0
    ctx->pc = 0x2405c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7104));
    // 0x2405c4: 0x8e030360
    ctx->pc = 0x2405c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2405c8: 0x31880
    ctx->pc = 0x2405c8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2405cc: 0x86020288
    ctx->pc = 0x2405ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x2405d0: 0x24042b00
    ctx->pc = 0x2405d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2405d4: 0x441018
    ctx->pc = 0x2405d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2405d8: 0x621821
    ctx->pc = 0x2405d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2405dc: 0xa32821
    ctx->pc = 0x2405dcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2405e0: 0x8ca50950
    ctx->pc = 0x2405e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 2384)));
    // 0x2405e4: 0x4a00005
    ctx->pc = 0x2405E4u;
    {
        const bool branch_taken_0x2405e4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2405E8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 5));
        if (branch_taken_0x2405e4) {
            ctx->pc = 0x2405FCu;
            goto label_2405fc;
        }
    }
    ctx->pc = 0x2405ECu;
    // 0x2405ec: 0xc08f11c
    ctx->pc = 0x2405ECu;
    SET_GPR_U32(ctx, 31, 0x2405F4u);
    ctx->pc = 0x2405F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C470u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_milestone_ang_0x23c470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2405F4u; }
    }
    if (ctx->pc != 0x2405F4u) { return; }
    ctx->pc = 0x2405F4u;
    // 0x2405f4: 0x10000005
    ctx->pc = 0x2405F4u;
    {
        const bool branch_taken_0x2405f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2405F8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2405f4) {
            ctx->pc = 0x24060Cu;
            goto label_24060c;
        }
    }
    ctx->pc = 0x2405FCu;
label_2405fc:
    // 0x2405fc: 0x200202d
    ctx->pc = 0x2405fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_240600:
    // 0x240600: 0xc08f0f0
    ctx->pc = 0x240600u;
    SET_GPR_U32(ctx, 31, 0x240608u);
    ctx->pc = 0x240604u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x23C3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_face_ang_0x23c3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240608u; }
    }
    if (ctx->pc != 0x240608u) { return; }
    ctx->pc = 0x240608u;
    // 0x240608: 0x3c02003c
    ctx->pc = 0x240608u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_24060c:
    // 0x24060c: 0xe4401c6c
    ctx->pc = 0x24060cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7276), bits); }
label_240610:
    // 0x240610: 0x8e03036c
    ctx->pc = 0x240610u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x240614: 0x18600005
    ctx->pc = 0x240614u;
    {
        const bool branch_taken_0x240614 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x240618u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x240614) {
            ctx->pc = 0x24062Cu;
            goto label_24062c;
        }
    }
    ctx->pc = 0x24061Cu;
    // 0x24061c: 0x8c42ffbc
    ctx->pc = 0x24061cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x240620: 0x621023
    ctx->pc = 0x240620u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240624: 0x1c40008b
    ctx->pc = 0x240624u;
    {
        const bool branch_taken_0x240624 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x240628u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 2));
        if (branch_taken_0x240624) {
            ctx->pc = 0x240854u;
            goto label_240854;
        }
    }
    ctx->pc = 0x24062Cu;
label_24062c:
    // 0x24062c: 0x8e02035c
    ctx->pc = 0x24062cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x240630: 0x440000d
    ctx->pc = 0x240630u;
    {
        const bool branch_taken_0x240630 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x240634u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x240630) {
            ctx->pc = 0x240668u;
            goto label_240668;
        }
    }
    ctx->pc = 0x240638u;
    // 0x240638: 0xc4541c6c
    ctx->pc = 0x240638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24063c: 0x8e020368
    ctx->pc = 0x24063cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x240640: 0x14400005
    ctx->pc = 0x240640u;
    {
        const bool branch_taken_0x240640 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x240644u;
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
        if (branch_taken_0x240640) {
            ctx->pc = 0x240658u;
            goto label_240658;
        }
    }
    ctx->pc = 0x240648u;
    // 0x240648: 0xc08f058
    ctx->pc = 0x240648u;
    SET_GPR_U32(ctx, 31, 0x240650u);
    ctx->pc = 0x24064Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C160u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_turn_to_ms_0x23c160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240650u; }
    }
    if (ctx->pc != 0x240650u) { return; }
    ctx->pc = 0x240650u;
    // 0x240650: 0xae020368
    ctx->pc = 0x240650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
label_240654:
    // 0x240654: 0x8e020368
    ctx->pc = 0x240654u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
label_240658:
    // 0x240658: 0x1c40001a
    ctx->pc = 0x240658u;
    {
        const bool branch_taken_0x240658 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x24065Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x240658) {
            ctx->pc = 0x2406C4u;
            goto label_2406c4;
        }
    }
    ctx->pc = 0x240660u;
    // 0x240660: 0x10000020
    ctx->pc = 0x240660u;
    {
        const bool branch_taken_0x240660 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x240664u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958912));
        if (branch_taken_0x240660) {
            ctx->pc = 0x2406E4u;
            goto label_2406e4;
        }
    }
    ctx->pc = 0x240668u;
label_240668:
    // 0x240668: 0x86030212
    ctx->pc = 0x240668u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 530)));
    // 0x24066c: 0x24020001
    ctx->pc = 0x24066cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x240670: 0x5462000a
    ctx->pc = 0x240670u;
    {
        const bool branch_taken_0x240670 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x240670) {
            ctx->pc = 0x240674u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 672)));
            ctx->pc = 0x24069Cu;
            goto label_24069c;
        }
    }
    ctx->pc = 0x240678u;
    // 0x240678: 0x3c02003c
    ctx->pc = 0x240678u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x24067c: 0xc4541c6c
    ctx->pc = 0x24067cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x240680: 0x8e020368
    ctx->pc = 0x240680u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x240684: 0x1440fff4
    ctx->pc = 0x240684u;
    {
        const bool branch_taken_0x240684 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x240688u;
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
        if (branch_taken_0x240684) {
            ctx->pc = 0x240658u;
            goto label_240658;
        }
    }
    ctx->pc = 0x24068Cu;
    // 0x24068c: 0xc08efec
    ctx->pc = 0x24068Cu;
    SET_GPR_U32(ctx, 31, 0x240694u);
    ctx->pc = 0x240690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23BFB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_turn_dir_0x23bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240694u; }
    }
    if (ctx->pc != 0x240694u) { return; }
    ctx->pc = 0x240694u;
    // 0x240694: 0x1000ffef
    ctx->pc = 0x240694u;
    {
        const bool branch_taken_0x240694 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x240698u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
        if (branch_taken_0x240694) {
            ctx->pc = 0x240654u;
            goto label_240654;
        }
    }
    ctx->pc = 0x24069Cu;
label_24069c:
    // 0x24069c: 0x54400005
    ctx->pc = 0x24069Cu;
    {
        const bool branch_taken_0x24069c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x24069c) {
            ctx->pc = 0x2406A0u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->pc = 0x2406B4u;
            goto label_2406b4;
        }
    }
    ctx->pc = 0x2406A4u;
    // 0x2406a4: 0x8e02029c
    ctx->pc = 0x2406a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 668)));
    // 0x2406a8: 0x4400013
    ctx->pc = 0x2406A8u;
    {
        const bool branch_taken_0x2406a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2406ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2406a8) {
            ctx->pc = 0x2406F8u;
            goto label_2406f8;
        }
    }
    ctx->pc = 0x2406B0u;
    // 0x2406b0: 0xc6140260
    ctx->pc = 0x2406b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2406b4:
    // 0x2406b4: 0x8e020368
    ctx->pc = 0x2406b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x2406b8: 0x18400008
    ctx->pc = 0x2406B8u;
    {
        const bool branch_taken_0x2406b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2406BCu;
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
        if (branch_taken_0x2406b8) {
            ctx->pc = 0x2406DCu;
            goto label_2406dc;
        }
    }
    ctx->pc = 0x2406C0u;
    // 0x2406c0: 0x3c020033
    ctx->pc = 0x2406c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_2406c4:
    // 0x2406c4: 0x2442df40
    ctx->pc = 0x2406c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958912));
    // 0x2406c8: 0x111880
    ctx->pc = 0x2406c8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x2406cc: 0x621821
    ctx->pc = 0x2406ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2406d0: 0xc4600000
    ctx->pc = 0x2406d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2406d4: 0x10000009
    ctx->pc = 0x2406D4u;
    {
        const bool branch_taken_0x2406d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2406D8u;
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x2406d4) {
            ctx->pc = 0x2406FCu;
            goto label_2406fc;
        }
    }
    ctx->pc = 0x2406DCu;
label_2406dc:
    // 0x2406dc: 0x3c020033
    ctx->pc = 0x2406dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x2406e0: 0x2442df40
    ctx->pc = 0x2406e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958912));
label_2406e4:
    // 0x2406e4: 0x111880
    ctx->pc = 0x2406e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x2406e8: 0x621821
    ctx->pc = 0x2406e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2406ec: 0xc4600000
    ctx->pc = 0x2406ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2406f0: 0x10000002
    ctx->pc = 0x2406F0u;
    {
        const bool branch_taken_0x2406f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2406F4u;
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x2406f0) {
            ctx->pc = 0x2406FCu;
            goto label_2406fc;
        }
    }
    ctx->pc = 0x2406F8u;
label_2406f8:
    // 0x2406f8: 0xc4541c6c
    ctx->pc = 0x2406f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2406fc:
    // 0x2406fc: 0x3c014049
    ctx->pc = 0x2406fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x240700: 0x34210fdb
    ctx->pc = 0x240700u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x240704: 0x44810000
    ctx->pc = 0x240704u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x240708: 0x46140034
    ctx->pc = 0x240708u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24070c: 0x45000006
    ctx->pc = 0x24070Cu;
    {
        const bool branch_taken_0x24070c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24070c) {
            ctx->pc = 0x240728u;
            goto label_240728;
        }
    }
    ctx->pc = 0x240714u;
    // 0x240714: 0x3c0140c9
    ctx->pc = 0x240714u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x240718: 0x34210fdb
    ctx->pc = 0x240718u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x24071c: 0x44810000
    ctx->pc = 0x24071cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x240720: 0x1000000c
    ctx->pc = 0x240720u;
    {
        const bool branch_taken_0x240720 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x240724u;
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x240720) {
            ctx->pc = 0x240754u;
            goto label_240754;
        }
    }
    ctx->pc = 0x240728u;
label_240728:
    // 0x240728: 0x3c01c049
    ctx->pc = 0x240728u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x24072c: 0x34210fdb
    ctx->pc = 0x24072cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x240730: 0x44810000
    ctx->pc = 0x240730u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x240734: 0x4600a036
    ctx->pc = 0x240734u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x240738: 0x0
    ctx->pc = 0x240738u;
    // NOP
    // 0x24073c: 0x45020005
    ctx->pc = 0x24073Cu;
    {
        const bool branch_taken_0x24073c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24073c) {
            ctx->pc = 0x240740u;
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->pc = 0x240754u;
            goto label_240754;
        }
    }
    ctx->pc = 0x240744u;
    // 0x240744: 0x3c0140c9
    ctx->pc = 0x240744u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x240748: 0x34210fdb
    ctx->pc = 0x240748u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x24074c: 0x44810000
    ctx->pc = 0x24074cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x240750: 0x4600a000
    ctx->pc = 0x240750u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_240754:
    // 0x240754: 0x46000506
    ctx->pc = 0x240754u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x240758: 0xc6000040
    ctx->pc = 0x240758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24075c: 0xe7a00000
    ctx->pc = 0x24075cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x240760: 0xc6020044
    ctx->pc = 0x240760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x240764: 0xc6000048
    ctx->pc = 0x240764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240768: 0xe7a00008
    ctx->pc = 0x240768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x24076c: 0xc600024c
    ctx->pc = 0x24076cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240770: 0x3c013dcc
    ctx->pc = 0x240770u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x240774: 0x3421cccd
    ctx->pc = 0x240774u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x240778: 0x44810800
    ctx->pc = 0x240778u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x24077c: 0x46010000
    ctx->pc = 0x24077cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x240780: 0x46020000
    ctx->pc = 0x240780u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x240784: 0xe7a00004
    ctx->pc = 0x240784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x240788: 0xc0b9e4a
    ctx->pc = 0x240788u;
    SET_GPR_U32(ctx, 31, 0x240790u);
    ctx->pc = 0x24078Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240790u; }
    }
    if (ctx->pc != 0x240790u) { return; }
    ctx->pc = 0x240790u;
    // 0x240790: 0x46150002
    ctx->pc = 0x240790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x240794: 0xc7a10000
    ctx->pc = 0x240794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240798: 0x46010000
    ctx->pc = 0x240798u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24079c: 0xe7a00000
    ctx->pc = 0x24079cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2407a0: 0xc0b9dce
    ctx->pc = 0x2407A0u;
    SET_GPR_U32(ctx, 31, 0x2407A8u);
    ctx->pc = 0x2407A4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2407A8u; }
    }
    if (ctx->pc != 0x2407A8u) { return; }
    ctx->pc = 0x2407A8u;
    // 0x2407a8: 0x46150002
    ctx->pc = 0x2407a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2407ac: 0xc7a10008
    ctx->pc = 0x2407acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2407b0: 0x46010000
    ctx->pc = 0x2407b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2407b4: 0xe7a00008
    ctx->pc = 0x2407b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2407b8: 0xc6000260
    ctx->pc = 0x2407b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2407bc: 0xc6010264
    ctx->pc = 0x2407bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2407c0: 0x46010001
    ctx->pc = 0x2407c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2407c4: 0x46000005
    ctx->pc = 0x2407c4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2407c8: 0x3c013d0e
    ctx->pc = 0x2407c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15630 << 16));
    // 0x2407cc: 0x3421fa36
    ctx->pc = 0x2407ccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 64054));
    // 0x2407d0: 0x44811000
    ctx->pc = 0x2407d0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2407d4: 0x46001034
    ctx->pc = 0x2407d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2407d8: 0x0
    ctx->pc = 0x2407d8u;
    // NOP
    // 0x2407dc: 0x45000008
    ctx->pc = 0x2407DCu;
    {
        const bool branch_taken_0x2407dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2407E0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2407dc) {
            ctx->pc = 0x240800u;
            goto label_240800;
        }
    }
    ctx->pc = 0x2407E4u;
    // 0x2407e4: 0x4601a001
    ctx->pc = 0x2407e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x2407e8: 0x46000005
    ctx->pc = 0x2407e8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2407ec: 0x46020036
    ctx->pc = 0x2407ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2407f0: 0x0
    ctx->pc = 0x2407f0u;
    // NOP
    // 0x2407f4: 0x45030007
    ctx->pc = 0x2407F4u;
    {
        const bool branch_taken_0x2407f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2407f4) {
            ctx->pc = 0x2407F8u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x240814u;
            goto label_240814;
        }
    }
    ctx->pc = 0x2407FCu;
    // 0x2407fc: 0x3a0202d
    ctx->pc = 0x2407fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_240800:
    // 0x240800: 0xc08f296
    ctx->pc = 0x240800u;
    SET_GPR_U32(ctx, 31, 0x240808u);
    ctx->pc = 0x240804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23CA58u;
    {
        const uint32_t __entryPc = ctx->pc;
        check_vacancy_0x23ca58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240808u; }
    }
    if (ctx->pc != 0x240808u) { return; }
    ctx->pc = 0x240808u;
    // 0x240808: 0x54400005
    ctx->pc = 0x240808u;
    {
        const bool branch_taken_0x240808 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x240808) {
            ctx->pc = 0x24080Cu;
            WRITE16(ADD32(GPR_U32(ctx, 16), 890), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x240820u;
            goto label_240820;
        }
    }
    ctx->pc = 0x240810u;
    // 0x240810: 0x24130001
    ctx->pc = 0x240810u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
label_240814:
    // 0x240814: 0x9602037a
    ctx->pc = 0x240814u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 890)));
    // 0x240818: 0x24420001
    ctx->pc = 0x240818u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x24081c: 0xa602037a
    ctx->pc = 0x24081cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 890), (uint16_t)GPR_U32(ctx, 2));
label_240820:
    // 0x240820: 0x8602037a
    ctx->pc = 0x240820u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 890)));
    // 0x240824: 0x2842000b
    ctx->pc = 0x240824u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 11));
    // 0x240828: 0x14400004
    ctx->pc = 0x240828u;
    {
        const bool branch_taken_0x240828 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24082Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x240828) {
            ctx->pc = 0x24083Cu;
            goto label_24083c;
        }
    }
    ctx->pc = 0x240830u;
    // 0x240830: 0xc4401c6c
    ctx->pc = 0x240830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240834: 0xe6000260
    ctx->pc = 0x240834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x240838: 0x46000506
    ctx->pc = 0x240838u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_24083c:
    // 0x24083c: 0x16600007
    ctx->pc = 0x24083Cu;
    {
        const bool branch_taken_0x24083c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x240840u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24083c) {
            ctx->pc = 0x24085Cu;
            goto label_24085c;
        }
    }
    ctx->pc = 0x240844u;
    // 0x240844: 0xc6000260
    ctx->pc = 0x240844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240848: 0xe6000264
    ctx->pc = 0x240848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 612), bits); }
    // 0x24084c: 0x10000003
    ctx->pc = 0x24084Cu;
    {
        const bool branch_taken_0x24084c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x240850u;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
        if (branch_taken_0x24084c) {
            ctx->pc = 0x24085Cu;
            goto label_24085c;
        }
    }
    ctx->pc = 0x240854u;
label_240854:
    // 0x240854: 0xc6140260
    ctx->pc = 0x240854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x240858: 0x200202d
    ctx->pc = 0x240858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24085c:
    // 0x24085c: 0x3c013f80
    ctx->pc = 0x24085cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x240860: 0x44816000
    ctx->pc = 0x240860u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x240864: 0xc08f14c
    ctx->pc = 0x240864u;
    SET_GPR_U32(ctx, 31, 0x24086Cu);
    ctx->pc = 0x240868u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x23C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_enemy_trans_0x23c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24086Cu; }
    }
    if (ctx->pc != 0x24086Cu) { return; }
    ctx->pc = 0x24086Cu;
    // 0x24086c: 0x12600005
    ctx->pc = 0x24086Cu;
    {
        const bool branch_taken_0x24086c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x240870u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x24086c) {
            ctx->pc = 0x240884u;
            goto label_240884;
        }
    }
    ctx->pc = 0x240874u;
    // 0x240874: 0xc4401c6c
    ctx->pc = 0x240874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240878: 0x4600a032
    ctx->pc = 0x240878u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24087c: 0x45000005
    ctx->pc = 0x24087Cu;
    {
        const bool branch_taken_0x24087c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24087c) {
            ctx->pc = 0x240894u;
            goto label_240894;
        }
    }
    ctx->pc = 0x240884u;
label_240884:
    // 0x240884: 0x200202d
    ctx->pc = 0x240884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240888: 0xc08f196
    ctx->pc = 0x240888u;
    SET_GPR_U32(ctx, 31, 0x240890u);
    ctx->pc = 0x24088Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x23C658u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_ang_0x23c658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240890u; }
    }
    if (ctx->pc != 0x240890u) { return; }
    ctx->pc = 0x240890u;
    // 0x240890: 0xe6000258
    ctx->pc = 0x240890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
label_240894:
    // 0x240894: 0xc090e82
    ctx->pc = 0x240894u;
    SET_GPR_U32(ctx, 31, 0x24089Cu);
    ctx->pc = 0x240898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24089Cu; }
    }
    if (ctx->pc != 0x24089Cu) { return; }
    ctx->pc = 0x24089Cu;
    // 0x24089c: 0xdfbf0050
    ctx->pc = 0x24089cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2408a0:
    // 0x2408a0: 0xdfb30040
    ctx->pc = 0x2408a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2408a4: 0xdfb20030
    ctx->pc = 0x2408a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2408a8: 0xdfb10020
    ctx->pc = 0x2408a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2408ac: 0xdfb00010
    ctx->pc = 0x2408acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2408b0: 0xc7b50068
    ctx->pc = 0x2408b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2408b4: 0xc7b40060
    ctx->pc = 0x2408b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2408b8: 0x3e00008
    ctx->pc = 0x2408B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2408BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23FEB0u: goto label_23feb0;
            case 0x23FEB4u: goto label_23feb4;
            case 0x23FEC8u: goto label_23fec8;
            case 0x23FEECu: goto label_23feec;
            case 0x23FF18u: goto label_23ff18;
            case 0x23FF64u: goto label_23ff64;
            case 0x23FF74u: goto label_23ff74;
            case 0x23FF90u: goto label_23ff90;
            case 0x23FFC4u: goto label_23ffc4;
            case 0x23FFD4u: goto label_23ffd4;
            case 0x23FFECu: goto label_23ffec;
            case 0x23FFFCu: goto label_23fffc;
            case 0x240014u: goto label_240014;
            case 0x24001Cu: goto label_24001c;
            case 0x240030u: goto label_240030;
            case 0x240034u: goto label_240034;
            case 0x240060u: goto label_240060;
            case 0x24008Cu: goto label_24008c;
            case 0x240138u: goto label_240138;
            case 0x240150u: goto label_240150;
            case 0x24017Cu: goto label_24017c;
            case 0x2401BCu: goto label_2401bc;
            case 0x2401C8u: goto label_2401c8;
            case 0x2401DCu: goto label_2401dc;
            case 0x240228u: goto label_240228;
            case 0x240230u: goto label_240230;
            case 0x240254u: goto label_240254;
            case 0x240258u: goto label_240258;
            case 0x240270u: goto label_240270;
            case 0x240298u: goto label_240298;
            case 0x24029Cu: goto label_24029c;
            case 0x2402ACu: goto label_2402ac;
            case 0x2402E0u: goto label_2402e0;
            case 0x2402F8u: goto label_2402f8;
            case 0x240308u: goto label_240308;
            case 0x240320u: goto label_240320;
            case 0x240328u: goto label_240328;
            case 0x24033Cu: goto label_24033c;
            case 0x240340u: goto label_240340;
            case 0x24036Cu: goto label_24036c;
            case 0x240398u: goto label_240398;
            case 0x240444u: goto label_240444;
            case 0x240458u: goto label_240458;
            case 0x240464u: goto label_240464;
            case 0x240480u: goto label_240480;
            case 0x240498u: goto label_240498;
            case 0x2404A0u: goto label_2404a0;
            case 0x2404C8u: goto label_2404c8;
            case 0x2404D8u: goto label_2404d8;
            case 0x2404E8u: goto label_2404e8;
            case 0x240500u: goto label_240500;
            case 0x240524u: goto label_240524;
            case 0x24056Cu: goto label_24056c;
            case 0x240580u: goto label_240580;
            case 0x2405B0u: goto label_2405b0;
            case 0x2405FCu: goto label_2405fc;
            case 0x240600u: goto label_240600;
            case 0x24060Cu: goto label_24060c;
            case 0x240610u: goto label_240610;
            case 0x24062Cu: goto label_24062c;
            case 0x240654u: goto label_240654;
            case 0x240658u: goto label_240658;
            case 0x240668u: goto label_240668;
            case 0x24069Cu: goto label_24069c;
            case 0x2406B4u: goto label_2406b4;
            case 0x2406C4u: goto label_2406c4;
            case 0x2406DCu: goto label_2406dc;
            case 0x2406E4u: goto label_2406e4;
            case 0x2406F8u: goto label_2406f8;
            case 0x2406FCu: goto label_2406fc;
            case 0x240728u: goto label_240728;
            case 0x240754u: goto label_240754;
            case 0x240800u: goto label_240800;
            case 0x240814u: goto label_240814;
            case 0x240820u: goto label_240820;
            case 0x24083Cu: goto label_24083c;
            case 0x240854u: goto label_240854;
            case 0x24085Cu: goto label_24085c;
            case 0x240884u: goto label_240884;
            case 0x240894u: goto label_240894;
            case 0x2408A0u: goto label_2408a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2408C0u;
}
