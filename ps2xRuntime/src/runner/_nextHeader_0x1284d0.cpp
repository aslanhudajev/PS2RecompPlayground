#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _nextHeader
// Address: 0x1284d0 - 0x1285dc
void _nextHeader_0x1284d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_nextHeader_0x1284d0");
#endif

    ctx->pc = 0x1284d0u;

    // 0x1284d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1284d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1284d4: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1284d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1284d8: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1284d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x1284dc: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x1284dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1284e0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1284e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1284e4: 0x241501b3  addiu       $s5, $zero, 0x1B3
    ctx->pc = 0x1284e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
    // 0x1284e8: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1284e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1284ec: 0x24140100  addiu       $s4, $zero, 0x100
    ctx->pc = 0x1284ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1284f0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1284f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1284f4: 0x241301b7  addiu       $s3, $zero, 0x1B7
    ctx->pc = 0x1284f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    // 0x1284f8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1284f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1284fc: 0x241201b8  addiu       $s2, $zero, 0x1B8
    ctx->pc = 0x1284fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
    // 0x128500: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x128500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x128504: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x128504u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x128508: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x128508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x12850c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12850cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_128510:
    // 0x128510: 0xc04a0fa  jal         func_1283E8
    ctx->pc = 0x128510u;
    SET_GPR_U32(ctx, 31, 0x128518u);
    ctx->pc = 0x128514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128510u;
            // 0x128514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283E8u;
    if (runtime->hasFunction(0x1283E8u)) {
        auto targetFn = runtime->lookupFunction(0x1283E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128518u; }
        if (ctx->pc != 0x128518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextStartCode_0x1283e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128518u; }
        if (ctx->pc != 0x128518u) { return; }
    }
    ctx->pc = 0x128518u;
    // 0x128518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12851c: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x12851Cu;
    SET_GPR_U32(ctx, 31, 0x128524u);
    ctx->pc = 0x128520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12851Cu;
            // 0x128520: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128524u; }
        if (ctx->pc != 0x128524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128524u; }
        if (ctx->pc != 0x128524u) { return; }
    }
    ctx->pc = 0x128524u;
    // 0x128524: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x128524u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128528: 0x1075000d  beq         $v1, $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x128528u;
    {
        const bool branch_taken_0x128528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x12852Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128528u;
            // 0x12852c: 0x2c6201b4  sltiu       $v0, $v1, 0x1B4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)436) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128528) {
            ctx->pc = 0x128560u;
            goto label_128560;
        }
    }
    ctx->pc = 0x128530u;
    // 0x128530: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x128530u;
    {
        const bool branch_taken_0x128530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128530) {
            ctx->pc = 0x128548u;
            goto label_128548;
        }
    }
    ctx->pc = 0x128538u;
    // 0x128538: 0x10740011  beq         $v1, $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x128538u;
    {
        const bool branch_taken_0x128538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x128538) {
            ctx->pc = 0x128580u;
            goto label_128580;
        }
    }
    ctx->pc = 0x128540u;
    // 0x128540: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x128540u;
    {
        const bool branch_taken_0x128540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128540) {
            ctx->pc = 0x128510u;
            goto label_128510;
        }
    }
    ctx->pc = 0x128548u;
label_128548:
    // 0x128548: 0x1073001a  beq         $v1, $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x128548u;
    {
        const bool branch_taken_0x128548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x12854Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128548u;
            // 0x12854c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128548) {
            ctx->pc = 0x1285B4u;
            goto label_1285b4;
        }
    }
    ctx->pc = 0x128550u;
    // 0x128550: 0x10720007  beq         $v1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x128550u;
    {
        const bool branch_taken_0x128550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x128550) {
            ctx->pc = 0x128570u;
            goto label_128570;
        }
    }
    ctx->pc = 0x128558u;
    // 0x128558: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x128558u;
    {
        const bool branch_taken_0x128558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128558) {
            ctx->pc = 0x128510u;
            goto label_128510;
        }
    }
    ctx->pc = 0x128560u;
