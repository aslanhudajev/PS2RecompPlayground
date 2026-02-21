#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <iostream>

// Loop semantics:
// - s0 (GPR16) = current node; s2 (GPR18) = param_2 sentinel.
// - Next sibling = *(s0 + 0x7c). Loop ends when s0==0 (no sibling) OR s0==s2 (sentinel).

#define TRAVERSE_LOG_CTX(tag) do { \
    std::cerr << "[pbTraverseDrawObjects] " << (tag) << " | ctx->pc=0x" << std::hex << ctx->pc \
        << " | s0(GPR16)=0x" << GPR_U32(ctx,16) << " (current_node; loop_ends_if_0_or==s2)" \
        << " s2(GPR18)=0x" << GPR_U32(ctx,18) << " (param2_sentinel)" \
        << " ra(GPR31)=0x" << GPR_U32(ctx,31) << " sp(GPR29)=0x" << GPR_U32(ctx,29) \
        << " s17=0x" << GPR_U32(ctx,17) << " s20(GPR20)=0x" << GPR_U32(ctx,20) \
        << " s21=0x" << GPR_U32(ctx,21) << " s22=0x" << GPR_U32(ctx,22) << std::dec << "\n"; \
} while(0)

// Function: pbTraverseDrawObjects
// Address: 0x2c1048 - 0x2c11cc
void pbTraverseDrawObjects_0x2c1048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c1048u;

    static int s_loopCount = 0;
    static int s_logCap = 200;
    auto log = [&](const char* tag, uint32_t s0_val, uint32_t s2_val) {
        if (s_loopCount++ < 30 || (s_loopCount % 100 == 0 && s_loopCount < s_logCap))
            std::cerr << "[pbTraverseDrawObjects] " << tag << " | s0(GPR16)=0x" << std::hex << s0_val << " (current_node) s2(GPR18)=0x" << s2_val << " (sentinel) ra(GPR31)=0x" << GPR_U32(ctx,31) << " sp(GPR29)=0x" << GPR_U32(ctx,29) << " ctx->pc=0x" << ctx->pc << std::dec << "\n";
    };

label_2c1048:
    // 0x2c1048: 0x27bdff80
    ctx->pc = 0x2c1048u;
    if (s_loopCount <= s_logCap) {
        std::cerr << "[pbTraverseDrawObjects] ENTRY/RECURSE | a0(GPR4)=0x" << std::hex << GPR_U32(ctx,4) << " (param1_node) a1(GPR5)=0x" << GPR_U32(ctx,5) << " (param2_sentinel) a2(GPR6)=0x" << GPR_U32(ctx,6) << " (param3_flags) sp(GPR29)=0x" << GPR_U32(ctx,29) << " ra(GPR31)=0x" << GPR_U32(ctx,31) << " ctx->pc=0x" << ctx->pc << std::dec << "\n";
    }
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c104c: 0xffbf0070
    ctx->pc = 0x2c104cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2c1050: 0xffb60060
    ctx->pc = 0x2c1050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2c1054: 0xffb50050
    ctx->pc = 0x2c1054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2c1058: 0xffb40040
    ctx->pc = 0x2c1058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2c105c: 0xffb30030
    ctx->pc = 0x2c105cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c1060: 0xffb20020
    ctx->pc = 0x2c1060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c1064: 0xffb10010
    ctx->pc = 0x2c1064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c1068: 0xffb00000
    ctx->pc = 0x2c1068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c106c: 0x80802d
    ctx->pc = 0x2c106cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1070: 0xa0902d
    ctx->pc = 0x2c1070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1074: 0x10c00005
    ctx->pc = 0x2C1074u;
    {
        const bool branch_taken_0x2c1074 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C1078u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c1074) {
            ctx->pc = 0x2C108Cu;
            goto label_2c108c;
        }
    }
    ctx->pc = 0x2C107Cu;
    // 0x2c107c: 0x24020002
    ctx->pc = 0x2c107cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c1080: 0x14c20002
    ctx->pc = 0x2C1080u;
    {
        const bool branch_taken_0x2c1080 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x2C1084u;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 16), 116)));
        if (branch_taken_0x2c1080) {
            ctx->pc = 0x2C108Cu;
            goto label_2c108c;
        }
    }
    ctx->pc = 0x2C1088u;
    // 0x2c1088: 0x8e10007c
    ctx->pc = 0x2c1088u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_2c108c:
    // 0x2c108c: 0x12000039
    ctx->pc = 0x2C108Cu;
    {
        const bool branch_taken_0x2c108c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (s_loopCount < s_logCap) {
            std::cerr << "[pbTraverseDrawObjects] 2c108c (s0==0?) | s0(GPR16)=0x" << std::hex << GPR_U32(ctx,16) << " (current_node; if_0_goto_2c1174_exit) s2(GPR18)=0x" << GPR_U32(ctx,18) << " branch_taken=" << branch_taken_0x2c108c << " ctx->pc=0x" << ctx->pc << std::dec << "\n";
        }
        if (branch_taken_0x2c108c) {
            ctx->pc = 0x2C1174u;
            goto label_2c1174;
        }
    }
    ctx->pc = 0x2C1094u;
    // 0x2c1094: 0x40154800
    ctx->pc = 0x2c1094u;
    SET_GPR_U32(ctx, 21, ctx->cop0_count);
    // 0x2c1098: 0x3c13003a
    ctx->pc = 0x2c1098u;
    SET_GPR_U32(ctx, 19, ((uint32_t)58 << 16));
    // 0x2c109c: 0x260102d
    ctx->pc = 0x2c109cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c10a0: 0x24512050
    ctx->pc = 0x2c10a0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 8272));
    // 0x2c10a4: 0x3c160037
    ctx->pc = 0x2c10a4u;
    SET_GPR_U32(ctx, 22, ((uint32_t)55 << 16));
