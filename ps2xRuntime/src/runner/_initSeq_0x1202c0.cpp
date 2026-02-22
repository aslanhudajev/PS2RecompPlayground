#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _initSeq
// Address: 0x1202c0 - 0x120604
void _initSeq_0x1202c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1202c0u;

    // 0x1202c0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1202c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1202c4: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x1202c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x1202c8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1202c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1202cc: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x1202ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1202d0: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x1202d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x1202d4: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1202d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1202d8: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1202d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x1202dc: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1202dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1202e0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1202e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1202e4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1202e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1202e8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1202e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1202ec: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1202ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1202f0: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x1202f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x1202f4: 0x8c4c20b0  lw          $t4, 0x20B0($v0)
    ctx->pc = 0x1202f4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8368)));
    // 0x1202f8: 0x15800010  bnez        $t4, . + 4 + (0x10 << 2)
    ctx->pc = 0x1202F8u;
    {
        const bool branch_taken_0x1202f8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1202FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1202F8u;
            // 0x1202fc: 0x8d7e0040  lw          $fp, 0x40($t3) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1202f8) {
            ctx->pc = 0x12033Cu;
            goto label_12033c;
        }
    }
    ctx->pc = 0x120300u;
    // 0x120300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x120300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120304: 0x3c080017  lui         $t0, 0x17
    ctx->pc = 0x120304u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)23 << 16));
    // 0x120308: 0x3c090017  lui         $t1, 0x17
    ctx->pc = 0x120308u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)23 << 16));
    // 0x12030c: 0x3c0a0017  lui         $t2, 0x17
    ctx->pc = 0x12030cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)23 << 16));
    // 0x120310: 0x3c070017  lui         $a3, 0x17
    ctx->pc = 0x120310u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)23 << 16));
    // 0x120314: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x120314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x120318: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x120318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x12031c: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x12031cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x120320: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x120320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x120324: 0xace419ac  sw          $a0, 0x19AC($a3)
    ctx->pc = 0x120324u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6572), GPR_U32(ctx, 4));
    // 0x120328: 0xaca219b4  sw          $v0, 0x19B4($a1)
    ctx->pc = 0x120328u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6580), GPR_U32(ctx, 2));
    // 0x12032c: 0xacc3196c  sw          $v1, 0x196C($a2)
    ctx->pc = 0x12032cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6508), GPR_U32(ctx, 3));
    // 0x120330: 0xad021948  sw          $v0, 0x1948($t0)
    ctx->pc = 0x120330u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 6472), GPR_U32(ctx, 2));
    // 0x120334: 0xad22194c  sw          $v0, 0x194C($t1)
    ctx->pc = 0x120334u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 6476), GPR_U32(ctx, 2));
    // 0x120338: 0xad4219c8  sw          $v0, 0x19C8($t2)
    ctx->pc = 0x120338u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 6600), GPR_U32(ctx, 2));
label_12033c:
    // 0x12033c: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x12033cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x120340: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x120340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x120344: 0x8c621920  lw          $v0, 0x1920($v1)
    ctx->pc = 0x120344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6432)));
    // 0x120348: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x120348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x12034c: 0x24a6192c  addiu       $a2, $a1, 0x192C
    ctx->pc = 0x12034cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 6444));
    // 0x120350: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x120350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x120354: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x120354u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x120358: 0x1180000a  beqz        $t4, . + 4 + (0xA << 2)
    ctx->pc = 0x120358u;
    {
        const bool branch_taken_0x120358 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x12035Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120358u;
            // 0x12035c: 0xac821928  sw          $v0, 0x1928($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 6440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120358) {
            ctx->pc = 0x120384u;
            goto label_120384;
        }
    }
    ctx->pc = 0x120360u;
    // 0x120360: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x120360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x120364: 0x8c431948  lw          $v1, 0x1948($v0)
    ctx->pc = 0x120364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6472)));
    // 0x120368: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x120368u;
    {
        const bool branch_taken_0x120368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12036Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120368u;
            // 0x12036c: 0x3c030017  lui         $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120368) {
            ctx->pc = 0x120388u;
            goto label_120388;
        }
    }
    ctx->pc = 0x120370u;
    // 0x120370: 0x8c621924  lw          $v0, 0x1924($v1)
    ctx->pc = 0x120370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6436)));
    // 0x120374: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x120374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x120378: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x120378u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x12037c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12037Cu;
    {
        const bool branch_taken_0x12037c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12037Cu;
            // 0x120380: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12037c) {
            ctx->pc = 0x120394u;
            goto label_120394;
        }
    }
    ctx->pc = 0x120384u;
label_120384:
    // 0x120384: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x120384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
