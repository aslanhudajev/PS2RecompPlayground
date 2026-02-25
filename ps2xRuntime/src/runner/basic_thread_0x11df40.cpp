#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: basic_thread
// Address: 0x11df40 - 0x11e240
void basic_thread_0x11df40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("basic_thread_0x11df40");
#endif

    ctx->pc = 0x11df40u;

label_11df40:
    // 0x11df40: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x11df40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
label_11df44:
    // 0x11df44: 0xffb00200  sd          $s0, 0x200($sp)
    ctx->pc = 0x11df44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 16));
label_11df48:
    // 0x11df48: 0xffbf0238  sd          $ra, 0x238($sp)
    ctx->pc = 0x11df48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 31));
label_11df4c:
    // 0x11df4c: 0xffb10208  sd          $s1, 0x208($sp)
    ctx->pc = 0x11df4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 17));
label_11df50:
    // 0x11df50: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x11df50u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
label_11df54:
    // 0x11df54: 0xffb20210  sd          $s2, 0x210($sp)
    ctx->pc = 0x11df54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 18));
label_11df58:
    // 0x11df58: 0x27b20018  addiu       $s2, $sp, 0x18
    ctx->pc = 0x11df58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_11df5c:
    // 0x11df5c: 0xffb30218  sd          $s3, 0x218($sp)
    ctx->pc = 0x11df5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 536), GPR_U64(ctx, 19));
label_11df60:
    // 0x11df60: 0x3c130022  lui         $s3, 0x22
    ctx->pc = 0x11df60u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
label_11df64:
    // 0x11df64: 0xffb40220  sd          $s4, 0x220($sp)
    ctx->pc = 0x11df64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 20));
label_11df68:
    // 0x11df68: 0x27b40008  addiu       $s4, $sp, 0x8
    ctx->pc = 0x11df68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_11df6c:
    // 0x11df6c: 0xffb50228  sd          $s5, 0x228($sp)
    ctx->pc = 0x11df6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 552), GPR_U64(ctx, 21));
label_11df70:
    // 0x11df70: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x11df70u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
label_11df74:
    // 0x11df74: 0xffb60230  sd          $s6, 0x230($sp)
    ctx->pc = 0x11df74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 22));
label_11df78:
    // 0x11df78: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x11df78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_11df7c:
    // 0x11df7c: 0x0  nop
    ctx->pc = 0x11df7cu;
    // NOP
label_11df80:
    // 0x11df80: 0xc049358  jal         func_124D60
label_11df84:
    if (ctx->pc == 0x11DF84u) {
        ctx->pc = 0x11DF88u;
        goto label_11df88;
    }
    ctx->pc = 0x11DF80u;
    SET_GPR_U32(ctx, 31, 0x11DF88u);
    ctx->pc = 0x124D60u;
    if (runtime->hasFunction(0x124D60u)) {
        auto targetFn = runtime->lookupFunction(0x124D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DF88u; }
        if (ctx->pc != 0x11DF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcCoreWaitSubs_0x124d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DF88u; }
        if (ctx->pc != 0x11DF88u) { return; }
    }
    ctx->pc = 0x11DF88u;
label_11df88:
    // 0x11df88: 0x26237300  addiu       $v1, $s1, 0x7300
    ctx->pc = 0x11df88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 29440));
label_11df8c:
    // 0x11df8c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x11df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_11df90:
    // 0x11df90: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x11df90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_11df94:
    // 0x11df94: 0x2c430063  sltiu       $v1, $v0, 0x63
    ctx->pc = 0x11df94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
label_11df98:
    // 0x11df98: 0x506000a5  beql        $v1, $zero, . + 4 + (0xA5 << 2)
label_11df9c:
    if (ctx->pc == 0x11DF9Cu) {
        ctx->pc = 0x11DF9Cu;
            // 0x11df9c: 0x26627820  addiu       $v0, $s3, 0x7820 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 30752));
        ctx->pc = 0x11DFA0u;
        goto label_11dfa0;
    }
    ctx->pc = 0x11DF98u;
    {
        const bool branch_taken_0x11df98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11df98) {
            ctx->pc = 0x11DF9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11DF98u;
            // 0x11df9c: 0x26627820  addiu       $v0, $s3, 0x7820 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 30752));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11E230u;
            goto label_11e230;
        }
    }
    ctx->pc = 0x11DFA0u;
label_11dfa0:
    // 0x11dfa0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11dfa4:
    // 0x11dfa4: 0x26a3eeb0  addiu       $v1, $s5, -0x1150
    ctx->pc = 0x11dfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294962864));
label_11dfa8:
    // 0x11dfa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_11dfac:
    // 0x11dfac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11dfacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11dfb0:
    // 0x11dfb0: 0x800008  jr          $a0
