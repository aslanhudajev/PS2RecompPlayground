#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: inflate_blocks_new
// Address: 0x1efb58 - 0x1efc3c
void inflate_blocks_new_0x1efb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("inflate_blocks_new_0x1efb58");
#endif

    ctx->pc = 0x1efb58u;

label_1efb58:
    // 0x1efb58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1efb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1efb5c:
    // 0x1efb5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1efb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1efb60:
    // 0x1efb60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1efb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1efb64:
    // 0x1efb64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1efb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1efb68:
    // 0x1efb68: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1efb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1efb6c:
    // 0x1efb6c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1efb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1efb70:
    // 0x1efb70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1efb70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1efb74:
    // 0x1efb74: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1efb74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1efb78:
    // 0x1efb78: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1efb78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1efb7c:
    // 0x1efb7c: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1efb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1efb80:
    // 0x1efb80: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1efb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1efb84:
    // 0x1efb84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1efb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1efb88:
    // 0x1efb88: 0x40f809  jalr        $v0
label_1efb8c:
    if (ctx->pc == 0x1EFB8Cu) {
        ctx->pc = 0x1EFB8Cu;
            // 0x1efb8c: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->pc = 0x1EFB90u;
        goto label_1efb90;
    }
    ctx->pc = 0x1EFB88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EFB90u);
        ctx->pc = 0x1EFB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFB88u;
            // 0x1efb8c: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EFB58u: goto label_1efb58;
            case 0x1EFB5Cu: goto label_1efb5c;
            case 0x1EFB60u: goto label_1efb60;
            case 0x1EFB64u: goto label_1efb64;
            case 0x1EFB68u: goto label_1efb68;
            case 0x1EFB6Cu: goto label_1efb6c;
            case 0x1EFB70u: goto label_1efb70;
            case 0x1EFB74u: goto label_1efb74;
            case 0x1EFB78u: goto label_1efb78;
            case 0x1EFB7Cu: goto label_1efb7c;
            case 0x1EFB80u: goto label_1efb80;
            case 0x1EFB84u: goto label_1efb84;
            case 0x1EFB88u: goto label_1efb88;
            case 0x1EFB8Cu: goto label_1efb8c;
            case 0x1EFB90u: goto label_1efb90;
            case 0x1EFB94u: goto label_1efb94;
            case 0x1EFB98u: goto label_1efb98;
            case 0x1EFB9Cu: goto label_1efb9c;
            case 0x1EFBA0u: goto label_1efba0;
            case 0x1EFBA4u: goto label_1efba4;
            case 0x1EFBA8u: goto label_1efba8;
            case 0x1EFBACu: goto label_1efbac;
            case 0x1EFBB0u: goto label_1efbb0;
            case 0x1EFBB4u: goto label_1efbb4;
            case 0x1EFBB8u: goto label_1efbb8;
            case 0x1EFBBCu: goto label_1efbbc;
            case 0x1EFBC0u: goto label_1efbc0;
            case 0x1EFBC4u: goto label_1efbc4;
            case 0x1EFBC8u: goto label_1efbc8;
            case 0x1EFBCCu: goto label_1efbcc;
            case 0x1EFBD0u: goto label_1efbd0;
            case 0x1EFBD4u: goto label_1efbd4;
            case 0x1EFBD8u: goto label_1efbd8;
            case 0x1EFBDCu: goto label_1efbdc;
            case 0x1EFBE0u: goto label_1efbe0;
            case 0x1EFBE4u: goto label_1efbe4;
            case 0x1EFBE8u: goto label_1efbe8;
            case 0x1EFBECu: goto label_1efbec;
            case 0x1EFBF0u: goto label_1efbf0;
            case 0x1EFBF4u: goto label_1efbf4;
            case 0x1EFBF8u: goto label_1efbf8;
            case 0x1EFBFCu: goto label_1efbfc;
            case 0x1EFC00u: goto label_1efc00;
            case 0x1EFC04u: goto label_1efc04;
            case 0x1EFC08u: goto label_1efc08;
            case 0x1EFC0Cu: goto label_1efc0c;
            case 0x1EFC10u: goto label_1efc10;
            case 0x1EFC14u: goto label_1efc14;
            case 0x1EFC18u: goto label_1efc18;
            case 0x1EFC1Cu: goto label_1efc1c;
            case 0x1EFC20u: goto label_1efc20;
            case 0x1EFC24u: goto label_1efc24;
            case 0x1EFC28u: goto label_1efc28;
            case 0x1EFC2Cu: goto label_1efc2c;
            case 0x1EFC30u: goto label_1efc30;
            case 0x1EFC34u: goto label_1efc34;
            case 0x1EFC38u: goto label_1efc38;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EFB90u; }
            if (ctx->pc != 0x1EFB90u) { return; }
        }
    }
    ctx->pc = 0x1EFB90u;
