#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: viBufPutTs
// Address: 0x11ccb0 - 0x11cd9c
void viBufPutTs_0x11ccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("viBufPutTs_0x11ccb0");
#endif

    ctx->pc = 0x11ccb0u;

    // 0x11ccb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11ccb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11ccb4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11ccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11ccb8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11ccb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11ccbc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11ccbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ccc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11ccc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ccc4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11ccc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ccc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11ccc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11cccc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11ccccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ccd0: 0xc0438b8  jal         func_10E2E0
    ctx->pc = 0x11CCD0u;
    SET_GPR_U32(ctx, 31, 0x11CCD8u);
    ctx->pc = 0x11CCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CCD0u;
            // 0x11ccd4: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2E0u;
    if (runtime->hasFunction(0x10E2E0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CCD8u; }
        if (ctx->pc != 0x11CCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x10e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CCD8u; }
        if (ctx->pc != 0x11CCD8u) { return; }
    }
    ctx->pc = 0x11CCD8u;
    // 0x11ccd8: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x11ccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x11ccdc: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x11ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x11cce0: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x11cce0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11cce4: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x11CCE4u;
    {
        const bool branch_taken_0x11cce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CCE4u;
            // 0x11cce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cce4) {
            ctx->pc = 0x11CD78u;
            goto label_11cd78;
        }
    }
    ctx->pc = 0x11CCECu;
    // 0x11ccec: 0xc0472d0  jal         func_11CB40
    ctx->pc = 0x11CCECu;
    SET_GPR_U32(ctx, 31, 0x11CCF4u);
    ctx->pc = 0x11CCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CCECu;
            // 0x11ccf0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11CB40u;
    if (runtime->hasFunction(0x11CB40u)) {
        auto targetFn = runtime->lookupFunction(0x11CB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CCF4u; }
        if (ctx->pc != 0x11CCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufModifyPts_0x11cb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CCF4u; }
        if (ctx->pc != 0x11CCF4u) { return; }
    }
    ctx->pc = 0x11CCF4u;
    // 0x11ccf4: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x11ccf4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11ccf8: 0x4830005  bgezl       $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11CCF8u;
    {
        const bool branch_taken_0x11ccf8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x11ccf8) {
            ctx->pc = 0x11CCFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11CCF8u;
            // 0x11ccfc: 0x8e02005c  lw          $v0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11CD10u;
            goto label_11cd10;
        }
    }
    ctx->pc = 0x11CD00u;
    // 0x11cd00: 0xde220008  ld          $v0, 0x8($s1)
    ctx->pc = 0x11cd00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x11cd04: 0x440001c  bltz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x11CD04u;
    {
        const bool branch_taken_0x11cd04 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11CD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CD04u;
            // 0x11cd08: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd04) {
            ctx->pc = 0x11CD78u;
            goto label_11cd78;
        }
    }
    ctx->pc = 0x11CD0Cu;
    // 0x11cd0c: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x11cd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_11cd10:
    // 0x11cd10: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x11cd10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11cd14: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x11cd14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x11cd18: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x11cd18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11cd1c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x11cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x11cd20: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x11cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11cd24: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x11cd24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x11cd28: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x11cd28u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x11cd2c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x11cd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x11cd30: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x11cd30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x11cd34: 0x871818  mult        $v1, $a0, $a3
    ctx->pc = 0x11cd34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11cd38: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x11cd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11cd3c: 0xde230008  ld          $v1, 0x8($s1)
    ctx->pc = 0x11cd3cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x11cd40: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x11cd40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x11cd44: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x11cd44u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x11cd48: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x11cd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x11cd4c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x11cd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x11cd50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11cd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11cd54: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x11cd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x11cd58: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x11cd58u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x11cd5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11cd60: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x11cd60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x11cd64: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11CD64u;
    {
        const bool branch_taken_0x11cd64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cd64) {
            ctx->pc = 0x11CD68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11CD64u;
            // 0x11cd68: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11CD6Cu;
            goto label_11cd6c;
        }
    }
    ctx->pc = 0x11CD6Cu;
label_11cd6c:
    // 0x11cd6c: 0x2810  mfhi        $a1
    ctx->pc = 0x11cd6cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x11cd70: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x11cd70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
    // 0x11cd74: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x11cd74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11cd78:
    // 0x11cd78: 0xc0438b0  jal         func_10E2C0
    ctx->pc = 0x11CD78u;
    SET_GPR_U32(ctx, 31, 0x11CD80u);
    ctx->pc = 0x11CD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CD78u;
            // 0x11cd7c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2C0u;
    if (runtime->hasFunction(0x10E2C0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CD80u; }
        if (ctx->pc != 0x11CD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x10e2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CD80u; }
        if (ctx->pc != 0x11CD80u) { return; }
    }
    ctx->pc = 0x11CD80u;
    // 0x11cd80: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x11cd80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cd84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11cd84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11cd88: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11cd88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11cd8c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11cd8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11cd90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11cd90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cd94: 0x3e00008  jr          $ra
    ctx->pc = 0x11CD94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CD94u;
            // 0x11cd98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CD10u: goto label_11cd10;
            case 0x11CD6Cu: goto label_11cd6c;
            case 0x11CD78u: goto label_11cd78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11CD9Cu;
}