label_11dfb4:
    if (ctx->pc == 0x11DFB4u) {
        ctx->pc = 0x11DFB8u;
        goto label_11dfb8;
    }
    ctx->pc = 0x11DFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11DF40u: goto label_11df40;
            case 0x11DF44u: goto label_11df44;
            case 0x11DF48u: goto label_11df48;
            case 0x11DF4Cu: goto label_11df4c;
            case 0x11DF50u: goto label_11df50;
            case 0x11DF54u: goto label_11df54;
            case 0x11DF58u: goto label_11df58;
            case 0x11DF5Cu: goto label_11df5c;
            case 0x11DF60u: goto label_11df60;
            case 0x11DF64u: goto label_11df64;
            case 0x11DF68u: goto label_11df68;
            case 0x11DF6Cu: goto label_11df6c;
            case 0x11DF70u: goto label_11df70;
            case 0x11DF74u: goto label_11df74;
            case 0x11DF78u: goto label_11df78;
            case 0x11DF7Cu: goto label_11df7c;
            case 0x11DF80u: goto label_11df80;
            case 0x11DF84u: goto label_11df84;
            case 0x11DF88u: goto label_11df88;
            case 0x11DF8Cu: goto label_11df8c;
            case 0x11DF90u: goto label_11df90;
            case 0x11DF94u: goto label_11df94;
            case 0x11DF98u: goto label_11df98;
            case 0x11DF9Cu: goto label_11df9c;
            case 0x11DFA0u: goto label_11dfa0;
            case 0x11DFA4u: goto label_11dfa4;
            case 0x11DFA8u: goto label_11dfa8;
            case 0x11DFACu: goto label_11dfac;
            case 0x11DFB0u: goto label_11dfb0;
            case 0x11DFB4u: goto label_11dfb4;
            case 0x11DFB8u: goto label_11dfb8;
            case 0x11DFBCu: goto label_11dfbc;
            case 0x11DFC0u: goto label_11dfc0;
            case 0x11DFC4u: goto label_11dfc4;
            case 0x11DFC8u: goto label_11dfc8;
            case 0x11DFCCu: goto label_11dfcc;
            case 0x11DFD0u: goto label_11dfd0;
            case 0x11DFD4u: goto label_11dfd4;
            case 0x11DFD8u: goto label_11dfd8;
            case 0x11DFDCu: goto label_11dfdc;
            case 0x11DFE0u: goto label_11dfe0;
            case 0x11DFE4u: goto label_11dfe4;
            case 0x11DFE8u: goto label_11dfe8;
            case 0x11DFECu: goto label_11dfec;
            case 0x11DFF0u: goto label_11dff0;
            case 0x11DFF4u: goto label_11dff4;
            case 0x11DFF8u: goto label_11dff8;
            case 0x11DFFCu: goto label_11dffc;
            case 0x11E000u: goto label_11e000;
            case 0x11E004u: goto label_11e004;
            case 0x11E008u: goto label_11e008;
            case 0x11E00Cu: goto label_11e00c;
            case 0x11E010u: goto label_11e010;
            case 0x11E014u: goto label_11e014;
            case 0x11E018u: goto label_11e018;
            case 0x11E01Cu: goto label_11e01c;
            case 0x11E020u: goto label_11e020;
            case 0x11E024u: goto label_11e024;
            case 0x11E028u: goto label_11e028;
            case 0x11E02Cu: goto label_11e02c;
            case 0x11E030u: goto label_11e030;
            case 0x11E034u: goto label_11e034;
            case 0x11E038u: goto label_11e038;
            case 0x11E03Cu: goto label_11e03c;
            case 0x11E040u: goto label_11e040;
            case 0x11E044u: goto label_11e044;
            case 0x11E048u: goto label_11e048;
            case 0x11E04Cu: goto label_11e04c;
            case 0x11E050u: goto label_11e050;
            case 0x11E054u: goto label_11e054;
            case 0x11E058u: goto label_11e058;
            case 0x11E05Cu: goto label_11e05c;
            case 0x11E060u: goto label_11e060;
            case 0x11E064u: goto label_11e064;
            case 0x11E068u: goto label_11e068;
            case 0x11E06Cu: goto label_11e06c;
            case 0x11E070u: goto label_11e070;
            case 0x11E074u: goto label_11e074;
            case 0x11E078u: goto label_11e078;
            case 0x11E07Cu: goto label_11e07c;
            case 0x11E080u: goto label_11e080;
            case 0x11E084u: goto label_11e084;
            case 0x11E088u: goto label_11e088;
            case 0x11E08Cu: goto label_11e08c;
            case 0x11E090u: goto label_11e090;
            case 0x11E094u: goto label_11e094;
            case 0x11E098u: goto label_11e098;
            case 0x11E09Cu: goto label_11e09c;
            case 0x11E0A0u: goto label_11e0a0;
            case 0x11E0A4u: goto label_11e0a4;
            case 0x11E0A8u: goto label_11e0a8;
            case 0x11E0ACu: goto label_11e0ac;
            case 0x11E0B0u: goto label_11e0b0;
            case 0x11E0B4u: goto label_11e0b4;
            case 0x11E0B8u: goto label_11e0b8;
            case 0x11E0BCu: goto label_11e0bc;
            case 0x11E0C0u: goto label_11e0c0;
            case 0x11E0C4u: goto label_11e0c4;
            case 0x11E0C8u: goto label_11e0c8;
            case 0x11E0CCu: goto label_11e0cc;
            case 0x11E0D0u: goto label_11e0d0;
            case 0x11E0D4u: goto label_11e0d4;
            case 0x11E0D8u: goto label_11e0d8;
            case 0x11E0DCu: goto label_11e0dc;
            case 0x11E0E0u: goto label_11e0e0;
            case 0x11E0E4u: goto label_11e0e4;
            case 0x11E0E8u: goto label_11e0e8;
            case 0x11E0ECu: goto label_11e0ec;
            case 0x11E0F0u: goto label_11e0f0;
            case 0x11E0F4u: goto label_11e0f4;
            case 0x11E0F8u: goto label_11e0f8;
            case 0x11E0FCu: goto label_11e0fc;
            case 0x11E100u: goto label_11e100;
            case 0x11E104u: goto label_11e104;
            case 0x11E108u: goto label_11e108;
            case 0x11E10Cu: goto label_11e10c;
            case 0x11E110u: goto label_11e110;
            case 0x11E114u: goto label_11e114;
            case 0x11E118u: goto label_11e118;
            case 0x11E11Cu: goto label_11e11c;
            case 0x11E120u: goto label_11e120;
            case 0x11E124u: goto label_11e124;
            case 0x11E128u: goto label_11e128;
            case 0x11E12Cu: goto label_11e12c;
            case 0x11E130u: goto label_11e130;
            case 0x11E134u: goto label_11e134;
            case 0x11E138u: goto label_11e138;
            case 0x11E13Cu: goto label_11e13c;
            case 0x11E140u: goto label_11e140;
            case 0x11E144u: goto label_11e144;
            case 0x11E148u: goto label_11e148;
            case 0x11E14Cu: goto label_11e14c;
            case 0x11E150u: goto label_11e150;
            case 0x11E154u: goto label_11e154;
            case 0x11E158u: goto label_11e158;
            case 0x11E15Cu: goto label_11e15c;
            case 0x11E160u: goto label_11e160;
            case 0x11E164u: goto label_11e164;
            case 0x11E168u: goto label_11e168;
            case 0x11E16Cu: goto label_11e16c;
            case 0x11E170u: goto label_11e170;
            case 0x11E174u: goto label_11e174;
            case 0x11E178u: goto label_11e178;
            case 0x11E17Cu: goto label_11e17c;
            case 0x11E180u: goto label_11e180;
            case 0x11E184u: goto label_11e184;
            case 0x11E188u: goto label_11e188;
            case 0x11E18Cu: goto label_11e18c;
            case 0x11E190u: goto label_11e190;
            case 0x11E194u: goto label_11e194;
            case 0x11E198u: goto label_11e198;
            case 0x11E19Cu: goto label_11e19c;
            case 0x11E1A0u: goto label_11e1a0;
            case 0x11E1A4u: goto label_11e1a4;
            case 0x11E1A8u: goto label_11e1a8;
            case 0x11E1ACu: goto label_11e1ac;
            case 0x11E1B0u: goto label_11e1b0;
            case 0x11E1B4u: goto label_11e1b4;
            case 0x11E1B8u: goto label_11e1b8;
            case 0x11E1BCu: goto label_11e1bc;
            case 0x11E1C0u: goto label_11e1c0;
            case 0x11E1C4u: goto label_11e1c4;
            case 0x11E1C8u: goto label_11e1c8;
            case 0x11E1CCu: goto label_11e1cc;
            case 0x11E1D0u: goto label_11e1d0;
            case 0x11E1D4u: goto label_11e1d4;
            case 0x11E1D8u: goto label_11e1d8;
            case 0x11E1DCu: goto label_11e1dc;
            case 0x11E1E0u: goto label_11e1e0;
            case 0x11E1E4u: goto label_11e1e4;
            case 0x11E1E8u: goto label_11e1e8;
            case 0x11E1ECu: goto label_11e1ec;
            case 0x11E1F0u: goto label_11e1f0;
            case 0x11E1F4u: goto label_11e1f4;
            case 0x11E1F8u: goto label_11e1f8;
            case 0x11E1FCu: goto label_11e1fc;
            case 0x11E200u: goto label_11e200;
            case 0x11E204u: goto label_11e204;
            case 0x11E208u: goto label_11e208;
            case 0x11E20Cu: goto label_11e20c;
            case 0x11E210u: goto label_11e210;
            case 0x11E214u: goto label_11e214;
            case 0x11E218u: goto label_11e218;
            case 0x11E21Cu: goto label_11e21c;
            case 0x11E220u: goto label_11e220;
            case 0x11E224u: goto label_11e224;
            case 0x11E228u: goto label_11e228;
            case 0x11E22Cu: goto label_11e22c;
            case 0x11E230u: goto label_11e230;
            case 0x11E234u: goto label_11e234;
            case 0x11E238u: goto label_11e238;
            case 0x11E23Cu: goto label_11e23c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11DFB8u;