label_2c10a8:
    // 0x2c10a8: 0x1212003e
    ctx->pc = 0x2C10A8u;
    log("loop_top", GPR_U32(ctx, 16), GPR_U32(ctx, 18));
    {
        const bool branch_taken_0x2c10a8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 18));
        ctx->pc = 0x2C10ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2c10a8) {
            if (s_loopCount <= s_logCap) std::cerr << "[pbTraverseDrawObjects] FOUND s0==s2 (sentinel) -> goto 2c11a4 | s0(GPR16)=0x" << std::hex << GPR_U32(ctx,16) << " s2(GPR18)=0x" << GPR_U32(ctx,18) << " ra=0x" << GPR_U32(ctx,31) << " ctx->pc=0x" << ctx->pc << std::dec << "\n";
            ctx->pc = 0x2C11A4u;
            goto label_2c11a4;
        }
    }
    ctx->pc = 0x2C10B0u;
    // 0x2c10b0: 0x8e020060
    ctx->pc = 0x2c10b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2c10b4: 0x30420002
    ctx->pc = 0x2c10b4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x2c10b8: 0x50400003
    ctx->pc = 0x2C10B8u;
    {
        const bool branch_taken_0x2c10b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (s_loopCount <= s_logCap) std::cerr << "[pbTraverseDrawObjects] 2c10b8 flags&2=" << (branch_taken_0x2c10b8 ? "0->process_node" : "set->skip") << " | s0(GPR16)=0x" << std::hex << GPR_U32(ctx,16) << " node+0x60(flags)=read then &2 s2(GPR18)=0x" << GPR_U32(ctx,18) << " ctx->pc=0x" << ctx->pc << std::dec << "\n";
        if (branch_taken_0x2c10b8) {
            ctx->pc = 0x2C10BCu;
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 21));
            ctx->pc = 0x2C10C8u;
            goto label_2c10c8;
        }
    }
    ctx->pc = 0x2C10C0u;
    // 0x2c10c0: 0x1000002a — skip path: load next sibling
    ctx->pc = 0x2C10C0u;
    {
        const bool branch_taken_0x2c10c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C10C4u;
        uint32_t prev_s0 = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 124)));
        if (s_loopCount <= s_logCap) std::cerr << "[pbTraverseDrawObjects] skip_load (next=s0+0x7c) | prev_s0(GPR16)=0x" << std::hex << prev_s0 << " next_s0(GPR16)=0x" << GPR_U32(ctx,16) << " (*(prev_s0+124)) s2(GPR18)=0x" << GPR_U32(ctx,18) << " ctx->pc=0x" << ctx->pc << std::dec << "\n";
        if (branch_taken_0x2c10c0) {
            ctx->pc = 0x2C116Cu;
            goto label_2c116c;
        }
    }
    ctx->pc = 0x2C10C8u;
