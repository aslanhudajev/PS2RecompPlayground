#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: deci2Putchar
// Address: 0x1303f8 - 0x1304a8
void deci2Putchar_0x1303f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("deci2Putchar_0x1303f8");
#endif

    ctx->pc = 0x1303f8u;

    // 0x1303f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1303f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1303fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1303fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x130400: 0x3c110021  lui         $s1, 0x21
    ctx->pc = 0x130400u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)33 << 16));
    // 0x130404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130408: 0x8e250400  lw          $a1, 0x400($s1)
    ctx->pc = 0x130408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1024)));
    // 0x13040c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13040cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130410: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x130410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x130414: 0x28a2007e  slti        $v0, $a1, 0x7E
    ctx->pc = 0x130414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)126) ? 1 : 0);
    // 0x130418: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x130418u;
    {
        const bool branch_taken_0x130418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13041Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130418u;
            // 0x13041c: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130418) {
            ctx->pc = 0x130440u;
            goto label_130440;
        }
    }
    ctx->pc = 0x130420u;
    // 0x130420: 0x3c120024  lui         $s2, 0x24
    ctx->pc = 0x130420u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)36 << 16));
    // 0x130424: 0xae200400  sw          $zero, 0x400($s1)
    ctx->pc = 0x130424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1024), GPR_U32(ctx, 0));
    // 0x130428: 0x26422c80  addiu       $v0, $s2, 0x2C80
    ctx->pc = 0x130428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 11392));
    // 0x13042c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13042cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130430: 0xc04bf9e  jal         func_12FE78
    ctx->pc = 0x130430u;
    SET_GPR_U32(ctx, 31, 0x130438u);
    ctx->pc = 0x130434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130430u;
            // 0x130434: 0xa040007f  sb          $zero, 0x7F($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FE78u;
    if (runtime->hasFunction(0x12FE78u)) {
        auto targetFn = runtime->lookupFunction(0x12FE78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130438u; }
        if (ctx->pc != 0x130438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kputs_0x12fe78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130438u; }
        if (ctx->pc != 0x130438u) { return; }
    }
    ctx->pc = 0x130438u;
    // 0x130438: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x130438u;
    {
        const bool branch_taken_0x130438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13043Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130438u;
            // 0x13043c: 0x8e250400  lw          $a1, 0x400($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130438) {
            ctx->pc = 0x130444u;
            goto label_130444;
        }
    }
    ctx->pc = 0x130440u;
label_130440:
    // 0x130440: 0x3c120024  lui         $s2, 0x24
    ctx->pc = 0x130440u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)36 << 16));
label_130444:
    // 0x130444: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x130444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x130448: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x130448u;
    {
        const bool branch_taken_0x130448 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x13044Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130448u;
            // 0x13044c: 0x26422c80  addiu       $v0, $s2, 0x2C80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 11392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130448) {
            ctx->pc = 0x130480u;
            goto label_130480;
        }
    }
    ctx->pc = 0x130450u;
    // 0x130450: 0x26442c80  addiu       $a0, $s2, 0x2C80
    ctx->pc = 0x130450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11392));
    // 0x130454: 0xae200400  sw          $zero, 0x400($s1)
    ctx->pc = 0x130454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1024), GPR_U32(ctx, 0));
    // 0x130458: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x130458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13045c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13045cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130460: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x130460u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x130464: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x130464u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130468: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x130468u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13046c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x13046cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130470: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130474: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x130474u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x130478: 0x804bf9e  j           func_12FE78
    ctx->pc = 0x130478u;
    ctx->pc = 0x13047Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130478u;
            // 0x13047c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FE78u;
    if (runtime->hasFunction(0x12FE78u)) {
        auto targetFn = runtime->lookupFunction(0x12FE78u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kputs_0x12fe78(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x130480u;
label_130480:
    // 0x130480: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x130480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x130484: 0xae230400  sw          $v1, 0x400($s1)
    ctx->pc = 0x130484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1024), GPR_U32(ctx, 3));
    // 0x130488: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x130488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13048c: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x13048cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x130490: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x130490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130494: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x130494u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130498: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x130498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13049c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13049cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1304a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1304A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1304A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1304A0u;
            // 0x1304a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130440u: goto label_130440;
            case 0x130444u: goto label_130444;
            case 0x130480u: goto label_130480;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1304A8u;
}