label_1efb90:
    // 0x1efb90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1efb90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1efb94:
    // 0x1efb94: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_1efb98:
    if (ctx->pc == 0x1EFB98u) {
        ctx->pc = 0x1EFB98u;
            // 0x1efb98: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1EFB9Cu;
        goto label_1efb9c;
    }
    ctx->pc = 0x1EFB94u;
    {
        const bool branch_taken_0x1efb94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFB94u;
            // 0x1efb98: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb94) {
            ctx->pc = 0x1EFC20u;
            goto label_1efc20;
        }
    }
    ctx->pc = 0x1EFB9Cu;
label_1efb9c:
    // 0x1efb9c: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1efb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1efba0:
    // 0x1efba0: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1efba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1efba4:
    // 0x1efba4: 0x40f809  jalr        $v0
label_1efba8:
    if (ctx->pc == 0x1EFBA8u) {
        ctx->pc = 0x1EFBA8u;
            // 0x1efba8: 0x240605a0  addiu       $a2, $zero, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1440));
        ctx->pc = 0x1EFBACu;
        goto label_1efbac;
    }
    ctx->pc = 0x1EFBA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EFBACu);
        ctx->pc = 0x1EFBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFBA4u;
            // 0x1efba8: 0x240605a0  addiu       $a2, $zero, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1440));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EFB58u: goto label_1efb58;
            case 0x1EFB5Cu: goto label_1efb5c;
            case 0x1EFB60u: goto label_1efb60;
            case 0x1EFB64u: goto label_1efb64;
            case 0x1EFB68u: goto label_1efb68;
            case 0x1EFB6Cu: goto label_1efb6c;
            case 0x1EFB70u: goto label_1efb70;
            case 0x1EFB74u: goto label_1efb74;
            case 0x1EFB78u: goto label_1efb78;
            case 0x1EFB7Cu: goto label_1efb7c;
            case 0x1EFB80u: goto label_1efb80;
            case 0x1EFB84u: goto label_1efb84;
            case 0x1EFB88u: goto label_1efb88;
            case 0x1EFB8Cu: goto label_1efb8c;
            case 0x1EFB90u: goto label_1efb90;
            case 0x1EFB94u: goto label_1efb94;
            case 0x1EFB98u: goto label_1efb98;
            case 0x1EFB9Cu: goto label_1efb9c;
            case 0x1EFBA0u: goto label_1efba0;
            case 0x1EFBA4u: goto label_1efba4;
            case 0x1EFBA8u: goto label_1efba8;
            case 0x1EFBACu: goto label_1efbac;
            case 0x1EFBB0u: goto label_1efbb0;
            case 0x1EFBB4u: goto label_1efbb4;
            case 0x1EFBB8u: goto label_1efbb8;
            case 0x1EFBBCu: goto label_1efbbc;
            case 0x1EFBC0u: goto label_1efbc0;
            case 0x1EFBC4u: goto label_1efbc4;
            case 0x1EFBC8u: goto label_1efbc8;
            case 0x1EFBCCu: goto label_1efbcc;
            case 0x1EFBD0u: goto label_1efbd0;
            case 0x1EFBD4u: goto label_1efbd4;
            case 0x1EFBD8u: goto label_1efbd8;
            case 0x1EFBDCu: goto label_1efbdc;
            case 0x1EFBE0u: goto label_1efbe0;
            case 0x1EFBE4u: goto label_1efbe4;
            case 0x1EFBE8u: goto label_1efbe8;
            case 0x1EFBECu: goto label_1efbec;
            case 0x1EFBF0u: goto label_1efbf0;
            case 0x1EFBF4u: goto label_1efbf4;
            case 0x1EFBF8u: goto label_1efbf8;
            case 0x1EFBFCu: goto label_1efbfc;
            case 0x1EFC00u: goto label_1efc00;
            case 0x1EFC04u: goto label_1efc04;
            case 0x1EFC08u: goto label_1efc08;
            case 0x1EFC0Cu: goto label_1efc0c;
            case 0x1EFC10u: goto label_1efc10;
            case 0x1EFC14u: goto label_1efc14;
            case 0x1EFC18u: goto label_1efc18;
            case 0x1EFC1Cu: goto label_1efc1c;
            case 0x1EFC20u: goto label_1efc20;
            case 0x1EFC24u: goto label_1efc24;
            case 0x1EFC28u: goto label_1efc28;
            case 0x1EFC2Cu: goto label_1efc2c;
            case 0x1EFC30u: goto label_1efc30;
            case 0x1EFC34u: goto label_1efc34;
            case 0x1EFC38u: goto label_1efc38;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EFBACu; }
            if (ctx->pc != 0x1EFBACu) { return; }
        }
    }
    ctx->pc = 0x1EFBACu;