label_2c10c8:
    // 0x2c10c8: 0xc0b0242
    ctx->pc = 0x2C10C8u;
    SET_GPR_U32(ctx, 31, 0x2C10D0u);
    ctx->pc = 0x2C10CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C0908u;
    {
        const uint32_t __entryPc = ctx->pc;
        PushMatrix_0x2c0908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C10D0u; }
    }
    if (ctx->pc != 0x2C10D0u) {
        TRAVERSE_LOG_CTX("EARLY_RETURN after PushMatrix (expected 0x2C10D0)");
        return;
    }
    ctx->pc = 0x2C10D0u;
    // 0x2c10d0: 0x8e040060
    ctx->pc = 0x2c10d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2c10d4: 0x3c020f00
    ctx->pc = 0x2c10d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)3840 << 16));
    // 0x2c10d8: 0x821024
    ctx->pc = 0x2c10d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c10dc: 0x10400003
    ctx->pc = 0x2C10DCu;
    {
        const bool branch_taken_0x2c10dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c10dc) {
            ctx->pc = 0x2C10ECu;
            goto label_2c10ec;
        }
    }
    ctx->pc = 0x2C10E4u;
    // 0x2c10e4: 0xc0b028c
    ctx->pc = 0x2C10E4u;
    SET_GPR_U32(ctx, 31, 0x2C10ECu);
    ctx->pc = 0x2C0A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        CameraFace_0x2c0a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C10ECu; }
    }
    if (ctx->pc != 0x2C10ECu) { return; }
    ctx->pc = 0x2C10ECu;
label_2c10ec:
    // 0x2c10ec: 0x40034800
    ctx->pc = 0x2c10ecu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x2c10f0: 0x8e220008
    ctx->pc = 0x2c10f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c10f4: 0x621823
    ctx->pc = 0x2c10f4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c10f8: 0x8e622050
    ctx->pc = 0x2c10f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8272)));
    // 0x2c10fc: 0x621821
    ctx->pc = 0x2c10fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c1100: 0xae632050
    ctx->pc = 0x2c1100u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8272), GPR_U32(ctx, 3));
    // 0x2c1104: 0x8e220004
    ctx->pc = 0x2c1104u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c1108: 0x24420001
    ctx->pc = 0x2c1108u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c110c: 0xae220004
    ctx->pc = 0x2c110cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2c1110: 0x8e020060
    ctx->pc = 0x2c1110u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2c1114: 0x30420001
    ctx->pc = 0x2c1114u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2c1118: 0x54400004
    ctx->pc = 0x2C1118u;
    {
        const bool branch_taken_0x2c1118 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c1118) {
            ctx->pc = 0x2C111Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 120)));
            ctx->pc = 0x2C112Cu;
            goto label_2c112c;
        }
    }
    ctx->pc = 0x2C1120u;
    // 0x2c1120: 0xc0b0306
    ctx->pc = 0x2C1120u;
    SET_GPR_U32(ctx, 31, 0x2C1128u);
    ctx->pc = 0x2C1124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C0C18u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbRenderNode_0x2c0c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1128u; }
    }
    if (ctx->pc != 0x2C1128u) { return; }
    ctx->pc = 0x2C1128u;
    // 0x2c1128: 0x8e040078
    ctx->pc = 0x2c1128u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_2c112c:
    // 0x2c112c: 0x10800005
    ctx->pc = 0x2C112Cu;
    {
        const bool branch_taken_0x2c112c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C1130u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c112c) {
            ctx->pc = 0x2C1144u;
            goto label_2c1144;
        }
    }
    ctx->pc = 0x2C1134u;
    // 0x2c1134: 0xc0b0412
    ctx->pc = 0x2C1134u;
    SET_GPR_U32(ctx, 31, 0x2C113Cu);
    ctx->pc = 0x2C1138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    if (s_loopCount <= s_logCap) std::cerr << "[pbTraverseDrawObjects] RECURSE child | a0(GPR4)=0x" << std::hex << GPR_U32(ctx,4) << " a1(GPR5)=0x" << GPR_U32(ctx,5) << " a2(GPR6)=0x" << GPR_U32(ctx,6) << " s0(GPR16)=0x" << GPR_U32(ctx,16) << " s2(GPR18)=0x" << GPR_U32(ctx,18) << " ra=0x" << GPR_U32(ctx,31) << " ctx->pc=0x" << ctx->pc << " (goto 2c1048)\n" << std::dec;
    ctx->pc = 0x2C1048u;
    goto label_2c1048;
    ctx->pc = 0x2C113Cu;