label_11dfb8:
    // 0x11dfb8: 0x26307300  addiu       $s0, $s1, 0x7300
    ctx->pc = 0x11dfb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 29440));
label_11dfbc:
    // 0x11dfbc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x11dfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11dfc0:
    // 0x11dfc0: 0xc047e0c  jal         func_11F830
label_11dfc4:
    if (ctx->pc == 0x11DFC4u) {
        ctx->pc = 0x11DFC4u;
            // 0x11dfc4: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x11DFC8u;
        goto label_11dfc8;
    }
    ctx->pc = 0x11DFC0u;
    SET_GPR_U32(ctx, 31, 0x11DFC8u);
    ctx->pc = 0x11DFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DFC0u;
            // 0x11dfc4: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F830u;
    if (runtime->hasFunction(0x11F830u)) {
        auto targetFn = runtime->lookupFunction(0x11F830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DFC8u; }
        if (ctx->pc != 0x11DFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcFatGetInfo_0x11f830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DFC8u; }
        if (ctx->pc != 0x11DFC8u) { return; }
    }
    ctx->pc = 0x11DFC8u;
label_11dfc8:
    // 0x11dfc8: 0x10000098  b           . + 4 + (0x98 << 2)
label_11dfcc:
    if (ctx->pc == 0x11DFCCu) {
        ctx->pc = 0x11DFCCu;
            // 0x11dfcc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x11DFD0u;
        goto label_11dfd0;
    }
    ctx->pc = 0x11DFC8u;
    {
        const bool branch_taken_0x11dfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DFC8u;
            // 0x11dfcc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfc8) {
            ctx->pc = 0x11E22Cu;
            goto label_11e22c;
        }
    }
    ctx->pc = 0x11DFD0u;
label_11dfd0:
    // 0x11dfd0: 0x26307300  addiu       $s0, $s1, 0x7300
    ctx->pc = 0x11dfd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 29440));
label_11dfd4:
    // 0x11dfd4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x11dfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11dfd8:
    // 0x11dfd8: 0x2605041c  addiu       $a1, $s0, 0x41C
    ctx->pc = 0x11dfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
label_11dfdc:
    // 0x11dfdc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x11dfdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11dfe0:
    // 0x11dfe0: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x11dfe0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_11dfe4:
    // 0x11dfe4: 0xc0486f8  jal         func_121BE0
label_11dfe8:
    if (ctx->pc == 0x11DFE8u) {
        ctx->pc = 0x11DFE8u;
            // 0x11dfe8: 0x8e080014  lw          $t0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x11DFECu;
        goto label_11dfec;
    }
    ctx->pc = 0x11DFE4u;
    SET_GPR_U32(ctx, 31, 0x11DFECu);
    ctx->pc = 0x11DFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DFE4u;
            // 0x11dfe8: 0x8e080014  lw          $t0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121BE0u;
    if (runtime->hasFunction(0x121BE0u)) {
        auto targetFn = runtime->lookupFunction(0x121BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DFECu; }
        if (ctx->pc != 0x11DFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcFatReadFile_0x121be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DFECu; }
        if (ctx->pc != 0x11DFECu) { return; }
    }
    ctx->pc = 0x11DFECu;
label_11dfec:
    // 0x11dfec: 0x1000008f  b           . + 4 + (0x8F << 2)
label_11dff0:
    if (ctx->pc == 0x11DFF0u) {
        ctx->pc = 0x11DFF0u;
            // 0x11dff0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x11DFF4u;
        goto label_11dff4;
    }
    ctx->pc = 0x11DFECu;
    {
        const bool branch_taken_0x11dfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DFECu;
            // 0x11dff0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfec) {
            ctx->pc = 0x11E22Cu;
            goto label_11e22c;
        }
    }
    ctx->pc = 0x11DFF4u;
label_11dff4:
    // 0x11dff4: 0x0  nop
    ctx->pc = 0x11dff4u;
    // NOP
label_11dff8:
    // 0x11dff8: 0x26307300  addiu       $s0, $s1, 0x7300
    ctx->pc = 0x11dff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 29440));
