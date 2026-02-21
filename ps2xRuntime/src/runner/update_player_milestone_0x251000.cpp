#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: update_player_milestone
// Address: 0x251000 - 0x25124c
void update_player_milestone_0x251000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x251000u;

    // 0x251000: 0x27bdff60
    ctx->pc = 0x251000u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x251004: 0xffbf0090
    ctx->pc = 0x251004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x251008: 0xffb60080
    ctx->pc = 0x251008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x25100c: 0xffb50070
    ctx->pc = 0x25100cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x251010: 0xffb40060
    ctx->pc = 0x251010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x251014: 0xffb30050
    ctx->pc = 0x251014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x251018: 0xffb20040
    ctx->pc = 0x251018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x25101c: 0xffb10030
    ctx->pc = 0x25101cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x251020: 0xffb00020
    ctx->pc = 0x251020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x251024: 0x80982d
    ctx->pc = 0x251024u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251028: 0x8e640000
    ctx->pc = 0x251028u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25102c: 0xc08c612
    ctx->pc = 0x25102Cu;
    SET_GPR_U32(ctx, 31, 0x251034u);
    ctx->pc = 0x251030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231848u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerPos_0x231848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251034u; }
    }
    if (ctx->pc != 0x251034u) { return; }
    ctx->pc = 0x251034u;
    // 0x251034: 0x3c020034
    ctx->pc = 0x251034u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x251038: 0x8c42c380
    ctx->pc = 0x251038u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294951808)));
    // 0x25103c: 0x18400052
    ctx->pc = 0x25103Cu;
    {
        const bool branch_taken_0x25103c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x251040u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25103c) {
            ctx->pc = 0x251188u;
            goto label_251188;
        }
    }
    ctx->pc = 0x251044u;
    // 0x251044: 0x3c020034
    ctx->pc = 0x251044u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x251048: 0x24568b80
    ctx->pc = 0x251048u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294937472));
    // 0x25104c: 0x24020070
    ctx->pc = 0x25104cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 112));
label_251050:
    // 0x251050: 0x2421818
    ctx->pc = 0x251050u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x251054: 0x761021
    ctx->pc = 0x251054u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x251058: 0xc7a10000
    ctx->pc = 0x251058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25105c: 0xc4400030
    ctx->pc = 0x25105cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251060: 0x46000b01
    ctx->pc = 0x251060u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x251064: 0xe7ac0010
    ctx->pc = 0x251064u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x251068: 0xc7a10004
    ctx->pc = 0x251068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25106c: 0xc4400034
    ctx->pc = 0x25106cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251070: 0x46000841
    ctx->pc = 0x251070u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x251074: 0xe7a10014
    ctx->pc = 0x251074u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x251078: 0xc7a20008
    ctx->pc = 0x251078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25107c: 0xc4400038
    ctx->pc = 0x25107cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251080: 0x46001341
    ctx->pc = 0x251080u;
    ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x251084: 0x46000845
    ctx->pc = 0x251084u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x251088: 0x3c014060
    ctx->pc = 0x251088u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16480 << 16));
    // 0x25108c: 0x44810000
    ctx->pc = 0x25108cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x251090: 0x46000834
    ctx->pc = 0x251090u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251094: 0x0
    ctx->pc = 0x251094u;
    // NOP
    // 0x251098: 0x45000035
    ctx->pc = 0x251098u;
    {
        const bool branch_taken_0x251098 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25109Cu;
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        if (branch_taken_0x251098) {
            ctx->pc = 0x251170u;
            goto label_251170;
        }
    }
    ctx->pc = 0x2510A0u;
    // 0x2510a0: 0xc0b5c34
    ctx->pc = 0x2510A0u;
    SET_GPR_U32(ctx, 31, 0x2510A8u);
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2510A8u; }
    }
    if (ctx->pc != 0x2510A8u) { return; }
    ctx->pc = 0x2510A8u;
    // 0x2510a8: 0x3c014090
    ctx->pc = 0x2510a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16528 << 16));
    // 0x2510ac: 0x44810800
    ctx->pc = 0x2510acu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2510b0: 0x46010034
    ctx->pc = 0x2510b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2510b4: 0x0
    ctx->pc = 0x2510b4u;
    // NOP
    // 0x2510b8: 0x4502002e
    ctx->pc = 0x2510B8u;
    {
        const bool branch_taken_0x2510b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2510b8) {
            ctx->pc = 0x2510BCu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x251174u;
            goto label_251174;
        }
    }
    ctx->pc = 0x2510C0u;
    // 0x2510c0: 0x8e620950
    ctx->pc = 0x2510c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 2384)));
    // 0x2510c4: 0x4400003
    ctx->pc = 0x2510C4u;
    {
        const bool branch_taken_0x2510c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2510c4) {
            ctx->pc = 0x2510D4u;
            goto label_2510d4;
        }
    }
    ctx->pc = 0x2510CCu;
    // 0x2510cc: 0x50520029
    ctx->pc = 0x2510CCu;
    {
        const bool branch_taken_0x2510cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        if (branch_taken_0x2510cc) {
            ctx->pc = 0x2510D0u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x251174u;
            goto label_251174;
        }
    }
    ctx->pc = 0x2510D4u;