label_120388:
    // 0x120388: 0x8c621924  lw          $v0, 0x1924($v1)
    ctx->pc = 0x120388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6436)));
    // 0x12038c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x12038cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x120390: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x120390u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_120394:
    // 0x120394: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x120394u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x120398: 0x3c160017  lui         $s6, 0x17
    ctx->pc = 0x120398u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)23 << 16));
    // 0x12039c: 0x8c821928  lw          $v0, 0x1928($a0)
    ctx->pc = 0x12039cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6440)));
    // 0x1203a0: 0x3c170017  lui         $s7, 0x17
    ctx->pc = 0x1203a0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)23 << 16));
    // 0x1203a4: 0x8ca3192c  lw          $v1, 0x192C($a1)
    ctx->pc = 0x1203a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6444)));
    // 0x1203a8: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x1203a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1203ac: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1203acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1203b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1203b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1203b4: 0xaec6190c  sw          $a2, 0x190C($s6)
    ctx->pc = 0x1203b4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 6412), GPR_U32(ctx, 6));
    // 0x1203b8: 0x14c40004  bne         $a2, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1203B8u;
    {
        const bool branch_taken_0x1203b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x1203BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1203B8u;
            // 0x1203bc: 0xaee31910  sw          $v1, 0x1910($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 6416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1203b8) {
            ctx->pc = 0x1203CCu;
            goto label_1203cc;
        }
    }
    ctx->pc = 0x1203C0u;
    // 0x1203c0: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x1203c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1203c4: 0x10620084  beq         $v1, $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x1203C4u;
    {
        const bool branch_taken_0x1203c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1203C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1203C4u;
            // 0x1203c8: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1203c4) {
            ctx->pc = 0x1205D8u;
            goto label_1205d8;
        }
    }
    ctx->pc = 0x1203CCu;