label_11dffc:
    // 0x11dffc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x11dffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11e000:
    // 0x11e000: 0x2605041c  addiu       $a1, $s0, 0x41C
    ctx->pc = 0x11e000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
label_11e004:
    // 0x11e004: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x11e004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11e008:
    // 0x11e008: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x11e008u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_11e00c:
    // 0x11e00c: 0xc048792  jal         func_121E48
label_11e010:
    if (ctx->pc == 0x11E010u) {
        ctx->pc = 0x11E010u;
            // 0x11e010: 0x8e080014  lw          $t0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x11E014u;
        goto label_11e014;
    }
    ctx->pc = 0x11E00Cu;
    SET_GPR_U32(ctx, 31, 0x11E014u);
    ctx->pc = 0x11E010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E00Cu;
            // 0x11e010: 0x8e080014  lw          $t0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121E48u;
    if (runtime->hasFunction(0x121E48u)) {
        auto targetFn = runtime->lookupFunction(0x121E48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E014u; }
        if (ctx->pc != 0x11E014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcFatWriteFile_0x121e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E014u; }
        if (ctx->pc != 0x11E014u) { return; }
    }
    ctx->pc = 0x11E014u;
label_11e014:
    // 0x11e014: 0x10000085  b           . + 4 + (0x85 << 2)
label_11e018:
    if (ctx->pc == 0x11E018u) {
        ctx->pc = 0x11E018u;
            // 0x11e018: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x11E01Cu;
        goto label_11e01c;
    }
    ctx->pc = 0x11E014u;
    {
        const bool branch_taken_0x11e014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E014u;
            // 0x11e018: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e014) {
            ctx->pc = 0x11E22Cu;
            goto label_11e22c;
        }
    }
    ctx->pc = 0x11E01Cu;
label_11e01c:
    // 0x11e01c: 0x0  nop
    ctx->pc = 0x11e01cu;
    // NOP
label_11e020:
    // 0x11e020: 0x26307300  addiu       $s0, $s1, 0x7300
    ctx->pc = 0x11e020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 29440));
label_11e024:
    // 0x11e024: 0xc047f00  jal         func_11FC00
label_11e028:
    if (ctx->pc == 0x11E028u) {
        ctx->pc = 0x11E028u;
            // 0x11e028: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x11E02Cu;
        goto label_11e02c;
    }
    ctx->pc = 0x11E024u;
    SET_GPR_U32(ctx, 31, 0x11E02Cu);
    ctx->pc = 0x11E028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E024u;
            // 0x11e028: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FC00u;
    if (runtime->hasFunction(0x11FC00u)) {
        auto targetFn = runtime->lookupFunction(0x11FC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E02Cu; }
        if (ctx->pc != 0x11E02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcFatFormat_0x11fc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E02Cu; }
        if (ctx->pc != 0x11E02Cu) { return; }
    }
    ctx->pc = 0x11E02Cu;
label_11e02c:
    // 0x11e02c: 0x1000007f  b           . + 4 + (0x7F << 2)
label_11e030:
    if (ctx->pc == 0x11E030u) {
        ctx->pc = 0x11E030u;
            // 0x11e030: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x11E034u;
        goto label_11e034;
    }
    ctx->pc = 0x11E02Cu;
    {
        const bool branch_taken_0x11e02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E02Cu;
            // 0x11e030: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e02c) {
            ctx->pc = 0x11E22Cu;
            goto label_11e22c;
        }
    }
    ctx->pc = 0x11E034u;
label_11e034:
    // 0x11e034: 0x0  nop
    ctx->pc = 0x11e034u;
    // NOP
label_11e038:
    // 0x11e038: 0x26307300  addiu       $s0, $s1, 0x7300
    ctx->pc = 0x11e038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 29440));
label_11e03c:
    // 0x11e03c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x11e03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11e040:
    // 0x11e040: 0x2605041c  addiu       $a1, $s0, 0x41C
    ctx->pc = 0x11e040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
label_11e044:
    // 0x11e044: 0xc048566  jal         func_121598
label_11e048:
    if (ctx->pc == 0x11E048u) {
        ctx->pc = 0x11E048u;
            // 0x11e048: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x11E04Cu;
        goto label_11e04c;
    }
    ctx->pc = 0x11E044u;
    SET_GPR_U32(ctx, 31, 0x11E04Cu);
    ctx->pc = 0x11E048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E044u;
            // 0x11e048: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121598u;
    if (runtime->hasFunction(0x121598u)) {
        auto targetFn = runtime->lookupFunction(0x121598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E04Cu; }
        if (ctx->pc != 0x11E04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcFatCreateFile_0x121598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E04Cu; }
        if (ctx->pc != 0x11E04Cu) { return; }
    }
    ctx->pc = 0x11E04Cu;
label_11e04c:
    // 0x11e04c: 0x10000077  b           . + 4 + (0x77 << 2)
label_11e050:
    if (ctx->pc == 0x11E050u) {
        ctx->pc = 0x11E050u;
            // 0x11e050: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x11E054u;
        goto label_11e054;
    }
    ctx->pc = 0x11E04Cu;
    {
        const bool branch_taken_0x11e04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E04Cu;
            // 0x11e050: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e04c) {
            ctx->pc = 0x11E22Cu;
            goto label_11e22c;
        }
    }
    ctx->pc = 0x11E054u;
label_11e054:
    // 0x11e054: 0x0  nop
    ctx->pc = 0x11e054u;
    // NOP
label_11e058:
    // 0x11e058: 0x26307300  addiu       $s0, $s1, 0x7300
    ctx->pc = 0x11e058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 29440));
label_11e05c:
    // 0x11e05c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x11e05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11e060:
    // 0x11e060: 0xc0488f0  jal         func_1223C0
label_11e064:
    if (ctx->pc == 0x11E064u) {
        ctx->pc = 0x11E064u;
            // 0x11e064: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
        ctx->pc = 0x11E068u;
        goto label_11e068;
    }
    ctx->pc = 0x11E060u;
    SET_GPR_U32(ctx, 31, 0x11E068u);
    ctx->pc = 0x11E064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E060u;
            // 0x11e064: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1223C0u;
    if (runtime->hasFunction(0x1223C0u)) {
        auto targetFn = runtime->lookupFunction(0x1223C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E068u; }
        if (ctx->pc != 0x11E068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcFatDeleteFile_0x1223c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E068u; }
        if (ctx->pc != 0x11E068u) { return; }
    }
    ctx->pc = 0x11E068u;