label_2510d4:
    // 0x2510d4: 0xc094098
    ctx->pc = 0x2510D4u;
    SET_GPR_U32(ctx, 31, 0x2510DCu);
    ctx->pc = 0x2510D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x250260u;
    {
        const uint32_t __entryPc = ctx->pc;
        ShowMilestones_0x250260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2510DCu; }
    }
    if (ctx->pc != 0x2510DCu) { return; }
    ctx->pc = 0x2510DCu;
    // 0x2510dc: 0x10400019
    ctx->pc = 0x2510DCu;
    {
        const bool branch_taken_0x2510dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2510E0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x2510dc) {
            ctx->pc = 0x251144u;
            goto label_251144;
        }
    }
    ctx->pc = 0x2510E4u;
    // 0x2510e4: 0x8e620000
    ctx->pc = 0x2510e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2510e8: 0x14400017
    ctx->pc = 0x2510E8u;
    {
        const bool branch_taken_0x2510e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2510ECu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 2384));
        if (branch_taken_0x2510e8) {
            ctx->pc = 0x251148u;
            goto label_251148;
        }
    }
    ctx->pc = 0x2510F0u;
    // 0x2510f0: 0x802d
    ctx->pc = 0x2510f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2510f4: 0x26710950
    ctx->pc = 0x2510f4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 19), 2384));
    // 0x2510f8: 0x3c020034
    ctx->pc = 0x2510f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2510fc: 0x24558b80
    ctx->pc = 0x2510fcu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294937472));
    // 0x251100: 0x24140070
    ctx->pc = 0x251100u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 112));
    // 0x251104: 0x101080
    ctx->pc = 0x251104u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_251108:
    // 0x251108: 0x2221021
    ctx->pc = 0x251108u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25110c: 0x8c420000
    ctx->pc = 0x25110cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x251110: 0x4400007
    ctx->pc = 0x251110u;
    {
        const bool branch_taken_0x251110 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x251114u;
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x251110) {
            ctx->pc = 0x251130u;
            goto label_251130;
        }
    }
    ctx->pc = 0x251118u;
    // 0x251118: 0x751021
    ctx->pc = 0x251118u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x25111c: 0x8c440060
    ctx->pc = 0x25111cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x251120: 0x10800003
    ctx->pc = 0x251120u;
    {
        const bool branch_taken_0x251120 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x251124u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x251120) {
            ctx->pc = 0x251130u;
            goto label_251130;
        }
    }
    ctx->pc = 0x251128u;
    // 0x251128: 0xc0b41e4
    ctx->pc = 0x251128u;
    SET_GPR_U32(ctx, 31, 0x251130u);
    ctx->pc = 0x25112Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251130u; }
    }
    if (ctx->pc != 0x251130u) { return; }
    ctx->pc = 0x251130u;
