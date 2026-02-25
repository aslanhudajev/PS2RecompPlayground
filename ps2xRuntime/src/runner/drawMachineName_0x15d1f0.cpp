#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: drawMachineName
// Address: 0x15d1f0 - 0x15d2b4
void drawMachineName_0x15d1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("drawMachineName_0x15d1f0");
#endif

    ctx->pc = 0x15d1f0u;

    // 0x15d1f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15d1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15d1f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15d1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15d1f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15d1fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d200: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15d200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d204: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x15D204u;
    {
        const bool branch_taken_0x15d204 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D204u;
            // 0x15d208: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d204) {
            ctx->pc = 0x15D220u;
            goto label_15d220;
        }
    }
    ctx->pc = 0x15D20Cu;
    // 0x15d20c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x15d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x15d210: 0x24429c60  addiu       $v0, $v0, -0x63A0
    ctx->pc = 0x15d210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941792));
    // 0x15d214: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15D214u;
    {
        const bool branch_taken_0x15d214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D214u;
            // 0x15d218: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d214) {
            ctx->pc = 0x15D230u;
            goto label_15d230;
        }
    }
    ctx->pc = 0x15D21Cu;
    // 0x15d21c: 0x0  nop
    ctx->pc = 0x15d21cu;
    // NOP
label_15d220:
    // 0x15d220: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x15d220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x15d224: 0x24429ca8  addiu       $v0, $v0, -0x6358
    ctx->pc = 0x15d224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941864));
    // 0x15d228: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x15d228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x15d22c: 0x0  nop
    ctx->pc = 0x15d22cu;
    // NOP
label_15d230:
    // 0x15d230: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15D230u;
    SET_GPR_U32(ctx, 31, 0x15D238u);
    ctx->pc = 0x15D234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D230u;
            // 0x15d234: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D238u; }
        if (ctx->pc != 0x15D238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D238u; }
        if (ctx->pc != 0x15D238u) { return; }
    }
    ctx->pc = 0x15D238u;
    // 0x15d238: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x15D238u;
    {
        const bool branch_taken_0x15d238 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D238u;
            // 0x15d23c: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d238) {
            ctx->pc = 0x15D268u;
            goto label_15d268;
        }
    }
    ctx->pc = 0x15D240u;
    // 0x15d240: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d244: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x15d244u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15d248: 0x24423eb0  addiu       $v0, $v0, 0x3EB0
    ctx->pc = 0x15d248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16048));
    // 0x15d24c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x15d24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15d250: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d254: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x15d254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x15d258: 0x24423df0  addiu       $v0, $v0, 0x3DF0
    ctx->pc = 0x15d258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15856));
    // 0x15d25c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15d260: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x15D260u;
    {
        const bool branch_taken_0x15d260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D260u;
            // 0x15d264: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d260) {
            ctx->pc = 0x15D298u;
            goto label_15d298;
        }
    }
    ctx->pc = 0x15D268u;
label_15d268:
    // 0x15d268: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x15d268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x15d26c: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x15d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x15d270: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x15d270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x15d274: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x15d274u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15d278: 0x24633eb0  addiu       $v1, $v1, 0x3EB0
    ctx->pc = 0x15d278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16048));
    // 0x15d27c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d280: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15d280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15d284: 0x24423df0  addiu       $v0, $v0, 0x3DF0
    ctx->pc = 0x15d284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15856));
    // 0x15d288: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x15d288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x15d28c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15d290: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x15d290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x15d294: 0x0  nop
    ctx->pc = 0x15d294u;
    // NOP
label_15d298:
    // 0x15d298: 0xc057608  jal         func_15D820
    ctx->pc = 0x15D298u;
    SET_GPR_U32(ctx, 31, 0x15D2A0u);
    ctx->pc = 0x15D29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D298u;
            // 0x15d29c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D820u;
    if (runtime->hasFunction(0x15D820u)) {
        auto targetFn = runtime->lookupFunction(0x15D820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D2A0u; }
        if (ctx->pc != 0x15D2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawOnePrim_0x15d820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D2A0u; }
        if (ctx->pc != 0x15D2A0u) { return; }
    }
    ctx->pc = 0x15D2A0u;
    // 0x15d2a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15d2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d2a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d2a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d2a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d2a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x15D2ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D2ACu;
            // 0x15d2b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D220u: goto label_15d220;
            case 0x15D230u: goto label_15d230;
            case 0x15D268u: goto label_15d268;
            case 0x15D298u: goto label_15d298;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D2B4u;
}