label_1efbac:
    // 0x1efbac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1efbb0:
    if (ctx->pc == 0x1EFBB0u) {
        ctx->pc = 0x1EFBB0u;
            // 0x1efbb0: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->pc = 0x1EFBB4u;
        goto label_1efbb4;
    }
    ctx->pc = 0x1EFBACu;
    {
        const bool branch_taken_0x1efbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFBACu;
            // 0x1efbb0: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efbac) {
            ctx->pc = 0x1EFBE0u;
            goto label_1efbe0;
        }
    }
    ctx->pc = 0x1EFBB4u;
label_1efbb4:
    // 0x1efbb4: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1efbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1efbb8:
    // 0x1efbb8: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1efbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1efbbc:
    // 0x1efbbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1efbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1efbc0:
    // 0x1efbc0: 0x40f809  jalr        $v0
label_1efbc4:
    if (ctx->pc == 0x1EFBC4u) {
        ctx->pc = 0x1EFBC4u;
            // 0x1efbc4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EFBC8u;
        goto label_1efbc8;
    }
    ctx->pc = 0x1EFBC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EFBC8u);
        ctx->pc = 0x1EFBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFBC0u;
            // 0x1efbc4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EFB58u: goto label_1efb58;
            case 0x1EFB5Cu: goto label_1efb5c;
            case 0x1EFB60u: goto label_1efb60;
            case 0x1EFB64u: goto label_1efb64;
            case 0x1EFB68u: goto label_1efb68;
            case 0x1EFB6Cu: goto label_1efb6c;
            case 0x1EFB70u: goto label_1efb70;
            case 0x1EFB74u: goto label_1efb74;
            case 0x1EFB78u: goto label_1efb78;
            case 0x1EFB7Cu: goto label_1efb7c;
            case 0x1EFB80u: goto label_1efb80;
            case 0x1EFB84u: goto label_1efb84;
            case 0x1EFB88u: goto label_1efb88;
            case 0x1EFB8Cu: goto label_1efb8c;
            case 0x1EFB90u: goto label_1efb90;
            case 0x1EFB94u: goto label_1efb94;
            case 0x1EFB98u: goto label_1efb98;
            case 0x1EFB9Cu: goto label_1efb9c;
            case 0x1EFBA0u: goto label_1efba0;
            case 0x1EFBA4u: goto label_1efba4;
            case 0x1EFBA8u: goto label_1efba8;
            case 0x1EFBACu: goto label_1efbac;
            case 0x1EFBB0u: goto label_1efbb0;
            case 0x1EFBB4u: goto label_1efbb4;
            case 0x1EFBB8u: goto label_1efbb8;
            case 0x1EFBBCu: goto label_1efbbc;
            case 0x1EFBC0u: goto label_1efbc0;
            case 0x1EFBC4u: goto label_1efbc4;
            case 0x1EFBC8u: goto label_1efbc8;
            case 0x1EFBCCu: goto label_1efbcc;
            case 0x1EFBD0u: goto label_1efbd0;
            case 0x1EFBD4u: goto label_1efbd4;
            case 0x1EFBD8u: goto label_1efbd8;
            case 0x1EFBDCu: goto label_1efbdc;
            case 0x1EFBE0u: goto label_1efbe0;
            case 0x1EFBE4u: goto label_1efbe4;
            case 0x1EFBE8u: goto label_1efbe8;
            case 0x1EFBECu: goto label_1efbec;
            case 0x1EFBF0u: goto label_1efbf0;
            case 0x1EFBF4u: goto label_1efbf4;
            case 0x1EFBF8u: goto label_1efbf8;
            case 0x1EFBFCu: goto label_1efbfc;
            case 0x1EFC00u: goto label_1efc00;
            case 0x1EFC04u: goto label_1efc04;
            case 0x1EFC08u: goto label_1efc08;
            case 0x1EFC0Cu: goto label_1efc0c;
            case 0x1EFC10u: goto label_1efc10;
            case 0x1EFC14u: goto label_1efc14;
            case 0x1EFC18u: goto label_1efc18;
            case 0x1EFC1Cu: goto label_1efc1c;
            case 0x1EFC20u: goto label_1efc20;
            case 0x1EFC24u: goto label_1efc24;
            case 0x1EFC28u: goto label_1efc28;
            case 0x1EFC2Cu: goto label_1efc2c;
            case 0x1EFC30u: goto label_1efc30;
            case 0x1EFC34u: goto label_1efc34;
            case 0x1EFC38u: goto label_1efc38;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EFBC8u; }
            if (ctx->pc != 0x1EFBC8u) { return; }
        }
    }
    ctx->pc = 0x1EFBC8u;