label_128560:
    // 0x128560: 0xc04b07c  jal         func_12C1F0
    ctx->pc = 0x128560u;
    SET_GPR_U32(ctx, 31, 0x128568u);
    ctx->pc = 0x128564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128560u;
            // 0x128564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1F0u;
    if (runtime->hasFunction(0x12C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128568u; }
        if (ctx->pc != 0x128568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sequenceHeader_0x12c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128568u; }
        if (ctx->pc != 0x128568u) { return; }
    }
    ctx->pc = 0x128568u;
    // 0x128568: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x128568u;
    {
        const bool branch_taken_0x128568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128568) {
            ctx->pc = 0x128510u;
            goto label_128510;
        }
    }
    ctx->pc = 0x128570u;
label_128570:
    // 0x128570: 0xc04a2a0  jal         func_128A80
    ctx->pc = 0x128570u;
    SET_GPR_U32(ctx, 31, 0x128578u);
    ctx->pc = 0x128574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128570u;
            // 0x128574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128A80u;
    if (runtime->hasFunction(0x128A80u)) {
        auto targetFn = runtime->lookupFunction(0x128A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128578u; }
        if (ctx->pc != 0x128578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _groupOfPicturesHeader_0x128a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128578u; }
        if (ctx->pc != 0x128578u) { return; }
    }
    ctx->pc = 0x128578u;
    // 0x128578: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x128578u;
    {
        const bool branch_taken_0x128578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128578) {
            ctx->pc = 0x128510u;
            goto label_128510;
        }
    }
    ctx->pc = 0x128580u;
label_128580:
    // 0x128580: 0xc04a178  jal         func_1285E0
    ctx->pc = 0x128580u;
    SET_GPR_U32(ctx, 31, 0x128588u);
    ctx->pc = 0x128584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128580u;
            // 0x128584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1285E0u;
    if (runtime->hasFunction(0x1285E0u)) {
        auto targetFn = runtime->lookupFunction(0x1285E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128588u; }
        if (ctx->pc != 0x128588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _pictureHeader_0x1285e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128588u; }
        if (ctx->pc != 0x128588u) { return; }
    }
    ctx->pc = 0x128588u;
    // 0x128588: 0x8e040858  lw          $a0, 0x858($s0)
    ctx->pc = 0x128588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x12858c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12858cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128590: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x128590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x128594: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x128594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x128598: 0xc04ae00  jal         func_12B800
    ctx->pc = 0x128598u;
    SET_GPR_U32(ctx, 31, 0x1285A0u);
    ctx->pc = 0x12859Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128598u;
            // 0x12859c: 0xffb10008  sd          $s1, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B800u;
    if (runtime->hasFunction(0x12B800u)) {
        auto targetFn = runtime->lookupFunction(0x12B800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1285A0u; }
        if (ctx->pc != 0x1285A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x12b800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1285A0u; }
        if (ctx->pc != 0x1285A0u) { return; }
    }
    ctx->pc = 0x1285A0u;
    // 0x1285a0: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x1285a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1285a4: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x1285a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1285a8: 0xfe020830  sd          $v0, 0x830($s0)
    ctx->pc = 0x1285a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2096), GPR_U64(ctx, 2));
    // 0x1285ac: 0xfe030828  sd          $v1, 0x828($s0)
    ctx->pc = 0x1285acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2088), GPR_U64(ctx, 3));
    // 0x1285b0: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1285b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_1285b4:
    // 0x1285b4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1285b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1285b8: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1285b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1285bc: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1285bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1285c0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1285c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1285c4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1285c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1285c8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1285c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1285cc: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1285ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1285d0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1285d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1285d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1285D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1285D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1285D4u;
            // 0x1285d8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x128510u: goto label_128510;
            case 0x128548u: goto label_128548;
            case 0x128560u: goto label_128560;
            case 0x128570u: goto label_128570;
            case 0x128580u: goto label_128580;
            case 0x1285B4u: goto label_1285b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1285DCu;
}
