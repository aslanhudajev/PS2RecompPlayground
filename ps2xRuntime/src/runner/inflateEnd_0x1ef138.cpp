#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: inflateEnd
// Address: 0x1ef138 - 0x1ef1a8
void inflateEnd_0x1ef138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("inflateEnd_0x1ef138");
#endif

    ctx->pc = 0x1ef138u;

label_1ef138:
    // 0x1ef138: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ef138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ef13c:
    // 0x1ef13c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ef13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ef140:
    // 0x1ef140: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ef140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ef144:
    // 0x1ef144: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_1ef148:
    if (ctx->pc == 0x1EF148u) {
        ctx->pc = 0x1EF148u;
            // 0x1ef148: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x1EF14Cu;
        goto label_1ef14c;
    }
    ctx->pc = 0x1EF144u;
    {
        const bool branch_taken_0x1ef144 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF144u;
            // 0x1ef148: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef144) {
            ctx->pc = 0x1EF164u;
            goto label_1ef164;
        }
    }
    ctx->pc = 0x1EF14Cu;
label_1ef14c:
    // 0x1ef14c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ef14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ef150:
    // 0x1ef150: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1ef154:
    if (ctx->pc == 0x1EF154u) {
        ctx->pc = 0x1EF154u;
            // 0x1ef154: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x1EF158u;
        goto label_1ef158;
    }
    ctx->pc = 0x1EF150u;
    {
        const bool branch_taken_0x1ef150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF150u;
            // 0x1ef154: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef150) {
            ctx->pc = 0x1EF198u;
            goto label_1ef198;
        }
    }
    ctx->pc = 0x1EF158u;
label_1ef158:
    // 0x1ef158: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1ef158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1ef15c:
    // 0x1ef15c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_1ef160:
    if (ctx->pc == 0x1EF160u) {
        ctx->pc = 0x1EF160u;
            // 0x1ef160: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1EF164u;
        goto label_1ef164;
    }
    ctx->pc = 0x1EF15Cu;
    {
        const bool branch_taken_0x1ef15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef15c) {
            ctx->pc = 0x1EF160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF15Cu;
            // 0x1ef160: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF16Cu;
            goto label_1ef16c;
        }
    }
    ctx->pc = 0x1EF164u;
label_1ef164:
    // 0x1ef164: 0x1000000c  b           . + 4 + (0xC << 2)
label_1ef168:
    if (ctx->pc == 0x1EF168u) {
        ctx->pc = 0x1EF168u;
            // 0x1ef168: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x1EF16Cu;
        goto label_1ef16c;
    }
    ctx->pc = 0x1EF164u;
    {
        const bool branch_taken_0x1ef164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF164u;
            // 0x1ef168: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef164) {
            ctx->pc = 0x1EF198u;
            goto label_1ef198;
        }
    }
    ctx->pc = 0x1EF16Cu;
label_1ef16c:
    // 0x1ef16c: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x1ef16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1ef170:
    // 0x1ef170: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1ef174:
    if (ctx->pc == 0x1EF174u) {
        ctx->pc = 0x1EF174u;
            // 0x1ef174: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x1EF178u;
        goto label_1ef178;
    }
    ctx->pc = 0x1EF170u;
    {
        const bool branch_taken_0x1ef170 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef170) {
            ctx->pc = 0x1EF174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF170u;
            // 0x1ef174: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF184u;
            goto label_1ef184;
        }
    }
    ctx->pc = 0x1EF178u;
label_1ef178:
    // 0x1ef178: 0xc07c1bf  jal         func_1F06FC
label_1ef17c:
    if (ctx->pc == 0x1EF17Cu) {
        ctx->pc = 0x1EF17Cu;
            // 0x1ef17c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EF180u;
        goto label_1ef180;
    }
    ctx->pc = 0x1EF178u;
    SET_GPR_U32(ctx, 31, 0x1EF180u);
    ctx->pc = 0x1EF17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF178u;
            // 0x1ef17c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F06FCu;
    if (runtime->hasFunction(0x1F06FCu)) {
        auto targetFn = runtime->lookupFunction(0x1F06FCu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF180u; }
        if (ctx->pc != 0x1EF180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_blocks_free_0x1f06fc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF180u; }
        if (ctx->pc != 0x1EF180u) { return; }
    }
    ctx->pc = 0x1EF180u;
