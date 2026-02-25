#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _slice0
// Address: 0x1272c8 - 0x1274c0
void _slice0_0x1272c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_slice0_0x1272c8");
#endif

    ctx->pc = 0x1272c8u;

    // 0x1272c8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1272c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1272cc: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x1272ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x1272d0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1272d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1272d4: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1272d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1272d8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1272d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1272dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1272dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1272e0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1272e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1272e4: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1272e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1272e8: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1272e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1272ec: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1272ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1272f0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1272f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1272f4: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x1272f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x1272f8: 0xc049c66  jal         func_127198
    ctx->pc = 0x1272F8u;
    SET_GPR_U32(ctx, 31, 0x127300u);
    ctx->pc = 0x1272FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1272F8u;
            // 0x1272fc: 0xffb10070  sd          $s1, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127198u;
    if (runtime->hasFunction(0x127198u)) {
        auto targetFn = runtime->lookupFunction(0x127198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127300u; }
        if (ctx->pc != 0x127300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sliceA0_0x127198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127300u; }
        if (ctx->pc != 0x127300u) { return; }
    }
    ctx->pc = 0x127300u;
    // 0x127300: 0x14400069  bnez        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x127300u;
    {
        const bool branch_taken_0x127300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127300u;
            // 0x127304: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127300) {
            ctx->pc = 0x1274A8u;
            goto label_1274a8;
        }
    }
    ctx->pc = 0x127308u;
    // 0x127308: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x127308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x12730c: 0x0  nop
    ctx->pc = 0x12730cu;
    // NOP
label_127310:
    // 0x127310: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x127310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x127314: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x127314u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x127318: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x127318u;
    {
        const bool branch_taken_0x127318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127318) {
            ctx->pc = 0x12731Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127318u;
            // 0x12731c: 0x8e020810  lw          $v0, 0x810($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127328u;
            goto label_127328;
        }
    }
    ctx->pc = 0x127320u;
    // 0x127320: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x127320u;
    {
        const bool branch_taken_0x127320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127320u;
            // 0x127324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127320) {
            ctx->pc = 0x1274A4u;
            goto label_1274a4;
        }
    }
    ctx->pc = 0x127328u;
label_127328:
    // 0x127328: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x127328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x12732c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12732cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127330: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x127330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x127334: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x127334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x127338: 0xc049ac8  jal         func_126B20
    ctx->pc = 0x127338u;
    SET_GPR_U32(ctx, 31, 0x127340u);
    ctx->pc = 0x12733Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127338u;
            // 0x12733c: 0xac4006cc  sw          $zero, 0x6CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126B20u;
    if (runtime->hasFunction(0x126B20u)) {
        auto targetFn = runtime->lookupFunction(0x126B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127340u; }
        if (ctx->pc != 0x127340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitBdecOut_0x126b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127340u; }
        if (ctx->pc != 0x127340u) { return; }
    }
    ctx->pc = 0x127340u;
    // 0x127340: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127340u;
    {
        const bool branch_taken_0x127340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127340u;
            // 0x127344: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127340) {
            ctx->pc = 0x12735Cu;
            goto label_12735c;
        }
    }
    ctx->pc = 0x127348u;
    // 0x127348: 0x8e0210a0  lw          $v0, 0x10A0($s0)
    ctx->pc = 0x127348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4256)));
    // 0x12734c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x12734Cu;
    {
        const bool branch_taken_0x12734c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12734Cu;
            // 0x127350: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12734c) {
            ctx->pc = 0x1273C4u;
            goto label_1273c4;
        }
    }
    ctx->pc = 0x127354u;
    // 0x127354: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x127354u;
    {
        const bool branch_taken_0x127354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127354u;
            // 0x127358: 0xae0010a0  sw          $zero, 0x10A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127354) {
            ctx->pc = 0x1274A4u;
            goto label_1274a4;
        }
    }
    ctx->pc = 0x12735Cu;
label_12735c:
    // 0x12735c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x12735Cu;
    {
        const bool branch_taken_0x12735c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12735Cu;
            // 0x127360: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12735c) {
            ctx->pc = 0x1273A8u;
            goto label_1273a8;
        }
    }
    ctx->pc = 0x127364u;
    // 0x127364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x127364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127368: 0xc04a028  jal         func_1280A0
    ctx->pc = 0x127368u;
    SET_GPR_U32(ctx, 31, 0x127370u);
    ctx->pc = 0x12736Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127368u;
            // 0x12736c: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1280A0u;
    if (runtime->hasFunction(0x1280A0u)) {
        auto targetFn = runtime->lookupFunction(0x1280A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127370u; }
        if (ctx->pc != 0x127370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _peepBit_0x1280a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127370u; }
        if (ctx->pc != 0x127370u) { return; }
    }
    ctx->pc = 0x127370u;
    // 0x127370: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x127370u;
    {
        const bool branch_taken_0x127370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127370) {
            ctx->pc = 0x127374u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127370u;
            // 0x127374: 0xae00011c  sw          $zero, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127388u;
            goto label_127388;
        }
    }
    ctx->pc = 0x127378u;
    // 0x127378: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x127378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x12737c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12737Cu;
    {
        const bool branch_taken_0x12737c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12737c) {
            ctx->pc = 0x127390u;
            goto label_127390;
        }
    }
    ctx->pc = 0x127384u;
    // 0x127384: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x127384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