label_1efbc8:
    // 0x1efbc8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1efbcc:
    if (ctx->pc == 0x1EFBCCu) {
        ctx->pc = 0x1EFBCCu;
            // 0x1efbcc: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x1EFBD0u;
        goto label_1efbd0;
    }
    ctx->pc = 0x1EFBC8u;
    {
        const bool branch_taken_0x1efbc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFBC8u;
            // 0x1efbcc: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efbc8) {
            ctx->pc = 0x1EFBF8u;
            goto label_1efbf8;
        }
    }
    ctx->pc = 0x1EFBD0u;
label_1efbd0:
    // 0x1efbd0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1efbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1efbd4:
    // 0x1efbd4: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1efbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1efbd8:
    // 0x1efbd8: 0x40f809  jalr        $v0
label_1efbdc:
    if (ctx->pc == 0x1EFBDCu) {
        ctx->pc = 0x1EFBDCu;
            // 0x1efbdc: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1EFBE0u;
        goto label_1efbe0;
    }
    ctx->pc = 0x1EFBD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EFBE0u);
        ctx->pc = 0x1EFBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFBD8u;
            // 0x1efbdc: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EFB58u: goto label_1efb58;
            case 0x1EFB5Cu: goto label_1efb5c;
            case 0x1EFB60u: goto label_1efb60;
            case 0x1EFB64u: goto label_1efb64;
            case 0x1EFB68u: goto label_1efb68;
            case 0x1EFB6Cu: goto label_1efb6c;
            case 0x1EFB70u: goto label_1efb70;
            case 0x1EFB74u: goto label_1efb74;
            case 0x1EFB78u: goto label_1efb78;
            case 0x1EFB7Cu: goto label_1efb7c;
            case 0x1EFB80u: goto label_1efb80;
            case 0x1EFB84u: goto label_1efb84;
            case 0x1EFB88u: goto label_1efb88;
            case 0x1EFB8Cu: goto label_1efb8c;
            case 0x1EFB90u: goto label_1efb90;
            case 0x1EFB94u: goto label_1efb94;
            case 0x1EFB98u: goto label_1efb98;
            case 0x1EFB9Cu: goto label_1efb9c;
            case 0x1EFBA0u: goto label_1efba0;
            case 0x1EFBA4u: goto label_1efba4;
            case 0x1EFBA8u: goto label_1efba8;
            case 0x1EFBACu: goto label_1efbac;
            case 0x1EFBB0u: goto label_1efbb0;
            case 0x1EFBB4u: goto label_1efbb4;
            case 0x1EFBB8u: goto label_1efbb8;
            case 0x1EFBBCu: goto label_1efbbc;
            case 0x1EFBC0u: goto label_1efbc0;
            case 0x1EFBC4u: goto label_1efbc4;
            case 0x1EFBC8u: goto label_1efbc8;
            case 0x1EFBCCu: goto label_1efbcc;
            case 0x1EFBD0u: goto label_1efbd0;
            case 0x1EFBD4u: goto label_1efbd4;
            case 0x1EFBD8u: goto label_1efbd8;
            case 0x1EFBDCu: goto label_1efbdc;
            case 0x1EFBE0u: goto label_1efbe0;
            case 0x1EFBE4u: goto label_1efbe4;
            case 0x1EFBE8u: goto label_1efbe8;
            case 0x1EFBECu: goto label_1efbec;
            case 0x1EFBF0u: goto label_1efbf0;
            case 0x1EFBF4u: goto label_1efbf4;
            case 0x1EFBF8u: goto label_1efbf8;
            case 0x1EFBFCu: goto label_1efbfc;
            case 0x1EFC00u: goto label_1efc00;
            case 0x1EFC04u: goto label_1efc04;
            case 0x1EFC08u: goto label_1efc08;
            case 0x1EFC0Cu: goto label_1efc0c;
            case 0x1EFC10u: goto label_1efc10;
            case 0x1EFC14u: goto label_1efc14;
            case 0x1EFC18u: goto label_1efc18;
            case 0x1EFC1Cu: goto label_1efc1c;
            case 0x1EFC20u: goto label_1efc20;
            case 0x1EFC24u: goto label_1efc24;
            case 0x1EFC28u: goto label_1efc28;
            case 0x1EFC2Cu: goto label_1efc2c;
            case 0x1EFC30u: goto label_1efc30;
            case 0x1EFC34u: goto label_1efc34;
            case 0x1EFC38u: goto label_1efc38;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EFBE0u; }
            if (ctx->pc != 0x1EFBE0u) { return; }
        }
    }
    ctx->pc = 0x1EFBE0u;