label_1203cc:
    // 0x1203cc: 0x24100180  addiu       $s0, $zero, 0x180
    ctx->pc = 0x1203ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1203d0: 0xad630004  sw          $v1, 0x4($t3)
    ctx->pc = 0x1203d0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 3));
    // 0x1203d4: 0x708018  mult        $s0, $v1, $s0
    ctx->pc = 0x1203d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1203d8: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x1203d8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x1203dc: 0x62043  sra         $a0, $a2, 1
    ctx->pc = 0x1203dcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 1));
    // 0x1203e0: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x1203e0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1203e4: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x1203e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x1203e8: 0x27d10108  addiu       $s1, $fp, 0x108
    ctx->pc = 0x1203e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 264));
    // 0x1203ec: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x1203ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x1203f0: 0xac441914  sw          $a0, 0x1914($v0)
    ctx->pc = 0x1203f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6420), GPR_U32(ctx, 4));
    // 0x1203f4: 0xd08018  mult        $s0, $a2, $s0
    ctx->pc = 0x1203f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1203f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1203f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1203fc: 0xac651918  sw          $a1, 0x1918($v1)
    ctx->pc = 0x1203fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6424), GPR_U32(ctx, 5));
    // 0x120400: 0xc047e32  jal         func_11F8C8
    ctx->pc = 0x120400u;
    SET_GPR_U32(ctx, 31, 0x120408u);
    ctx->pc = 0x120404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120400u;
            // 0x120404: 0x108202  srl         $s0, $s0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F8C8u;
    if (runtime->hasFunction(0x11F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x11F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120408u; }
        if (ctx->pc != 0x120408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _alalcFree_0x11f8c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120408u; }
        if (ctx->pc != 0x120408u) { return; }
    }
    ctx->pc = 0x120408u;
    // 0x120408: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x120408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12040c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12040cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120410: 0xc047e36  jal         func_11F8D8
    ctx->pc = 0x120410u;
    SET_GPR_U32(ctx, 31, 0x120418u);
    ctx->pc = 0x120414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120410u;
            // 0x120414: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F8D8u;
    if (runtime->hasFunction(0x11F8D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F8D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120418u; }
        if (ctx->pc != 0x120418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _alalcAlloc_0x11f8d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120418u; }
        if (ctx->pc != 0x120418u) { return; }
    }
    ctx->pc = 0x120418u;
    // 0x120418: 0xafc200fc  sw          $v0, 0xFC($fp)
    ctx->pc = 0x120418u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 252), GPR_U32(ctx, 2));
    // 0x12041c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12041cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120420: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x120420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120424: 0xc047e36  jal         func_11F8D8
    ctx->pc = 0x120424u;
    SET_GPR_U32(ctx, 31, 0x12042Cu);
    ctx->pc = 0x120428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120424u;
            // 0x120428: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F8D8u;
    if (runtime->hasFunction(0x11F8D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F8D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12042Cu; }
        if (ctx->pc != 0x12042Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _alalcAlloc_0x11f8d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12042Cu; }
        if (ctx->pc != 0x12042Cu) { return; }
    }
    ctx->pc = 0x12042Cu;
    // 0x12042c: 0xafc20100  sw          $v0, 0x100($fp)
    ctx->pc = 0x12042cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 256), GPR_U32(ctx, 2));
    // 0x120430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x120430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120434: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x120434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120438: 0xc047e36  jal         func_11F8D8
    ctx->pc = 0x120438u;
    SET_GPR_U32(ctx, 31, 0x120440u);
    ctx->pc = 0x12043Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120438u;
            // 0x12043c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F8D8u;
    if (runtime->hasFunction(0x11F8D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F8D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120440u; }
        if (ctx->pc != 0x120440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _alalcAlloc_0x11f8d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120440u; }
        if (ctx->pc != 0x120440u) { return; }
    }
    ctx->pc = 0x120440u;
    // 0x120440: 0xafc20104  sw          $v0, 0x104($fp)
    ctx->pc = 0x120440u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 260), GPR_U32(ctx, 2));
    // 0x120444: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x120444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x120448: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x120448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12044c: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x12044cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x120450: 0x24421d90  addiu       $v0, $v0, 0x1D90
    ctx->pc = 0x120450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7568));
    // 0x120454: 0x3c110017  lui         $s1, 0x17
    ctx->pc = 0x120454u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)23 << 16));
    // 0x120458: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x120458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x12045c: 0x3c120017  lui         $s2, 0x17
    ctx->pc = 0x12045cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)23 << 16));
    // 0x120460: 0x3c130017  lui         $s3, 0x17
    ctx->pc = 0x120460u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)23 << 16));
    // 0x120464: 0x3c140017  lui         $s4, 0x17
    ctx->pc = 0x120464u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)23 << 16));
    // 0x120468: 0x8fc200fc  lw          $v0, 0xFC($fp)
    ctx->pc = 0x120468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 252)));
    // 0x12046c: 0x3c150017  lui         $s5, 0x17
    ctx->pc = 0x12046cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)23 << 16));
    // 0x120470: 0x26101a50  addiu       $s0, $s0, 0x1A50
    ctx->pc = 0x120470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6736));
    // 0x120474: 0x26311ab8  addiu       $s1, $s1, 0x1AB8
    ctx->pc = 0x120474u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6840));
    // 0x120478: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x120478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x12047c: 0x26521b20  addiu       $s2, $s2, 0x1B20
    ctx->pc = 0x12047cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6944));
    // 0x120480: 0x26731b88  addiu       $s3, $s3, 0x1B88
    ctx->pc = 0x120480u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 7048));
    // 0x120484: 0x26941bf0  addiu       $s4, $s4, 0x1BF0
    ctx->pc = 0x120484u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 7152));
    // 0x120488: 0x8fc20100  lw          $v0, 0x100($fp)
    ctx->pc = 0x120488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 256)));
    // 0x12048c: 0x26b51c58  addiu       $s5, $s5, 0x1C58
    ctx->pc = 0x12048cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 7256));
    // 0x120490: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x120490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120494: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x120494u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120498: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x120498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x12049c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x12049cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1204a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1204a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1204a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1204a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1204a8: 0x8fc20104  lw          $v0, 0x104($fp)
    ctx->pc = 0x1204a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 260)));
    // 0x1204ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1204acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1204b0: 0x3c0a0017  lui         $t2, 0x17
    ctx->pc = 0x1204b0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)23 << 16));
    // 0x1204b4: 0x254a1cc0  addiu       $t2, $t2, 0x1CC0
    ctx->pc = 0x1204b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 7360));
    // 0x1204b8: 0x3c0b0017  lui         $t3, 0x17
    ctx->pc = 0x1204b8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)23 << 16));
    // 0x1204bc: 0x256b1d28  addiu       $t3, $t3, 0x1D28
    ctx->pc = 0x1204bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 7464));
    // 0x1204c0: 0xc048182  jal         func_120608
    ctx->pc = 0x1204C0u;
    SET_GPR_U32(ctx, 31, 0x1204C8u);
    ctx->pc = 0x1204C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1204C0u;
            // 0x1204c4: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120608u;
    if (runtime->hasFunction(0x120608u)) {
        auto targetFn = runtime->lookupFunction(0x120608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1204C8u; }
        if (ctx->pc != 0x1204C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _initRefImages_0x120608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1204C8u; }
        if (ctx->pc != 0x1204C8u) { return; }
    }
    ctx->pc = 0x1204C8u;
    // 0x1204c8: 0x8ec5190c  lw          $a1, 0x190C($s6)
    ctx->pc = 0x1204c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 6412)));
    // 0x1204cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1204ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1204d0: 0xc048052  jal         func_120148
    ctx->pc = 0x1204D0u;
    SET_GPR_U32(ctx, 31, 0x1204D8u);
    ctx->pc = 0x1204D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1204D0u;
            // 0x1204d4: 0x8ee61910  lw          $a2, 0x1910($s7) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 6416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120148u;
    if (runtime->hasFunction(0x120148u)) {
        auto targetFn = runtime->lookupFunction(0x120148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1204D8u; }
        if (ctx->pc != 0x1204D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x120148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1204D8u; }
        if (ctx->pc != 0x1204D8u) { return; }
    }
    ctx->pc = 0x1204D8u;
    // 0x1204d8: 0x8ec5190c  lw          $a1, 0x190C($s6)
    ctx->pc = 0x1204d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 6412)));
    // 0x1204dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1204dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1204e0: 0xc048052  jal         func_120148
    ctx->pc = 0x1204E0u;
    SET_GPR_U32(ctx, 31, 0x1204E8u);
    ctx->pc = 0x1204E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1204E0u;
            // 0x1204e4: 0x8ee61910  lw          $a2, 0x1910($s7) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 6416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120148u;
    if (runtime->hasFunction(0x120148u)) {
        auto targetFn = runtime->lookupFunction(0x120148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1204E8u; }
        if (ctx->pc != 0x1204E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x120148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1204E8u; }
        if (ctx->pc != 0x1204E8u) { return; }
    }
    ctx->pc = 0x1204E8u;
    // 0x1204e8: 0x8ec5190c  lw          $a1, 0x190C($s6)
    ctx->pc = 0x1204e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 6412)));
    // 0x1204ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1204ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1204f0: 0xc048052  jal         func_120148
    ctx->pc = 0x1204F0u;
    SET_GPR_U32(ctx, 31, 0x1204F8u);
    ctx->pc = 0x1204F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1204F0u;
            // 0x1204f4: 0x8ee61910  lw          $a2, 0x1910($s7) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 6416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120148u;
    if (runtime->hasFunction(0x120148u)) {
        auto targetFn = runtime->lookupFunction(0x120148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1204F8u; }
        if (ctx->pc != 0x1204F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x120148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1204F8u; }
        if (ctx->pc != 0x1204F8u) { return; }
    }
    ctx->pc = 0x1204F8u;
    // 0x1204f8: 0x8ee61910  lw          $a2, 0x1910($s7)
    ctx->pc = 0x1204f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 6416)));
    // 0x1204fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1204fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120500: 0x8ec5190c  lw          $a1, 0x190C($s6)
    ctx->pc = 0x120500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 6412)));
    // 0x120504: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x120504u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x120508: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x120508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x12050c: 0xc048052  jal         func_120148
    ctx->pc = 0x12050Cu;
    SET_GPR_U32(ctx, 31, 0x120514u);
    ctx->pc = 0x120510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12050Cu;
            // 0x120510: 0x63043  sra         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120148u;
    if (runtime->hasFunction(0x120148u)) {
        auto targetFn = runtime->lookupFunction(0x120148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120514u; }
        if (ctx->pc != 0x120514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x120148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120514u; }
        if (ctx->pc != 0x120514u) { return; }
    }
    ctx->pc = 0x120514u;
    // 0x120514: 0x8ee61910  lw          $a2, 0x1910($s7)
    ctx->pc = 0x120514u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 6416)));
    // 0x120518: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x120518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12051c: 0x8ec5190c  lw          $a1, 0x190C($s6)
    ctx->pc = 0x12051cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 6412)));
    // 0x120520: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x120520u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x120524: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x120524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x120528: 0xc048052  jal         func_120148
    ctx->pc = 0x120528u;
    SET_GPR_U32(ctx, 31, 0x120530u);
    ctx->pc = 0x12052Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120528u;
            // 0x12052c: 0x63043  sra         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120148u;
    if (runtime->hasFunction(0x120148u)) {
        auto targetFn = runtime->lookupFunction(0x120148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120530u; }
        if (ctx->pc != 0x120530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x120148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120530u; }
        if (ctx->pc != 0x120530u) { return; }
    }
    ctx->pc = 0x120530u;
    // 0x120530: 0x8ee61910  lw          $a2, 0x1910($s7)
    ctx->pc = 0x120530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 6416)));
    // 0x120534: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x120534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120538: 0x8ec5190c  lw          $a1, 0x190C($s6)
    ctx->pc = 0x120538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 6412)));
    // 0x12053c: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x12053cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x120540: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x120540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x120544: 0xc048052  jal         func_120148
    ctx->pc = 0x120544u;
    SET_GPR_U32(ctx, 31, 0x12054Cu);
    ctx->pc = 0x120548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120544u;
            // 0x120548: 0x63043  sra         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120148u;
    if (runtime->hasFunction(0x120148u)) {
        auto targetFn = runtime->lookupFunction(0x120148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12054Cu; }
        if (ctx->pc != 0x12054Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x120148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12054Cu; }
        if (ctx->pc != 0x12054Cu) { return; }
    }
    ctx->pc = 0x12054Cu;
    // 0x12054c: 0x8ee61910  lw          $a2, 0x1910($s7)
    ctx->pc = 0x12054cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 6416)));
    // 0x120550: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x120550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x120554: 0x24841cc0  addiu       $a0, $a0, 0x1CC0
    ctx->pc = 0x120554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7360));
    // 0x120558: 0x8ec5190c  lw          $a1, 0x190C($s6)
    ctx->pc = 0x120558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 6412)));
    // 0x12055c: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x12055cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x120560: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x120560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x120564: 0xc048052  jal         func_120148
    ctx->pc = 0x120564u;
    SET_GPR_U32(ctx, 31, 0x12056Cu);
    ctx->pc = 0x120568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120564u;
            // 0x120568: 0x63043  sra         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120148u;
    if (runtime->hasFunction(0x120148u)) {
        auto targetFn = runtime->lookupFunction(0x120148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12056Cu; }
        if (ctx->pc != 0x12056Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x120148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12056Cu; }
        if (ctx->pc != 0x12056Cu) { return; }
    }
    ctx->pc = 0x12056Cu;
    // 0x12056c: 0x8ee61910  lw          $a2, 0x1910($s7)
    ctx->pc = 0x12056cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 6416)));
    // 0x120570: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x120570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x120574: 0x24841d28  addiu       $a0, $a0, 0x1D28
    ctx->pc = 0x120574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7464));
    // 0x120578: 0x8ec5190c  lw          $a1, 0x190C($s6)
    ctx->pc = 0x120578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 6412)));
    // 0x12057c: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x12057cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x120580: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x120580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x120584: 0xc048052  jal         func_120148
    ctx->pc = 0x120584u;
    SET_GPR_U32(ctx, 31, 0x12058Cu);
    ctx->pc = 0x120588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120584u;
            // 0x120588: 0x63043  sra         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120148u;
    if (runtime->hasFunction(0x120148u)) {
        auto targetFn = runtime->lookupFunction(0x120148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12058Cu; }
        if (ctx->pc != 0x12058Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x120148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12058Cu; }
        if (ctx->pc != 0x12058Cu) { return; }
    }
    ctx->pc = 0x12058Cu;
    // 0x12058c: 0x8ee61910  lw          $a2, 0x1910($s7)
    ctx->pc = 0x12058cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 6416)));
    // 0x120590: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x120590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x120594: 0x24841d90  addiu       $a0, $a0, 0x1D90
    ctx->pc = 0x120594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7568));
    // 0x120598: 0x8ec5190c  lw          $a1, 0x190C($s6)
    ctx->pc = 0x120598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 6412)));
    // 0x12059c: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x12059cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1205a0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1205a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1205a4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1205a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1205a8: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1205a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1205ac: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x1205acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1205b0: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x1205b0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x1205b4: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1205b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1205b8: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1205b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1205bc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1205bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1205c0: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1205c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1205c4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1205c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1205c8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1205c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1205cc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1205ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1205d0: 0x8048052  j           func_120148
    ctx->pc = 0x1205D0u;
    ctx->pc = 0x1205D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1205D0u;
            // 0x1205d4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120148u;
    if (runtime->hasFunction(0x120148u)) {
        auto targetFn = runtime->lookupFunction(0x120148u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ps2__RefImageInit_0x120148(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1205D8u;
label_1205d8:
    // 0x1205d8: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1205d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1205dc: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x1205dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1205e0: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1205e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1205e4: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1205e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1205e8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1205e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1205ec: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1205ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1205f0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1205f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1205f4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1205f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1205f8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1205f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1205fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1205FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1205FCu;
            // 0x120600: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12033Cu: goto label_12033c;
            case 0x120384u: goto label_120384;
            case 0x120388u: goto label_120388;
            case 0x120394u: goto label_120394;
            case 0x1203CCu: goto label_1203cc;
            case 0x1205D8u: goto label_1205d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x120604u;
}