label_251130:
    // 0x251130: 0x26100001
    ctx->pc = 0x251130u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x251134: 0x2a020005
    ctx->pc = 0x251134u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 5));
    // 0x251138: 0x1440fff3
    ctx->pc = 0x251138u;
    {
        const bool branch_taken_0x251138 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25113Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x251138) {
            ctx->pc = 0x251108u;
            goto label_251108;
        }
    }
    ctx->pc = 0x251140u;
    // 0x251140: 0x24100004
    ctx->pc = 0x251140u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4));
label_251144:
    // 0x251144: 0x26650950
    ctx->pc = 0x251144u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 2384));
label_251148:
    // 0x251148: 0x101880
    ctx->pc = 0x251148u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x25114c: 0xa31821
    ctx->pc = 0x25114cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x251150: 0x2604ffff
    ctx->pc = 0x251150u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x251154: 0x41080
    ctx->pc = 0x251154u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x251158: 0xa21021
    ctx->pc = 0x251158u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25115c: 0x8c420000
    ctx->pc = 0x25115cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x251160: 0x80802d
    ctx->pc = 0x251160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251164: 0x1e00fff8
    ctx->pc = 0x251164u;
    {
        const bool branch_taken_0x251164 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x251168u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x251164) {
            ctx->pc = 0x251148u;
            goto label_251148;
        }
    }
    ctx->pc = 0x25116Cu;
    // 0x25116c: 0xae720950
    ctx->pc = 0x25116cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2384), GPR_U32(ctx, 18));
label_251170:
    // 0x251170: 0x26520001
    ctx->pc = 0x251170u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_251174:
    // 0x251174: 0x3c020034
    ctx->pc = 0x251174u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x251178: 0x8c42c380
    ctx->pc = 0x251178u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294951808)));
    // 0x25117c: 0x242102a
    ctx->pc = 0x25117cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x251180: 0x1440ffb3
    ctx->pc = 0x251180u;
    {
        const bool branch_taken_0x251180 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x251184u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 112));
        if (branch_taken_0x251180) {
            ctx->pc = 0x251050u;
            goto label_251050;
        }
    }
    ctx->pc = 0x251188u;
label_251188:
    // 0x251188: 0xc094098
    ctx->pc = 0x251188u;
    SET_GPR_U32(ctx, 31, 0x251190u);
    ctx->pc = 0x25118Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x250260u;
    {
        const uint32_t __entryPc = ctx->pc;
        ShowMilestones_0x250260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251190u; }
    }
    if (ctx->pc != 0x251190u) { return; }
    ctx->pc = 0x251190u;
    // 0x251190: 0x10400025
    ctx->pc = 0x251190u;
    {
        const bool branch_taken_0x251190 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x251194u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x251190) {
            ctx->pc = 0x251228u;
            goto label_251228;
        }
    }
    ctx->pc = 0x251198u;
    // 0x251198: 0x8e620000
    ctx->pc = 0x251198u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25119c: 0x54400023
    ctx->pc = 0x25119Cu;
    {
        const bool branch_taken_0x25119c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25119c) {
            ctx->pc = 0x2511A0u;
            SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->pc = 0x25122Cu;
            goto label_25122c;
        }
    }
    ctx->pc = 0x2511A4u;
    // 0x2511a4: 0x802d
    ctx->pc = 0x2511a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2511a8: 0x26730950
    ctx->pc = 0x2511a8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 2384));
    // 0x2511ac: 0x3c020034
    ctx->pc = 0x2511acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2511b0: 0x24528b80
    ctx->pc = 0x2511b0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294937472));
    // 0x2511b4: 0x24110070
    ctx->pc = 0x2511b4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 112));
    // 0x2511b8: 0x3c140032
    ctx->pc = 0x2511b8u;
    SET_GPR_U32(ctx, 20, ((uint32_t)50 << 16));
    // 0x2511bc: 0x101080
    ctx->pc = 0x2511bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_2511c0:
    // 0x2511c0: 0x2621021
    ctx->pc = 0x2511c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2511c4: 0x8c430000
    ctx->pc = 0x2511c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2511c8: 0x4600012
    ctx->pc = 0x2511C8u;
    {
        const bool branch_taken_0x2511c8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2511CCu;
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2511c8) {
            ctx->pc = 0x251214u;
            goto label_251214;
        }
    }
    ctx->pc = 0x2511D0u;
    // 0x2511d0: 0x921021
    ctx->pc = 0x2511d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x2511d4: 0x8c440060
    ctx->pc = 0x2511d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2511d8: 0x1080000e
    ctx->pc = 0x2511D8u;
    {
        const bool branch_taken_0x2511d8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2511DCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 1968)));
        if (branch_taken_0x2511d8) {
            ctx->pc = 0x251214u;
            goto label_251214;
        }
    }
    ctx->pc = 0x2511E0u;
    // 0x2511e0: 0x2021007
    ctx->pc = 0x2511e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x2511e4: 0x30420001
    ctx->pc = 0x2511e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2511e8: 0x10400005
    ctx->pc = 0x2511E8u;
    {
        const bool branch_taken_0x2511e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2511ECu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2511e8) {
            ctx->pc = 0x251200u;
            goto label_251200;
        }
    }
    ctx->pc = 0x2511F0u;
    // 0x2511f0: 0xc0b41e4
    ctx->pc = 0x2511F0u;
    SET_GPR_U32(ctx, 31, 0x2511F8u);
    ctx->pc = 0x2511F4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2511F8u; }
    }
    if (ctx->pc != 0x2511F8u) { return; }
    ctx->pc = 0x2511F8u;
    // 0x2511f8: 0x10000007
    ctx->pc = 0x2511F8u;
    {
        const bool branch_taken_0x2511f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2511FCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x2511f8) {
            ctx->pc = 0x251218u;
            goto label_251218;
        }
    }
    ctx->pc = 0x251200u;