label_127388:
    // 0x127388: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x127388u;
    {
        const bool branch_taken_0x127388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12738Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127388u;
            // 0x12738c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127388) {
            ctx->pc = 0x1274A4u;
            goto label_1274a4;
        }
    }
    ctx->pc = 0x127390u;
label_127390:
    // 0x127390: 0xc049bda  jal         func_126F68
    ctx->pc = 0x127390u;
    SET_GPR_U32(ctx, 31, 0x127398u);
    ctx->pc = 0x127394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127390u;
            // 0x127394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126F68u;
    if (runtime->hasFunction(0x126F68u)) {
        auto targetFn = runtime->lookupFunction(0x126F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127398u; }
        if (ctx->pc != 0x127398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _mbAddressIncrement_0x126f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127398u; }
        if (ctx->pc != 0x127398u) { return; }
    }
    ctx->pc = 0x127398u;
    // 0x127398: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x127398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x12739c: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x12739Cu;
    {
        const bool branch_taken_0x12739c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1273A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12739Cu;
            // 0x1273a0: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12739c) {
            ctx->pc = 0x127404u;
            goto label_127404;
        }
    }
    ctx->pc = 0x1273A4u;
    // 0x1273a4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1273a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1273a8:
    // 0x1273a8: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x1273a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1273ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1273ACu;
    {
        const bool branch_taken_0x1273ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1273B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1273ACu;
            // 0x1273b0: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1273ac) {
            ctx->pc = 0x1273CCu;
            goto label_1273cc;
        }
    }
    ctx->pc = 0x1273B4u;
    // 0x1273b4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1273b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1273b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1273b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1273bc: 0xc04b01e  jal         func_12C078
    ctx->pc = 0x1273BCu;
    SET_GPR_U32(ctx, 31, 0x1273C4u);
    ctx->pc = 0x1273C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1273BCu;
            // 0x1273c0: 0x24a5f268  addiu       $a1, $a1, -0xD98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C078u;
    if (runtime->hasFunction(0x12C078u)) {
        auto targetFn = runtime->lookupFunction(0x12C078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1273C4u; }
        if (ctx->pc != 0x1273C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x12c078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1273C4u; }
        if (ctx->pc != 0x1273C4u) { return; }
    }
    ctx->pc = 0x1273C4u;
label_1273c4:
    // 0x1273c4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1273C4u;
    {
        const bool branch_taken_0x1273c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1273C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1273C4u;
            // 0x1273c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1273c4) {
            ctx->pc = 0x1274A4u;
            goto label_1274a4;
        }
    }
    ctx->pc = 0x1273CCu;
label_1273cc:
    // 0x1273cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1273ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1273d0: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1273D0u;
    {
        const bool branch_taken_0x1273d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1273D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1273D0u;
            // 0x1273d4: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1273d0) {
            ctx->pc = 0x127410u;
            goto label_127410;
        }
    }
    ctx->pc = 0x1273D8u;
    // 0x1273d8: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x1273d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1273dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1273dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1273e0: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x1273e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1273e4: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x1273e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1273e8: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1273e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1273ec: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1273ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1273f0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1273f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1273f4: 0xc049d60  jal         func_127580
    ctx->pc = 0x1273F4u;
    SET_GPR_U32(ctx, 31, 0x1273FCu);
    ctx->pc = 0x1273F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1273F4u;
            // 0x1273f8: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127580u;
    if (runtime->hasFunction(0x127580u)) {
        auto targetFn = runtime->lookupFunction(0x127580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1273FCu; }
        if (ctx->pc != 0x1273FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _decMB0_0x127580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1273FCu; }
        if (ctx->pc != 0x1273FCu) { return; }
    }
    ctx->pc = 0x1273FCu;
    // 0x1273fc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1273FCu;
    {
        const bool branch_taken_0x1273fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1273FCu;
            // 0x127400: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1273fc) {
            ctx->pc = 0x127434u;
            goto label_127434;
        }
    }
    ctx->pc = 0x127404u;
label_127404:
    // 0x127404: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x127404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x127408: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x127408u;
    {
        const bool branch_taken_0x127408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12740Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127408u;
            // 0x12740c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127408) {
            ctx->pc = 0x1274A4u;
            goto label_1274a4;
        }
    }
    ctx->pc = 0x127410u;