label_11e068:
    // 0x11e068: 0x10000070  b           . + 4 + (0x70 << 2)
label_11e06c:
    if (ctx->pc == 0x11E06Cu) {
        ctx->pc = 0x11E06Cu;
            // 0x11e06c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x11E070u;
        goto label_11e070;
    }
    ctx->pc = 0x11E068u;
    {
        const bool branch_taken_0x11e068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E068u;
            // 0x11e06c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e068) {
            ctx->pc = 0x11E22Cu;
            goto label_11e22c;
        }
    }
    ctx->pc = 0x11E070u;
label_11e070:
    // 0x11e070: 0x26307300  addiu       $s0, $s1, 0x7300
    ctx->pc = 0x11e070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 29440));
label_11e074:
    // 0x11e074: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x11e074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11e078:
    // 0x11e078: 0x2605041c  addiu       $a1, $s0, 0x41C
    ctx->pc = 0x11e078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
label_11e07c:
    // 0x11e07c: 0xc048566  jal         func_121598
label_11e080:
    if (ctx->pc == 0x11E080u) {
        ctx->pc = 0x11E080u;
            // 0x11e080: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x11E084u;
        goto label_11e084;
    }
    ctx->pc = 0x11E07Cu;
    SET_GPR_U32(ctx, 31, 0x11E084u);
    ctx->pc = 0x11E080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E07Cu;
            // 0x11e080: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121598u;
    if (runtime->hasFunction(0x121598u)) {
        auto targetFn = runtime->lookupFunction(0x121598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E084u; }
        if (ctx->pc != 0x11E084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcFatCreateFile_0x121598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E084u; }
        if (ctx->pc != 0x11E084u) { return; }
    }
    ctx->pc = 0x11E084u;
label_11e084:
    // 0x11e084: 0x10000069  b           . + 4 + (0x69 << 2)
label_11e088:
    if (ctx->pc == 0x11E088u) {
        ctx->pc = 0x11E088u;
            // 0x11e088: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x11E08Cu;
        goto label_11e08c;
    }
    ctx->pc = 0x11E084u;
    {
        const bool branch_taken_0x11e084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E084u;
            // 0x11e088: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e084) {
            ctx->pc = 0x11E22Cu;
            goto label_11e22c;
        }
    }
    ctx->pc = 0x11E08Cu;
label_11e08c:
    // 0x11e08c: 0x0  nop
    ctx->pc = 0x11e08cu;
    // NOP
label_11e090:
    // 0x11e090: 0x26307300  addiu       $s0, $s1, 0x7300
    ctx->pc = 0x11e090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 29440));
label_11e094:
    // 0x11e094: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x11e094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11e098:
    // 0x11e098: 0x2605041c  addiu       $a1, $s0, 0x41C
    ctx->pc = 0x11e098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
label_11e09c:
    // 0x11e09c: 0xc04898a  jal         func_122628
label_11e0a0:
    if (ctx->pc == 0x11E0A0u) {
        ctx->pc = 0x11E0A0u;
            // 0x11e0a0: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x11E0A4u;
        goto label_11e0a4;
    }
    ctx->pc = 0x11E09Cu;
    SET_GPR_U32(ctx, 31, 0x11E0A4u);
    ctx->pc = 0x11E0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E09Cu;
            // 0x11e0a0: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122628u;
    if (runtime->hasFunction(0x122628u)) {
        auto targetFn = runtime->lookupFunction(0x122628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E0A4u; }
        if (ctx->pc != 0x11E0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcFatChDir_0x122628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E0A4u; }
        if (ctx->pc != 0x11E0A4u) { return; }
    }
    ctx->pc = 0x11E0A4u;
label_11e0a4:
    // 0x11e0a4: 0x10000061  b           . + 4 + (0x61 << 2)
label_11e0a8:
    if (ctx->pc == 0x11E0A8u) {
        ctx->pc = 0x11E0A8u;
            // 0x11e0a8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x11E0ACu;
        goto label_11e0ac;
    }
    ctx->pc = 0x11E0A4u;
    {
        const bool branch_taken_0x11e0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E0A4u;
            // 0x11e0a8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0a4) {
            ctx->pc = 0x11E22Cu;
            goto label_11e22c;
        }
    }
    ctx->pc = 0x11E0ACu;
label_11e0ac:
    // 0x11e0ac: 0x0  nop
    ctx->pc = 0x11e0acu;
    // NOP
label_11e0b0:
    // 0x11e0b0: 0x26307300  addiu       $s0, $s1, 0x7300
    ctx->pc = 0x11e0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 29440));
label_11e0b4:
    // 0x11e0b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x11e0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11e0b8:
    // 0x11e0b8: 0x2605041c  addiu       $a1, $s0, 0x41C
    ctx->pc = 0x11e0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
label_11e0bc:
    // 0x11e0bc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x11e0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11e0c0:
    // 0x11e0c0: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x11e0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_11e0c4:
    // 0x11e0c4: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x11e0c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_11e0c8:
    // 0x11e0c8: 0xc0489ea  jal         func_1227A8
label_11e0cc:
    if (ctx->pc == 0x11E0CCu) {
        ctx->pc = 0x11E0CCu;
            // 0x11e0cc: 0x8e090018  lw          $t1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->pc = 0x11E0D0u;
        goto label_11e0d0;
    }
    ctx->pc = 0x11E0C8u;
    SET_GPR_U32(ctx, 31, 0x11E0D0u);
    ctx->pc = 0x11E0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E0C8u;
            // 0x11e0cc: 0x8e090018  lw          $t1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1227A8u;
    if (runtime->hasFunction(0x1227A8u)) {
        auto targetFn = runtime->lookupFunction(0x1227A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E0D0u; }
        if (ctx->pc != 0x11E0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcFatGetDir_0x1227a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E0D0u; }
        if (ctx->pc != 0x11E0D0u) { return; }
    }
    ctx->pc = 0x11E0D0u;
label_11e0d0:
    // 0x11e0d0: 0x10000056  b           . + 4 + (0x56 << 2)