label_251200:
    // 0x251200: 0x712018
    ctx->pc = 0x251200u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x251204: 0x921021
    ctx->pc = 0x251204u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x251208: 0x8c440060
    ctx->pc = 0x251208u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x25120c: 0xc0b41b8
    ctx->pc = 0x25120Cu;
    SET_GPR_U32(ctx, 31, 0x251214u);
    ctx->pc = 0x251210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251214u; }
    }
    if (ctx->pc != 0x251214u) { return; }
    ctx->pc = 0x251214u;
label_251214:
    // 0x251214: 0x26100001
    ctx->pc = 0x251214u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_251218:
    // 0x251218: 0x2a020005
    ctx->pc = 0x251218u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 5));
    // 0x25121c: 0x1440ffe8
    ctx->pc = 0x25121Cu;
    {
        const bool branch_taken_0x25121c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x251220u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x25121c) {
            ctx->pc = 0x2511C0u;
            goto label_2511c0;
        }
    }
    ctx->pc = 0x251224u;
    // 0x251224: 0xdfbf0090
    ctx->pc = 0x251224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_251228:
    // 0x251228: 0xdfb60080
    ctx->pc = 0x251228u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_25122c:
    // 0x25122c: 0xdfb50070
    ctx->pc = 0x25122cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x251230: 0xdfb40060
    ctx->pc = 0x251230u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x251234: 0xdfb30050
    ctx->pc = 0x251234u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x251238: 0xdfb20040
    ctx->pc = 0x251238u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25123c: 0xdfb10030
    ctx->pc = 0x25123cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x251240: 0xdfb00020
    ctx->pc = 0x251240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251244: 0x3e00008
    ctx->pc = 0x251244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251248u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x251050u: goto label_251050;
            case 0x2510D4u: goto label_2510d4;
            case 0x251108u: goto label_251108;
            case 0x251130u: goto label_251130;
            case 0x251144u: goto label_251144;
            case 0x251148u: goto label_251148;
            case 0x251170u: goto label_251170;
            case 0x251174u: goto label_251174;
            case 0x251188u: goto label_251188;
            case 0x2511C0u: goto label_2511c0;
            case 0x251200u: goto label_251200;
            case 0x251214u: goto label_251214;
            case 0x251218u: goto label_251218;
            case 0x251228u: goto label_251228;
            case 0x25122Cu: goto label_25122c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25124Cu;
}
