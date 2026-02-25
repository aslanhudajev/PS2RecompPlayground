#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _dispRefImage
// Address: 0x129670 - 0x129780
void _dispRefImage_0x129670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_dispRefImage_0x129670");
#endif

    ctx->pc = 0x129670u;

    // 0x129670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x129670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x129674: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x129674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x129678: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x129678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12967c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12967cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129680: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x129680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x129684: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x129684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129688: 0x8e070858  lw          $a3, 0x858($s0)
    ctx->pc = 0x129688u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x12968c: 0x24e80020  addiu       $t0, $a3, 0x20
    ctx->pc = 0x12968cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x129690: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x129690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x129694: 0xc04a538  jal         func_1294E0
    ctx->pc = 0x129694u;
    SET_GPR_U32(ctx, 31, 0x12969Cu);
    ctx->pc = 0x129698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129694u;
            // 0x129698: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1294E0u;
    if (runtime->hasFunction(0x1294E0u)) {
        auto targetFn = runtime->lookupFunction(0x1294E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12969Cu; }
        if (ctx->pc != 0x12969Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getPtsDtsFlags_0x1294e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12969Cu; }
        if (ctx->pc != 0x12969Cu) { return; }
    }
    ctx->pc = 0x12969Cu;
    // 0x12969c: 0x8e070858  lw          $a3, 0x858($s0)
    ctx->pc = 0x12969cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x1296a0: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x1296a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x1296a4: 0x24c601a8  addiu       $a2, $a2, 0x1A8
    ctx->pc = 0x1296a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 424));
    // 0x1296a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1296a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1296ac: 0xdce20020  ld          $v0, 0x20($a3)
    ctx->pc = 0x1296acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1296b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1296b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1296b4: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x1296b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1296b8: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x1296b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
    // 0x1296bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1296bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1296c0: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x1296c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x1296c4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1296c4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15u)));
    // 0x1296c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1296c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1296cc: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x1296ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1296d0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1296d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1296d4: 0x9c460000  lwu         $a2, 0x0($v0)
    ctx->pc = 0x1296d4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1296d8: 0xae0300cc  sw          $v1, 0xCC($s0)
    ctx->pc = 0x1296d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 3));
    // 0x1296dc: 0xfe060088  sd          $a2, 0x88($s0)
    ctx->pc = 0x1296dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 6));
    // 0x1296e0: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x1296e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1296e4: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1296e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1296e8: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x1296e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1296ec: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x1296ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
    // 0x1296f0: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x1296f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1296f4: 0xae0200b8  sw          $v0, 0xB8($s0)
    ctx->pc = 0x1296f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
    // 0x1296f8: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x1296f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1296fc: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x1296fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
    // 0x129700: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x129700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x129704: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x129704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x129708: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x129708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x12970c: 0xae0300c4  sw          $v1, 0xC4($s0)
    ctx->pc = 0x12970cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
    // 0x129710: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x129710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x129714: 0xc04a462  jal         func_129188
    ctx->pc = 0x129714u;
    SET_GPR_U32(ctx, 31, 0x12971Cu);
    ctx->pc = 0x129718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129714u;
            // 0x129718: 0xae0200c8  sw          $v0, 0xC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129188u;
    if (runtime->hasFunction(0x129188u)) {
        auto targetFn = runtime->lookupFunction(0x129188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12971Cu; }
        if (ctx->pc != 0x12971Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _isOutSizeOK_0x129188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12971Cu; }
        if (ctx->pc != 0x12971Cu) { return; }
    }
    ctx->pc = 0x12971Cu;
    // 0x12971c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x12971Cu;
    {
        const bool branch_taken_0x12971c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12971Cu;
            // 0x129720: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12971c) {
            ctx->pc = 0x12976Cu;
            goto label_12976c;
        }
    }
    ctx->pc = 0x129724u;
    // 0x129724: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x129724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x129728: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x129728u;
    {
        const bool branch_taken_0x129728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12972Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129728u;
            // 0x12972c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129728) {
            ctx->pc = 0x129770u;
            goto label_129770;
        }
    }
    ctx->pc = 0x129730u;
    // 0x129730: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x129730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x129734: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x129734u;
    {
        const bool branch_taken_0x129734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129734u;
            // 0x129738: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129734) {
            ctx->pc = 0x12974Cu;
            goto label_12974c;
        }
    }
    ctx->pc = 0x12973Cu;
    // 0x12973c: 0xc04a80e  jal         func_12A038
    ctx->pc = 0x12973Cu;
    SET_GPR_U32(ctx, 31, 0x129744u);
    ctx->pc = 0x129740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12973Cu;
            // 0x129740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A038u;
    if (runtime->hasFunction(0x12A038u)) {
        auto targetFn = runtime->lookupFunction(0x12A038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129744u; }
        if (ctx->pc != 0x129744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _csc_storeRefImage_0x12a038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129744u; }
        if (ctx->pc != 0x129744u) { return; }
    }
    ctx->pc = 0x129744u;
    // 0x129744: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x129744u;
    {
        const bool branch_taken_0x129744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129744u;
            // 0x129748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129744) {
            ctx->pc = 0x129758u;
            goto label_129758;
        }
    }
    ctx->pc = 0x12974Cu;
label_12974c:
    // 0x12974c: 0xc04a48a  jal         func_129228
    ctx->pc = 0x12974Cu;
    SET_GPR_U32(ctx, 31, 0x129754u);
    ctx->pc = 0x129750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12974Cu;
            // 0x129750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129228u;
    if (runtime->hasFunction(0x129228u)) {
        auto targetFn = runtime->lookupFunction(0x129228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129754u; }
        if (ctx->pc != 0x129754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _cpr8_0x129228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129754u; }
        if (ctx->pc != 0x129754u) { return; }
    }
    ctx->pc = 0x129754u;
    // 0x129754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129758:
    // 0x129758: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x129758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12975c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x12975cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x129760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129764: 0x804a52e  j           func_1294B8
    ctx->pc = 0x129764u;
    ctx->pc = 0x129768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129764u;
            // 0x129768: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1294B8u;
    if (runtime->hasFunction(0x1294B8u)) {
        auto targetFn = runtime->lookupFunction(0x1294B8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _markOutput_0x1294b8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x12976Cu;
label_12976c:
    // 0x12976c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12976cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_129770:
    // 0x129770: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x129770u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129774: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x129774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129778: 0x3e00008  jr          $ra
    ctx->pc = 0x129778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12977Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129778u;
            // 0x12977c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12974Cu: goto label_12974c;
            case 0x129758u: goto label_129758;
            case 0x12976Cu: goto label_12976c;
            case 0x129770u: goto label_129770;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129780u;
}