label_11e0d4:
    if (ctx->pc == 0x11E0D4u) {
        ctx->pc = 0x11E0D4u;
            // 0x11e0d4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x11E0D8u;
        goto label_11e0d8;
    }
    ctx->pc = 0x11E0D0u;
    {
        const bool branch_taken_0x11e0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E0D0u;
            // 0x11e0d4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0d0) {
            ctx->pc = 0x11E22Cu;
            goto label_11e22c;
        }
    }
    ctx->pc = 0x11E0D8u;
label_11e0d8:
    // 0x11e0d8: 0x26307300  addiu       $s0, $s1, 0x7300
    ctx->pc = 0x11e0d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 29440));
label_11e0dc:
    // 0x11e0dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x11e0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11e0e0:
    // 0x11e0e0: 0x2605041c  addiu       $a1, $s0, 0x41C
    ctx->pc = 0x11e0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
label_11e0e4:
    // 0x11e0e4: 0xc048b14  jal         func_122C50
label_11e0e8:
    if (ctx->pc == 0x11E0E8u) {
        ctx->pc = 0x11E0E8u;
            // 0x11e0e8: 0x9606000c  lhu         $a2, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x11E0ECu;
        goto label_11e0ec;
    }
    ctx->pc = 0x11E0E4u;
    SET_GPR_U32(ctx, 31, 0x11E0ECu);
    ctx->pc = 0x11E0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E0E4u;
            // 0x11e0e8: 0x9606000c  lhu         $a2, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122C50u;
    if (runtime->hasFunction(0x122C50u)) {
        auto targetFn = runtime->lookupFunction(0x122C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E0ECu; }
        if (ctx->pc != 0x11E0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcFatSetAttr_0x122c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E0ECu; }
        if (ctx->pc != 0x11E0ECu) { return; }
    }
    ctx->pc = 0x11E0ECu;
label_11e0ec:
    // 0x11e0ec: 0x1000004f  b           . + 4 + (0x4F << 2)
label_11e0f0:
    if (ctx->pc == 0x11E0F0u) {
        ctx->pc = 0x11E0F0u;
            // 0x11e0f0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x11E0F4u;
        goto label_11e0f4;
    }
    ctx->pc = 0x11E0ECu;
    {
        const bool branch_taken_0x11e0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E0ECu;
            // 0x11e0f0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0ec) {
            ctx->pc = 0x11E22Cu;
            goto label_11e22c;
        }
    }
    ctx->pc = 0x11E0F4u;
label_11e0f4:
    // 0x11e0f4: 0x0  nop
    ctx->pc = 0x11e0f4u;
    // NOP
label_11e0f8:
    // 0x11e0f8: 0x26307300  addiu       $s0, $s1, 0x7300
    ctx->pc = 0x11e0f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 29440));
label_11e0fc:
    // 0x11e0fc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x11e0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11e100:
    // 0x11e100: 0x2605041c  addiu       $a1, $s0, 0x41C
    ctx->pc = 0x11e100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
label_11e104:
    // 0x11e104: 0xc048b58  jal         func_122D60
label_11e108:
    if (ctx->pc == 0x11E108u) {
        ctx->pc = 0x11E108u;
            // 0x11e108: 0x2606049c  addiu       $a2, $s0, 0x49C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1180));
        ctx->pc = 0x11E10Cu;
        goto label_11e10c;
    }
    ctx->pc = 0x11E104u;
    SET_GPR_U32(ctx, 31, 0x11E10Cu);
    ctx->pc = 0x11E108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E104u;
            // 0x11e108: 0x2606049c  addiu       $a2, $s0, 0x49C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122D60u;
    if (runtime->hasFunction(0x122D60u)) {
        auto targetFn = runtime->lookupFunction(0x122D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E10Cu; }
        if (ctx->pc != 0x11E10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcFatRename_0x122d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E10Cu; }
        if (ctx->pc != 0x11E10Cu) { return; }
    }
    ctx->pc = 0x11E10Cu;
label_11e10c:
    // 0x11e10c: 0x10000047  b           . + 4 + (0x47 << 2)
label_11e110:
    if (ctx->pc == 0x11E110u) {
        ctx->pc = 0x11E110u;
            // 0x11e110: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x11E114u;
        goto label_11e114;
    }
    ctx->pc = 0x11E10Cu;
    {
        const bool branch_taken_0x11e10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E10Cu;
            // 0x11e110: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e10c) {
            ctx->pc = 0x11E22Cu;
            goto label_11e22c;
        }
    }
    ctx->pc = 0x11E114u;
label_11e114:
    // 0x11e114: 0x0  nop
    ctx->pc = 0x11e114u;
    // NOP
label_11e118:
    // 0x11e118: 0x26307300  addiu       $s0, $s1, 0x7300
    ctx->pc = 0x11e118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 29440));
label_11e11c:
    // 0x11e11c: 0xc048156  jal         func_120558
label_11e120:
    if (ctx->pc == 0x11E120u) {
        ctx->pc = 0x11E120u;
            // 0x11e120: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x11E124u;
        goto label_11e124;
    }
    ctx->pc = 0x11E11Cu;
    SET_GPR_U32(ctx, 31, 0x11E124u);
    ctx->pc = 0x11E120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E11Cu;
            // 0x11e120: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120558u;
    if (runtime->hasFunction(0x120558u)) {
        auto targetFn = runtime->lookupFunction(0x120558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E124u; }
        if (ctx->pc != 0x11E124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcFatUnFormat_0x120558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E124u; }
        if (ctx->pc != 0x11E124u) { return; }
    }
    ctx->pc = 0x11E124u;
label_11e124:
    // 0x11e124: 0x10000041  b           . + 4 + (0x41 << 2)
label_11e128:
    if (ctx->pc == 0x11E128u) {
        ctx->pc = 0x11E128u;
            // 0x11e128: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x11E12Cu;
        goto label_11e12c;
    }
    ctx->pc = 0x11E124u;
    {
        const bool branch_taken_0x11e124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E124u;
            // 0x11e128: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e124) {
            ctx->pc = 0x11E22Cu;
            goto label_11e22c;
        }
    }
    ctx->pc = 0x11E12Cu;
label_11e12c:
    // 0x11e12c: 0x0  nop
    ctx->pc = 0x11e12cu;
    // NOP
label_11e130:
    // 0x11e130: 0x26307300  addiu       $s0, $s1, 0x7300
    ctx->pc = 0x11e130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 29440));