label_127410:
    // 0x127410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x127410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127414: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x127414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127418: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x127418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x12741c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x12741cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127420: 0xc049d30  jal         func_1274C0
    ctx->pc = 0x127420u;
    SET_GPR_U32(ctx, 31, 0x127428u);
    ctx->pc = 0x127424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127420u;
            // 0x127424: 0x27a80048  addiu       $t0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1274C0u;
    if (runtime->hasFunction(0x1274C0u)) {
        auto targetFn = runtime->lookupFunction(0x1274C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127428u; }
        if (ctx->pc != 0x127428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _skipMB0_0x1274c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127428u; }
        if (ctx->pc != 0x127428u) { return; }
    }
    ctx->pc = 0x127428u;
    // 0x127428: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x127428u;
    {
        const bool branch_taken_0x127428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12742Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127428u;
            // 0x12742c: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127428) {
            ctx->pc = 0x12745Cu;
            goto label_12745c;
        }
    }
    ctx->pc = 0x127430u;
    // 0x127430: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x127430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_127434:
    // 0x127434: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x127434u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127438: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x127438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x12743c: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x12743cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127440: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x127440u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x127444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127448: 0x8fa8004c  lw          $t0, 0x4C($sp)
    ctx->pc = 0x127448u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x12744c: 0xc04936c  jal         func_124DB0
    ctx->pc = 0x12744Cu;
    SET_GPR_U32(ctx, 31, 0x127454u);
    ctx->pc = 0x127450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12744Cu;
            // 0x127450: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x124DB0u;
    if (runtime->hasFunction(0x124DB0u)) {
        auto targetFn = runtime->lookupFunction(0x124DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127454u; }
        if (ctx->pc != 0x127454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _motionComp0_0x124db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127454u; }
        if (ctx->pc != 0x127454u) { return; }
    }
    ctx->pc = 0x127454u;
    // 0x127454: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x127454u;
    {
        const bool branch_taken_0x127454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127454u;
            // 0x127458: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127454) {
            ctx->pc = 0x127464u;
            goto label_127464;
        }
    }
    ctx->pc = 0x12745Cu;
label_12745c:
    // 0x12745c: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
    ctx->pc = 0x12745Cu;
    {
        const bool branch_taken_0x12745c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12745Cu;
            // 0x127460: 0xae00011c  sw          $zero, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12745c) {
            ctx->pc = 0x1273C4u;
            goto label_1273c4;
        }
    }
    ctx->pc = 0x127464u;
label_127464:
    // 0x127464: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x127464u;
    {
        const bool branch_taken_0x127464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x127464) {
            ctx->pc = 0x127468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127464u;
            // 0x127468: 0x8e020810  lw          $v0, 0x810($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127484u;
            goto label_127484;
        }
    }
    ctx->pc = 0x12746Cu;
    // 0x12746c: 0x8e050810  lw          $a1, 0x810($s0)
    ctx->pc = 0x12746cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x127470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x127470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127474: 0xc0496ca  jal         func_125B28
    ctx->pc = 0x127474u;
    SET_GPR_U32(ctx, 31, 0x12747Cu);
    ctx->pc = 0x127478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127474u;
            // 0x127478: 0x38a50001  xori        $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_PXOR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B28u;
    if (runtime->hasFunction(0x125B28u)) {
        auto targetFn = runtime->lookupFunction(0x125B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12747Cu; }
        if (ctx->pc != 0x12747Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _doMC_0x125b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12747Cu; }
        if (ctx->pc != 0x12747Cu) { return; }
    }
    ctx->pc = 0x12747Cu;
    // 0x12747c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x12747cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x127480: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x127480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_127484:
    // 0x127484: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x127484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x127488: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x127488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x12748c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12748cu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x127490: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x127490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x127494: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x127494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x127498: 0xae020810  sw          $v0, 0x810($s0)
    ctx->pc = 0x127498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2064), GPR_U32(ctx, 2));
    // 0x12749c: 0x1000ff9c  b           . + 4 + (-0x64 << 2)
    ctx->pc = 0x12749Cu;
    {
        const bool branch_taken_0x12749c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1274A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12749Cu;
            // 0x1274a0: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12749c) {
            ctx->pc = 0x127310u;
            goto label_127310;
        }
    }
    ctx->pc = 0x1274A4u;
label_1274a4:
    // 0x1274a4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1274a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1274a8:
    // 0x1274a8: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x1274a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1274ac: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1274acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1274b0: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x1274b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1274b4: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1274b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1274b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1274B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1274BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1274B8u;
            // 0x1274bc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127310u: goto label_127310;
            case 0x127328u: goto label_127328;
            case 0x12735Cu: goto label_12735c;
            case 0x127388u: goto label_127388;
            case 0x127390u: goto label_127390;
            case 0x1273A8u: goto label_1273a8;
            case 0x1273C4u: goto label_1273c4;
            case 0x1273CCu: goto label_1273cc;
            case 0x127404u: goto label_127404;
            case 0x127410u: goto label_127410;
            case 0x127434u: goto label_127434;
            case 0x12745Cu: goto label_12745c;
            case 0x127464u: goto label_127464;
            case 0x127484u: goto label_127484;
            case 0x1274A4u: goto label_1274a4;
            case 0x1274A8u: goto label_1274a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1274C0u;
}
