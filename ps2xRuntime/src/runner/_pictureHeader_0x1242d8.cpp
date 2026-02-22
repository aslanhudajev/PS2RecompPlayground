#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _pictureHeader
// Address: 0x1242d8 - 0x1243a4
void _pictureHeader_0x1242d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1242d8u;

    // 0x1242d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1242d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1242dc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1242dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1242e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1242e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1242e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1242e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1242e8: 0x3c120017  lui         $s2, 0x17
    ctx->pc = 0x1242e8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)23 << 16));
    // 0x1242ec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1242ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1242f0: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x1242f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x1242f4: 0xc048fdc  jal         func_123F70
    ctx->pc = 0x1242F4u;
    SET_GPR_U32(ctx, 31, 0x1242FCu);
    ctx->pc = 0x1242F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1242F4u;
            // 0x1242f8: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1242FCu; }
        if (ctx->pc != 0x1242FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1242FCu; }
        if (ctx->pc != 0x1242FCu) { return; }
    }
    ctx->pc = 0x1242FCu;
    // 0x1242fc: 0xae021978  sw          $v0, 0x1978($s0)
    ctx->pc = 0x1242fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6520), GPR_U32(ctx, 2));
    // 0x124300: 0xc048fdc  jal         func_123F70
    ctx->pc = 0x124300u;
    SET_GPR_U32(ctx, 31, 0x124308u);
    ctx->pc = 0x124304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124300u;
            // 0x124304: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124308u; }
        if (ctx->pc != 0x124308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124308u; }
        if (ctx->pc != 0x124308u) { return; }
    }
    ctx->pc = 0x124308u;
    // 0x124308: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x124308u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x12430c: 0xae42197c  sw          $v0, 0x197C($s2)
    ctx->pc = 0x12430cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6524), GPR_U32(ctx, 2));
    // 0x124310: 0xc048fdc  jal         func_123F70
    ctx->pc = 0x124310u;
    SET_GPR_U32(ctx, 31, 0x124318u);
    ctx->pc = 0x124314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124310u;
            // 0x124314: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124318u; }
        if (ctx->pc != 0x124318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124318u; }
        if (ctx->pc != 0x124318u) { return; }
    }
    ctx->pc = 0x124318u;
    // 0x124318: 0x8e43197c  lw          $v1, 0x197C($s2)
    ctx->pc = 0x124318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6524)));
    // 0x12431c: 0xae021980  sw          $v0, 0x1980($s0)
    ctx->pc = 0x12431cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6528), GPR_U32(ctx, 2));
    // 0x124320: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x124320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x124324: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x124324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x124328: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x124328u;
    {
        const bool branch_taken_0x124328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12432Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124328u;
            // 0x12432c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124328) {
            ctx->pc = 0x124358u;
            goto label_124358;
        }
    }
    ctx->pc = 0x124330u;
    // 0x124330: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x124330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124334: 0xc048fdc  jal         func_123F70
    ctx->pc = 0x124334u;
    SET_GPR_U32(ctx, 31, 0x12433Cu);
    ctx->pc = 0x124338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124334u;
            // 0x124338: 0x3c100017  lui         $s0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12433Cu; }
        if (ctx->pc != 0x12433Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12433Cu; }
        if (ctx->pc != 0x12433Cu) { return; }
    }
    ctx->pc = 0x12433Cu;
    // 0x12433c: 0x3c110017  lui         $s1, 0x17
    ctx->pc = 0x12433cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)23 << 16));
    // 0x124340: 0xae021984  sw          $v0, 0x1984($s0)
    ctx->pc = 0x124340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6532), GPR_U32(ctx, 2));
    // 0x124344: 0xc048fdc  jal         func_123F70
    ctx->pc = 0x124344u;
    SET_GPR_U32(ctx, 31, 0x12434Cu);
    ctx->pc = 0x124348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124344u;
            // 0x124348: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12434Cu; }
        if (ctx->pc != 0x12434Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12434Cu; }
        if (ctx->pc != 0x12434Cu) { return; }
    }
    ctx->pc = 0x12434Cu;
    // 0x12434c: 0xae221988  sw          $v0, 0x1988($s1)
    ctx->pc = 0x12434cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6536), GPR_U32(ctx, 2));
    // 0x124350: 0x8e43197c  lw          $v1, 0x197C($s2)
    ctx->pc = 0x124350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6524)));
    // 0x124354: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x124354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_124358:
    // 0x124358: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x124358u;
    {
        const bool branch_taken_0x124358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12435Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124358u;
            // 0x12435c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124358) {
            ctx->pc = 0x12437Cu;
            goto label_12437c;
        }
    }
    ctx->pc = 0x124360u;
    // 0x124360: 0xc048fdc  jal         func_123F70
    ctx->pc = 0x124360u;
    SET_GPR_U32(ctx, 31, 0x124368u);
    ctx->pc = 0x124364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124360u;
            // 0x124364: 0x3c100017  lui         $s0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124368u; }
        if (ctx->pc != 0x124368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124368u; }
        if (ctx->pc != 0x124368u) { return; }
    }
    ctx->pc = 0x124368u;
    // 0x124368: 0x3c110017  lui         $s1, 0x17
    ctx->pc = 0x124368u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)23 << 16));
    // 0x12436c: 0xae02198c  sw          $v0, 0x198C($s0)
    ctx->pc = 0x12436cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6540), GPR_U32(ctx, 2));
    // 0x124370: 0xc048fdc  jal         func_123F70
    ctx->pc = 0x124370u;
    SET_GPR_U32(ctx, 31, 0x124378u);
    ctx->pc = 0x124374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124370u;
            // 0x124374: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124378u; }
        if (ctx->pc != 0x124378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124378u; }
        if (ctx->pc != 0x124378u) { return; }
    }
    ctx->pc = 0x124378u;
    // 0x124378: 0xae221990  sw          $v0, 0x1990($s1)
    ctx->pc = 0x124378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6544), GPR_U32(ctx, 2));
label_12437c:
    // 0x12437c: 0xc0491a2  jal         func_124688
    ctx->pc = 0x12437Cu;
    SET_GPR_U32(ctx, 31, 0x124384u);
    ctx->pc = 0x124688u;
    if (runtime->hasFunction(0x124688u)) {
        auto targetFn = runtime->lookupFunction(0x124688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124384u; }
        if (ctx->pc != 0x124384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _extrainfo_0x124688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124384u; }
        if (ctx->pc != 0x124384u) { return; }
    }
    ctx->pc = 0x124384u;
    // 0x124384: 0xc0490ea  jal         func_1243A8
    ctx->pc = 0x124384u;
    SET_GPR_U32(ctx, 31, 0x12438Cu);
    ctx->pc = 0x1243A8u;
    if (runtime->hasFunction(0x1243A8u)) {
        auto targetFn = runtime->lookupFunction(0x1243A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12438Cu; }
        if (ctx->pc != 0x12438Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _extensionAndUserData_0x1243a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12438Cu; }
        if (ctx->pc != 0x12438Cu) { return; }
    }
    ctx->pc = 0x12438Cu;
    // 0x12438c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12438cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124390: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x124390u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124394: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x124394u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124398: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12439c: 0x80491b0  j           func_1246C0
    ctx->pc = 0x12439Cu;
    ctx->pc = 0x1243A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12439Cu;
            // 0x1243a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1246C0u;
    if (runtime->hasFunction(0x1246C0u)) {
        auto targetFn = runtime->lookupFunction(0x1246C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _updateTempTackData_0x1246c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1243A4u;
}