label_1ef180:
    // 0x1ef180: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1ef180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1ef184:
    // 0x1ef184: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1ef184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1ef188:
    // 0x1ef188: 0x40f809  jalr        $v0
label_1ef18c:
    if (ctx->pc == 0x1EF18Cu) {
        ctx->pc = 0x1EF18Cu;
            // 0x1ef18c: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1EF190u;
        goto label_1ef190;
    }
    ctx->pc = 0x1EF188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EF190u);
        ctx->pc = 0x1EF18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF188u;
            // 0x1ef18c: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EF138u: goto label_1ef138;
            case 0x1EF13Cu: goto label_1ef13c;
            case 0x1EF140u: goto label_1ef140;
            case 0x1EF144u: goto label_1ef144;
            case 0x1EF148u: goto label_1ef148;
            case 0x1EF14Cu: goto label_1ef14c;
            case 0x1EF150u: goto label_1ef150;
            case 0x1EF154u: goto label_1ef154;
            case 0x1EF158u: goto label_1ef158;
            case 0x1EF15Cu: goto label_1ef15c;
            case 0x1EF160u: goto label_1ef160;
            case 0x1EF164u: goto label_1ef164;
            case 0x1EF168u: goto label_1ef168;
            case 0x1EF16Cu: goto label_1ef16c;
            case 0x1EF170u: goto label_1ef170;
            case 0x1EF174u: goto label_1ef174;
            case 0x1EF178u: goto label_1ef178;
            case 0x1EF17Cu: goto label_1ef17c;
            case 0x1EF180u: goto label_1ef180;
            case 0x1EF184u: goto label_1ef184;
            case 0x1EF188u: goto label_1ef188;
            case 0x1EF18Cu: goto label_1ef18c;
            case 0x1EF190u: goto label_1ef190;
            case 0x1EF194u: goto label_1ef194;
            case 0x1EF198u: goto label_1ef198;
            case 0x1EF19Cu: goto label_1ef19c;
            case 0x1EF1A0u: goto label_1ef1a0;
            case 0x1EF1A4u: goto label_1ef1a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EF190u; }
            if (ctx->pc != 0x1EF190u) { return; }
        }
    }
    ctx->pc = 0x1EF190u;
label_1ef190:
    // 0x1ef190: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ef190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1ef194:
    // 0x1ef194: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ef194u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef198:
    // 0x1ef198: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ef198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ef19c:
    // 0x1ef19c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ef19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ef1a0:
    // 0x1ef1a0: 0x3e00008  jr          $ra
label_1ef1a4:
    if (ctx->pc == 0x1EF1A4u) {
        ctx->pc = 0x1EF1A4u;
            // 0x1ef1a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1EF1A8u;
        goto label_fallthrough_0x1ef1a0;
    }
    ctx->pc = 0x1EF1A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF1A0u;
            // 0x1ef1a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EF138u: goto label_1ef138;
            case 0x1EF13Cu: goto label_1ef13c;
            case 0x1EF140u: goto label_1ef140;
            case 0x1EF144u: goto label_1ef144;
            case 0x1EF148u: goto label_1ef148;
            case 0x1EF14Cu: goto label_1ef14c;
            case 0x1EF150u: goto label_1ef150;
            case 0x1EF154u: goto label_1ef154;
            case 0x1EF158u: goto label_1ef158;
            case 0x1EF15Cu: goto label_1ef15c;
            case 0x1EF160u: goto label_1ef160;
            case 0x1EF164u: goto label_1ef164;
            case 0x1EF168u: goto label_1ef168;
            case 0x1EF16Cu: goto label_1ef16c;
            case 0x1EF170u: goto label_1ef170;
            case 0x1EF174u: goto label_1ef174;
            case 0x1EF178u: goto label_1ef178;
            case 0x1EF17Cu: goto label_1ef17c;
            case 0x1EF180u: goto label_1ef180;
            case 0x1EF184u: goto label_1ef184;
            case 0x1EF188u: goto label_1ef188;
            case 0x1EF18Cu: goto label_1ef18c;
            case 0x1EF190u: goto label_1ef190;
            case 0x1EF194u: goto label_1ef194;
            case 0x1EF198u: goto label_1ef198;
            case 0x1EF19Cu: goto label_1ef19c;
            case 0x1EF1A0u: goto label_1ef1a0;
            case 0x1EF1A4u: goto label_1ef1a4;
            default: break;
        }
        return;
    }
label_fallthrough_0x1ef1a0:
    ctx->pc = 0x1EF1A8u;
}