label_1efbe0:
    // 0x1efbe0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1efbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1efbe4:
    // 0x1efbe4: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1efbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1efbe8:
    // 0x1efbe8: 0x40f809  jalr        $v0
label_1efbec:
    if (ctx->pc == 0x1EFBECu) {
        ctx->pc = 0x1EFBECu;
            // 0x1efbec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EFBF0u;
        goto label_1efbf0;
    }
    ctx->pc = 0x1EFBE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EFBF0u);
        ctx->pc = 0x1EFBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFBE8u;
            // 0x1efbec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EFB58u: goto label_1efb58;
            case 0x1EFB5Cu: goto label_1efb5c;
            case 0x1EFB60u: goto label_1efb60;
            case 0x1EFB64u: goto label_1efb64;
            case 0x1EFB68u: goto label_1efb68;
            case 0x1EFB6Cu: goto label_1efb6c;
            case 0x1EFB70u: goto label_1efb70;
            case 0x1EFB74u: goto label_1efb74;
            case 0x1EFB78u: goto label_1efb78;
            case 0x1EFB7Cu: goto label_1efb7c;
            case 0x1EFB80u: goto label_1efb80;
            case 0x1EFB84u: goto label_1efb84;
            case 0x1EFB88u: goto label_1efb88;
            case 0x1EFB8Cu: goto label_1efb8c;
            case 0x1EFB90u: goto label_1efb90;
            case 0x1EFB94u: goto label_1efb94;
            case 0x1EFB98u: goto label_1efb98;
            case 0x1EFB9Cu: goto label_1efb9c;
            case 0x1EFBA0u: goto label_1efba0;
            case 0x1EFBA4u: goto label_1efba4;
            case 0x1EFBA8u: goto label_1efba8;
            case 0x1EFBACu: goto label_1efbac;
            case 0x1EFBB0u: goto label_1efbb0;
            case 0x1EFBB4u: goto label_1efbb4;
            case 0x1EFBB8u: goto label_1efbb8;
            case 0x1EFBBCu: goto label_1efbbc;
            case 0x1EFBC0u: goto label_1efbc0;
            case 0x1EFBC4u: goto label_1efbc4;
            case 0x1EFBC8u: goto label_1efbc8;
            case 0x1EFBCCu: goto label_1efbcc;
            case 0x1EFBD0u: goto label_1efbd0;
            case 0x1EFBD4u: goto label_1efbd4;
            case 0x1EFBD8u: goto label_1efbd8;
            case 0x1EFBDCu: goto label_1efbdc;
            case 0x1EFBE0u: goto label_1efbe0;
            case 0x1EFBE4u: goto label_1efbe4;
            case 0x1EFBE8u: goto label_1efbe8;
            case 0x1EFBECu: goto label_1efbec;
            case 0x1EFBF0u: goto label_1efbf0;
            case 0x1EFBF4u: goto label_1efbf4;
            case 0x1EFBF8u: goto label_1efbf8;
            case 0x1EFBFCu: goto label_1efbfc;
            case 0x1EFC00u: goto label_1efc00;
            case 0x1EFC04u: goto label_1efc04;
            case 0x1EFC08u: goto label_1efc08;
            case 0x1EFC0Cu: goto label_1efc0c;
            case 0x1EFC10u: goto label_1efc10;
            case 0x1EFC14u: goto label_1efc14;
            case 0x1EFC18u: goto label_1efc18;
            case 0x1EFC1Cu: goto label_1efc1c;
            case 0x1EFC20u: goto label_1efc20;
            case 0x1EFC24u: goto label_1efc24;
            case 0x1EFC28u: goto label_1efc28;
            case 0x1EFC2Cu: goto label_1efc2c;
            case 0x1EFC30u: goto label_1efc30;
            case 0x1EFC34u: goto label_1efc34;
            case 0x1EFC38u: goto label_1efc38;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EFBF0u; }
            if (ctx->pc != 0x1EFBF0u) { return; }
        }
    }
    ctx->pc = 0x1EFBF0u;