label_2c113c:
    // 0x2c113c: 0x14400019
    ctx->pc = 0x2C113Cu;
    {
        const bool branch_taken_0x2c113c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C1140u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2c113c) {
            ctx->pc = 0x2C11A4u;
            goto label_2c11a4;
        }
    }
    ctx->pc = 0x2C1144u;
label_2c1144:
    // 0x2c1144: 0xc0b0286
    ctx->pc = 0x2C1144u;
    SET_GPR_U32(ctx, 31, 0x2C114Cu);
    ctx->pc = 0x2C0A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        PopMatrix_0x2c0a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C114Cu; }
    }
    if (ctx->pc != 0x2C114Cu) {
        TRAVERSE_LOG_CTX("EARLY_RETURN after PopMatrix (expected 0x2C114C)");
        return;
    }
    ctx->pc = 0x2C114Cu;
    // 0x2c114c: 0x3c03003d
    ctx->pc = 0x2c114cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
    // 0x2c1150: 0x8c62b800
    ctx->pc = 0x2c1150u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294948864)));
    // 0x2c1154: 0x10400005
    ctx->pc = 0x2C1154u;
    {
        const bool branch_taken_0x2c1154 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        uint32_t cur_s0 = GPR_U32(ctx, 16);
        ctx->pc = 0x2C1158u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 124)));
        if (s_loopCount <= s_logCap) std::cerr << "[pbTraverseDrawObjects] after_PopMatrix (next=s0+0x7c) | cur_s0(GPR16)=0x" << std::hex << cur_s0 << " next_s0(GPR16)=0x" << GPR_U32(ctx,16) << " s2(GPR18)=0x" << GPR_U32(ctx,18) << " clear_alpha=" << branch_taken_0x2c1154 << " ctx->pc=0x" << ctx->pc << std::dec << "\n";
        if (branch_taken_0x2c1154) {
            ctx->pc = 0x2C116Cu;
            goto label_2c116c;
        }
    }
    ctx->pc = 0x2C115Cu;
    // 0x2c115c: 0x3c01bf80
    ctx->pc = 0x2c115cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2c1160: 0x44810000
    ctx->pc = 0x2c1160u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c1164: 0xe6c028dc
    ctx->pc = 0x2c1164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 10460), bits); }
    // 0x2c1168: 0xac60b800
    ctx->pc = 0x2c1168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294948864), GPR_U32(ctx, 0));
label_2c116c:
    // 0x2c116c: 0x1600ffce
    ctx->pc = 0x2C116Cu;
    {
        const bool branch_taken_0x2c116c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (s_loopCount <= s_logCap) std::cerr << "[pbTraverseDrawObjects] 2c116c (s0!=0 -> loop_back) | s0(GPR16)=0x" << std::hex << GPR_U32(ctx,16) << " (if_0_fallthrough_exit) s2(GPR18)=0x" << GPR_U32(ctx,18) << " loop_back=" << branch_taken_0x2c116c << " ctx->pc=0x" << ctx->pc << std::dec << "\n";
        if (branch_taken_0x2c116c) {
            ctx->pc = 0x2C10A8u;
            goto label_2c10a8;
        }
    }
    ctx->pc = 0x2C1174u;