label_11e134:
    // 0x11e134: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x11e134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11e138:
    // 0x11e138: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x11e138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11e13c:
    // 0x11e13c: 0x2605041c  addiu       $a1, $s0, 0x41C
    ctx->pc = 0x11e13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
label_11e140:
    // 0x11e140: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11e140u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e144:
    // 0x11e144: 0xc04823c  jal         func_1208F0
label_11e148:
    if (ctx->pc == 0x11E148u) {
        ctx->pc = 0x11E148u;
            // 0x11e148: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x11E14Cu;
        goto label_11e14c;
    }
    ctx->pc = 0x11E144u;
    SET_GPR_U32(ctx, 31, 0x11E14Cu);
    ctx->pc = 0x11E148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E144u;
            // 0x11e148: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1208F0u;
    if (runtime->hasFunction(0x1208F0u)) {
        auto targetFn = runtime->lookupFunction(0x1208F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E14Cu; }
        if (ctx->pc != 0x11E14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcFatSearchFile_0x1208f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E14Cu; }
        if (ctx->pc != 0x11E14Cu) { return; }
    }
    ctx->pc = 0x11E14Cu;
label_11e14c:
    // 0x11e14c: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x11e14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
label_11e150:
    // 0x11e150: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x11e150u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)17u)));
label_11e154:
    // 0x11e154: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_11e158:
    if (ctx->pc == 0x11E158u) {
        ctx->pc = 0x11E158u;
            // 0x11e158: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x11E15Cu;
        goto label_11e15c;
    }
    ctx->pc = 0x11E154u;
    {
        const bool branch_taken_0x11e154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11E158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E154u;
            // 0x11e158: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e154) {
            ctx->pc = 0x11E160u;
            goto label_11e160;
        }
    }
    ctx->pc = 0x11E15Cu;
label_11e15c:
    // 0x11e15c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x11e15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_11e160:
    // 0x11e160: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x11e160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
label_11e164:
    // 0x11e164: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x11e164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_11e168:
    // 0x11e168: 0x34429fff  ori         $v0, $v0, 0x9FFF
    ctx->pc = 0x11e168u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)40959u)));
label_11e16c:
    // 0x11e16c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_11e170:
    if (ctx->pc == 0x11E170u) {
        ctx->pc = 0x11E170u;
            // 0x11e170: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x11E174u;
        goto label_11e174;
    }
    ctx->pc = 0x11E16Cu;
    {
        const bool branch_taken_0x11e16c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11e16c) {
            ctx->pc = 0x11E170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11E16Cu;
            // 0x11e170: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11E184u;
            goto label_11e184;
        }
    }
    ctx->pc = 0x11E174u;
label_11e174:
    // 0x11e174: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x11e174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
label_11e178:
    // 0x11e178: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x11e178u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)2u)));
label_11e17c:
    // 0x11e17c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x11e17cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_11e180:
    // 0x11e180: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x11e180u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11e184:
    // 0x11e184: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
label_11e188:
    if (ctx->pc == 0x11E188u) {
        ctx->pc = 0x11E188u;
            // 0x11e188: 0x26627820  addiu       $v0, $s3, 0x7820 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 30752));
        ctx->pc = 0x11E18Cu;
        goto label_11e18c;
    }
    ctx->pc = 0x11E184u;
    {
        const bool branch_taken_0x11e184 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E184u;
            // 0x11e188: 0x26627820  addiu       $v0, $s3, 0x7820 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 30752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e184) {
            ctx->pc = 0x11E230u;
            goto label_11e230;
        }
    }
    ctx->pc = 0x11E18Cu;
label_11e18c:
    // 0x11e18c: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x11e18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_11e190:
    // 0x11e190: 0xc04f438  jal         func_13D0E0
label_11e194:
    if (ctx->pc == 0x11E194u) {
        ctx->pc = 0x11E194u;
            // 0x11e194: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x11E198u;
        goto label_11e198;
    }
    ctx->pc = 0x11E190u;
    SET_GPR_U32(ctx, 31, 0x11E198u);
    ctx->pc = 0x11E194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E190u;
            // 0x11e194: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E198u; }
        if (ctx->pc != 0x11E198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E198u; }
        if (ctx->pc != 0x11E198u) { return; }
    }
    ctx->pc = 0x11E198u;
label_11e198:
    // 0x11e198: 0x6a820007  ldl         $v0, 0x7($s4)
    ctx->pc = 0x11e198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_11e19c:
    // 0x11e19c: 0x6e820000  ldr         $v0, 0x0($s4)
    ctx->pc = 0x11e19cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_11e1a0:
    // 0x11e1a0: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x11e1a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11e1a4:
    // 0x11e1a4: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x11e1a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11e1a8:
    // 0x11e1a8: 0x6a460007  ldl         $a2, 0x7($s2)
    ctx->pc = 0x11e1a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_11e1ac:
    // 0x11e1ac: 0x6e460000  ldr         $a2, 0x0($s2)
    ctx->pc = 0x11e1acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_11e1b0:
    // 0x11e1b0: 0xb206000f  sdl         $a2, 0xF($s0)
    ctx->pc = 0x11e1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11e1b4:
    // 0x11e1b4: 0xb6060008  sdr         $a2, 0x8($s0)
    ctx->pc = 0x11e1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11e1b8:
    // 0x11e1b8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x11e1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_11e1bc:
    // 0x11e1bc: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x11e1bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_11e1c0:
    // 0x11e1c0: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x11e1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_11e1c4:
    // 0x11e1c4: 0x10000019  b           . + 4 + (0x19 << 2)
label_11e1c8:
    if (ctx->pc == 0x11E1C8u) {
        ctx->pc = 0x11E1C8u;
            // 0x11e1c8: 0xa6020014  sh          $v0, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x11E1CCu;
        goto label_11e1cc;
    }
    ctx->pc = 0x11E1C4u;
    {
        const bool branch_taken_0x11e1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E1C4u;
            // 0x11e1c8: 0xa6020014  sh          $v0, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e1c4) {
            ctx->pc = 0x11E22Cu;
            goto label_11e22c;
        }
    }
    ctx->pc = 0x11E1CCu;
label_11e1cc:
    // 0x11e1cc: 0x0  nop
    ctx->pc = 0x11e1ccu;
    // NOP
label_11e1d0:
    // 0x11e1d0: 0x26307300  addiu       $s0, $s1, 0x7300
    ctx->pc = 0x11e1d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 29440));