label_1efbf0:
    // 0x1efbf0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1efbf4:
    if (ctx->pc == 0x1EFBF4u) {
        ctx->pc = 0x1EFBF4u;
            // 0x1efbf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EFBF8u;
        goto label_1efbf8;
    }
    ctx->pc = 0x1EFBF0u;
    {
        const bool branch_taken_0x1efbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFBF0u;
            // 0x1efbf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efbf0) {
            ctx->pc = 0x1EFC20u;
            goto label_1efc20;
        }
    }
    ctx->pc = 0x1EFBF8u;
label_1efbf8:
    // 0x1efbf8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1efbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1efbfc:
    // 0x1efbfc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1efbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1efc00:
    // 0x1efc00: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1efc00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1efc04:
    // 0x1efc04: 0xae13003c  sw          $s3, 0x3C($s0)
    ctx->pc = 0x1efc04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 19));
label_1efc08:
    // 0x1efc08: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1efc08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1efc0c:
    // 0x1efc0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1efc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1efc10:
    // 0x1efc10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1efc10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1efc14:
    // 0x1efc14: 0xc07beaa  jal         func_1EFAA8
label_1efc18:
    if (ctx->pc == 0x1EFC18u) {
        ctx->pc = 0x1EFC18u;
            // 0x1efc18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EFC1Cu;
        goto label_1efc1c;
    }
    ctx->pc = 0x1EFC14u;
    SET_GPR_U32(ctx, 31, 0x1EFC1Cu);
    ctx->pc = 0x1EFC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFC14u;
            // 0x1efc18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFAA8u;
    if (runtime->hasFunction(0x1EFAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1EFAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFC1Cu; }
        if (ctx->pc != 0x1EFC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_blocks_reset_0x1efaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFC1Cu; }
        if (ctx->pc != 0x1EFC1Cu) { return; }
    }
    ctx->pc = 0x1EFC1Cu;