label_2c1174:
    // 0x2c1174: 0x5280000b — outer exit: s0 was 0 at 2c108c
    ctx->pc = 0x2C1174u;
    if (s_loopCount <= s_logCap) std::cerr << "[pbTraverseDrawObjects] 2c1174 outer_exit (s0 was 0 at 2c108c) | s20(GPR20)=0x" << std::hex << GPR_U32(ctx,20) << " s0(GPR16)=0x" << GPR_U32(ctx,16) << " s2(GPR18)=0x" << GPR_U32(ctx,18) << " ra=0x" << GPR_U32(ctx,31) << " sp=0x" << GPR_U32(ctx,29) << " ctx->pc=0x" << ctx->pc << std::dec << "\n";
    {
        const bool branch_taken_0x2c1174 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c1174) {
            ctx->pc = 0x2C1178u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2C11A4u;
            goto label_2c11a4;
        }
    }
    ctx->pc = 0x2C117Cu;
    // 0x2c117c: 0xc0b0286
    ctx->pc = 0x2C117Cu;
    SET_GPR_U32(ctx, 31, 0x2C1184u);
    ctx->pc = 0x2C0A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        PopMatrix_0x2c0a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1184u; }
    }
    if (ctx->pc != 0x2C1184u) { return; }
    ctx->pc = 0x2C1184u;
    // 0x2c1184: 0x280202d
    ctx->pc = 0x2c1184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1188: 0x240282d
    ctx->pc = 0x2c1188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c118c: 0xc0b0412
    ctx->pc = 0x2C118Cu;
    SET_GPR_U32(ctx, 31, 0x2C1194u);
    ctx->pc = 0x2C1190u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    if (s_loopCount <= s_logCap) std::cerr << "[pbTraverseDrawObjects] RECURSE param3=2 | a0(GPR4)=0x" << std::hex << GPR_U32(ctx,4) << " a1(GPR5)=0x" << GPR_U32(ctx,5) << " a2(GPR6)=0x" << GPR_U32(ctx,6) << " s0=0x" << GPR_U32(ctx,16) << " s2=0x" << GPR_U32(ctx,18) << " ra=0x" << GPR_U32(ctx,31) << " ctx->pc=0x" << ctx->pc << " (goto 2c1048)\n" << std::dec;
    ctx->pc = 0x2C1048u;
    goto label_2c1048;
    ctx->pc = 0x2C1194u;
label_2c1194:
    // 0x2c1194: 0x40182d
    ctx->pc = 0x2c1194u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1198: 0x14600002
    ctx->pc = 0x2C1198u;
    {
        const bool branch_taken_0x2c1198 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C119Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2c1198) {
            ctx->pc = 0x2C11A4u;
            goto label_2c11a4;
        }
    }
    ctx->pc = 0x2C11A0u;
    // 0x2c11a0: 0x102d
    ctx->pc = 0x2c11a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c11a4:
    // 0x2c11a4: 0xdfbf0070
    ctx->pc = 0x2c11a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c11a8: 0xdfb60060
    ctx->pc = 0x2c11a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c11ac: 0xdfb50050
    ctx->pc = 0x2c11acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c11b0: 0xdfb40040
    ctx->pc = 0x2c11b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c11b4: 0xdfb30030
    ctx->pc = 0x2c11b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c11b8: 0xdfb20020
    ctx->pc = 0x2c11b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c11bc: 0xdfb10010
    ctx->pc = 0x2c11bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c11c0: 0xdfb00000
    ctx->pc = 0x2c11c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c11c4: 0x3e00008
    ctx->pc = 0x2C11C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        if (s_loopCount <= s_logCap) std::cerr << "[pbTraverseDrawObjects] epilogue | jumpTarget=ra(GPR31)=0x" << std::hex << jumpTarget << " v0(GPR2)=0x" << GPR_U32(ctx,2) << " sp(GPR29)=0x" << GPR_U32(ctx,29) << " sp_after=0x" << (GPR_U32(ctx,29) + 128) << " s0(GPR16)=0x" << GPR_U32(ctx,16) << " s2(GPR18)=0x" << GPR_U32(ctx,18) << " ctx->pc=0x" << ctx->pc << std::dec << "\n";
        ctx->pc = 0x2C11C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C1048u: goto label_2c1048;
            case 0x2C108Cu: goto label_2c108c;
            case 0x2C10A8u: goto label_2c10a8;
            case 0x2C10C8u: goto label_2c10c8;
            case 0x2C10ECu: goto label_2c10ec;
            case 0x2C112Cu: goto label_2c112c;
            case 0x2C113Cu: goto label_2c113c;
            case 0x2C1144u: goto label_2c1144;
            case 0x2C116Cu: goto label_2c116c;
            case 0x2C1174u: goto label_2c1174;
            case 0x2C1194u: goto label_2c1194;
            case 0x2C11A4u: goto label_2c11a4;
            default: break;
        }
        std::cerr << "[pbTraverseDrawObjects] RETURN_TO_CALLER | ra(GPR31)=0x" << std::hex << jumpTarget << " v0(GPR2)=0x" << GPR_U32(ctx,2) << " s0(GPR16)=0x" << GPR_U32(ctx,16) << " s2(GPR18)=0x" << GPR_U32(ctx,18) << " sp(GPR29)=0x" << GPR_U32(ctx,29) << " ctx->pc=0x" << ctx->pc << std::dec << "\n";
        return;
    }
    ctx->pc = 0x2C11CCu;
}