label_11e1d4:
    // 0x11e1d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x11e1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11e1d8:
    // 0x11e1d8: 0xc048bc8  jal         func_122F20
label_11e1dc:
    if (ctx->pc == 0x11E1DCu) {
        ctx->pc = 0x11E1DCu;
            // 0x11e1dc: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
        ctx->pc = 0x11E1E0u;
        goto label_11e1e0;
    }
    ctx->pc = 0x11E1D8u;
    SET_GPR_U32(ctx, 31, 0x11E1E0u);
    ctx->pc = 0x11E1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E1D8u;
            // 0x11e1dc: 0x2605041c  addiu       $a1, $s0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F20u;
    if (runtime->hasFunction(0x122F20u)) {
        auto targetFn = runtime->lookupFunction(0x122F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E1E0u; }
        if (ctx->pc != 0x11E1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcFatGetEntSpace_0x122f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E1E0u; }
        if (ctx->pc != 0x11E1E0u) { return; }
    }
    ctx->pc = 0x11E1E0u;
label_11e1e0:
    // 0x11e1e0: 0x10000012  b           . + 4 + (0x12 << 2)
label_11e1e4:
    if (ctx->pc == 0x11E1E4u) {
        ctx->pc = 0x11E1E4u;
            // 0x11e1e4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x11E1E8u;
        goto label_11e1e8;
    }
    ctx->pc = 0x11E1E0u;
    {
        const bool branch_taken_0x11e1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E1E0u;
            // 0x11e1e4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e1e0) {
            ctx->pc = 0x11E22Cu;
            goto label_11e22c;
        }
    }
    ctx->pc = 0x11E1E8u;
label_11e1e8:
    // 0x11e1e8: 0x26307300  addiu       $s0, $s1, 0x7300
    ctx->pc = 0x11e1e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 29440));
label_11e1ec:
    // 0x11e1ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x11e1ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11e1f0:
    // 0x11e1f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x11e1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11e1f4:
    // 0x11e1f4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x11e1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11e1f8:
    // 0x11e1f8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x11e1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_11e1fc:
    // 0x11e1fc: 0xc04919c  jal         func_124670
label_11e200:
    if (ctx->pc == 0x11E200u) {
        ctx->pc = 0x11E200u;
            // 0x11e200: 0x8e080014  lw          $t0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x11E204u;
        goto label_11e204;
    }
    ctx->pc = 0x11E1FCu;
    SET_GPR_U32(ctx, 31, 0x11E204u);
    ctx->pc = 0x11E200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E1FCu;
            // 0x11e200: 0x8e080014  lw          $t0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x124670u;
    if (runtime->hasFunction(0x124670u)) {
        auto targetFn = runtime->lookupFunction(0x124670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E204u; }
        if (ctx->pc != 0x11E204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcCoreReadPage2_0x124670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E204u; }
        if (ctx->pc != 0x11E204u) { return; }
    }
    ctx->pc = 0x11E204u;
label_11e204:
    // 0x11e204: 0x10000009  b           . + 4 + (0x9 << 2)
label_11e208:
    if (ctx->pc == 0x11E208u) {
        ctx->pc = 0x11E208u;
            // 0x11e208: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x11E20Cu;
        goto label_11e20c;
    }
    ctx->pc = 0x11E204u;
    {
        const bool branch_taken_0x11e204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E204u;
            // 0x11e208: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e204) {
            ctx->pc = 0x11E22Cu;
            goto label_11e22c;
        }
    }
    ctx->pc = 0x11E20Cu;
label_11e20c:
    // 0x11e20c: 0x0  nop
    ctx->pc = 0x11e20cu;
    // NOP
label_11e210:
    // 0x11e210: 0x26307300  addiu       $s0, $s1, 0x7300
    ctx->pc = 0x11e210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 29440));
label_11e214:
    // 0x11e214: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x11e214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11e218:
    // 0x11e218: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x11e218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11e21c:
    // 0x11e21c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x11e21cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_11e220:
    // 0x11e220: 0xc049220  jal         func_124880
label_11e224:
    if (ctx->pc == 0x11E224u) {
        ctx->pc = 0x11E224u;
            // 0x11e224: 0x8e070014  lw          $a3, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x11E228u;
        goto label_11e228;
    }
    ctx->pc = 0x11E220u;
    SET_GPR_U32(ctx, 31, 0x11E228u);
    ctx->pc = 0x11E224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E220u;
            // 0x11e224: 0x8e070014  lw          $a3, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x124880u;
    if (runtime->hasFunction(0x124880u)) {
        auto targetFn = runtime->lookupFunction(0x124880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E228u; }
        if (ctx->pc != 0x11E228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcCoreWritePage_0x124880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E228u; }
        if (ctx->pc != 0x11E228u) { return; }
    }
    ctx->pc = 0x11E228u;
label_11e228:
    // 0x11e228: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x11e228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_11e22c:
    // 0x11e22c: 0x26627820  addiu       $v0, $s3, 0x7820
    ctx->pc = 0x11e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 30752));
label_11e230:
    // 0x11e230: 0xc04bb20  jal         func_12EC80
label_11e234:
    if (ctx->pc == 0x11E234u) {
        ctx->pc = 0x11E234u;
            // 0x11e234: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->pc = 0x11E238u;
        goto label_11e238;
    }
    ctx->pc = 0x11E230u;
    SET_GPR_U32(ctx, 31, 0x11E238u);
    ctx->pc = 0x11E234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E230u;
            // 0x11e234: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC80u;
    if (runtime->hasFunction(0x12EC80u)) {
        auto targetFn = runtime->lookupFunction(0x12EC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E238u; }
        if (ctx->pc != 0x11E238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x12ec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E238u; }
        if (ctx->pc != 0x11E238u) { return; }
    }
    ctx->pc = 0x11E238u;
label_11e238:
    // 0x11e238: 0x1000ff51  b           . + 4 + (-0xAF << 2)
label_11e23c:
    if (ctx->pc == 0x11E23Cu) {
        ctx->pc = 0x11E240u;
        goto label_fallthrough_0x11e238;
    }
    ctx->pc = 0x11E238u;
    {
        const bool branch_taken_0x11e238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e238) {
            ctx->pc = 0x11DF80u;
            goto label_11df80;
        }
    }
label_fallthrough_0x11e238:
    ctx->pc = 0x11E240u;
}