label_1efc1c:
    // 0x1efc1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1efc1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1efc20:
    // 0x1efc20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1efc20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1efc24:
    // 0x1efc24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1efc24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1efc28:
    // 0x1efc28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1efc28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1efc2c:
    // 0x1efc2c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1efc2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1efc30:
    // 0x1efc30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1efc30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1efc34:
    // 0x1efc34: 0x3e00008  jr          $ra
label_1efc38:
    if (ctx->pc == 0x1EFC38u) {
        ctx->pc = 0x1EFC38u;
            // 0x1efc38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1EFC3Cu;
        goto label_fallthrough_0x1efc34;
    }
    ctx->pc = 0x1EFC34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFC34u;
            // 0x1efc38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EFB58u: goto label_1efb58;
            case 0x1EFB5Cu: goto label_1efb5c;
            case 0x1EFB60u: goto label_1efb60;
            case 0x1EFB64u: goto label_1efb64;
            case 0x1EFB68u: goto label_1efb68;
            case 0x1EFB6Cu: goto label_1efb6c;
            case 0x1EFB70u: goto label_1efb70;
            case 0x1EFB74u: goto label_1efb74;
            case 0x1EFB78u: goto label_1efb78;
            case 0x1EFB7Cu: goto label_1efb7c;
            case 0x1EFB80u: goto label_1efb80;
            case 0x1EFB84u: goto label_1efb84;
            case 0x1EFB88u: goto label_1efb88;
            case 0x1EFB8Cu: goto label_1efb8c;
            case 0x1EFB90u: goto label_1efb90;
            case 0x1EFB94u: goto label_1efb94;
            case 0x1EFB98u: goto label_1efb98;
            case 0x1EFB9Cu: goto label_1efb9c;
            case 0x1EFBA0u: goto label_1efba0;
            case 0x1EFBA4u: goto label_1efba4;
            case 0x1EFBA8u: goto label_1efba8;
            case 0x1EFBACu: goto label_1efbac;
            case 0x1EFBB0u: goto label_1efbb0;
            case 0x1EFBB4u: goto label_1efbb4;
            case 0x1EFBB8u: goto label_1efbb8;
            case 0x1EFBBCu: goto label_1efbbc;
            case 0x1EFBC0u: goto label_1efbc0;
            case 0x1EFBC4u: goto label_1efbc4;
            case 0x1EFBC8u: goto label_1efbc8;
            case 0x1EFBCCu: goto label_1efbcc;
            case 0x1EFBD0u: goto label_1efbd0;
            case 0x1EFBD4u: goto label_1efbd4;
            case 0x1EFBD8u: goto label_1efbd8;
            case 0x1EFBDCu: goto label_1efbdc;
            case 0x1EFBE0u: goto label_1efbe0;
            case 0x1EFBE4u: goto label_1efbe4;
            case 0x1EFBE8u: goto label_1efbe8;
            case 0x1EFBECu: goto label_1efbec;
            case 0x1EFBF0u: goto label_1efbf0;
            case 0x1EFBF4u: goto label_1efbf4;
            case 0x1EFBF8u: goto label_1efbf8;
            case 0x1EFBFCu: goto label_1efbfc;
            case 0x1EFC00u: goto label_1efc00;
            case 0x1EFC04u: goto label_1efc04;
            case 0x1EFC08u: goto label_1efc08;
            case 0x1EFC0Cu: goto label_1efc0c;
            case 0x1EFC10u: goto label_1efc10;
            case 0x1EFC14u: goto label_1efc14;
            case 0x1EFC18u: goto label_1efc18;
            case 0x1EFC1Cu: goto label_1efc1c;
            case 0x1EFC20u: goto label_1efc20;
            case 0x1EFC24u: goto label_1efc24;
            case 0x1EFC28u: goto label_1efc28;
            case 0x1EFC2Cu: goto label_1efc2c;
            case 0x1EFC30u: goto label_1efc30;
            case 0x1EFC34u: goto label_1efc34;
            case 0x1EFC38u: goto label_1efc38;
            default: break;
        }
        return;
    }
label_fallthrough_0x1efc34:
    ctx->pc = 0x1EFC3Cu;
}
