#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: StageEX2EnemyGenerate
// Address: 0x1681d0 - 0x169048
void StageEX2EnemyGenerate_0x1681d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("StageEX2EnemyGenerate_0x1681d0");
#endif

    ctx->pc = 0x1681d0u;

    // 0x1681d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1681d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1681d4: 0x24030f3c  addiu       $v1, $zero, 0xF3C
    ctx->pc = 0x1681d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3900));
    // 0x1681d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1681d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1681dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1681dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1681e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1681e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1681e4: 0x1203033e  beq         $s0, $v1, . + 4 + (0x33E << 2)
    ctx->pc = 0x1681E4u;
    {
        const bool branch_taken_0x1681e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1681E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1681E4u;
            // 0x1681e8: 0x24030d48  addiu       $v1, $zero, 0xD48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1681e4) {
            ctx->pc = 0x168EE0u;
            goto label_168ee0;
        }
    }
    ctx->pc = 0x1681ECu;
    // 0x1681ec: 0x12030326  beq         $s0, $v1, . + 4 + (0x326 << 2)
    ctx->pc = 0x1681ECu;
    {
        const bool branch_taken_0x1681ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1681ec) {
            ctx->pc = 0x168E88u;
            goto label_168e88;
        }
    }
    ctx->pc = 0x1681F4u;
    // 0x1681f4: 0x24030c80  addiu       $v1, $zero, 0xC80
    ctx->pc = 0x1681f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3200));
    // 0x1681f8: 0x12030319  beq         $s0, $v1, . + 4 + (0x319 << 2)
    ctx->pc = 0x1681F8u;
    {
        const bool branch_taken_0x1681f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1681FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1681F8u;
            // 0x1681fc: 0x24030c1c  addiu       $v1, $zero, 0xC1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1681f8) {
            ctx->pc = 0x168E60u;
            goto label_168e60;
        }
    }
    ctx->pc = 0x168200u;
    // 0x168200: 0x1203030d  beq         $s0, $v1, . + 4 + (0x30D << 2)
    ctx->pc = 0x168200u;
    {
        const bool branch_taken_0x168200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x168200) {
            ctx->pc = 0x168E38u;
            goto label_168e38;
        }
    }
    ctx->pc = 0x168208u;
    // 0x168208: 0x2403092e  addiu       $v1, $zero, 0x92E
    ctx->pc = 0x168208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2350));
    // 0x16820c: 0x12030300  beq         $s0, $v1, . + 4 + (0x300 << 2)
    ctx->pc = 0x16820Cu;
    {
        const bool branch_taken_0x16820c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x168210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16820Cu;
            // 0x168210: 0x240308ca  addiu       $v1, $zero, 0x8CA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16820c) {
            ctx->pc = 0x168E10u;
            goto label_168e10;
        }
    }
    ctx->pc = 0x168214u;
    // 0x168214: 0x120302f4  beq         $s0, $v1, . + 4 + (0x2F4 << 2)
    ctx->pc = 0x168214u;
    {
        const bool branch_taken_0x168214 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x168214) {
            ctx->pc = 0x168DE8u;
            goto label_168de8;
        }
    }
    ctx->pc = 0x16821Cu;
    // 0x16821c: 0x24030898  addiu       $v1, $zero, 0x898
    ctx->pc = 0x16821cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x168220: 0x120302e7  beq         $s0, $v1, . + 4 + (0x2E7 << 2)
    ctx->pc = 0x168220u;
    {
        const bool branch_taken_0x168220 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x168224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168220u;
            // 0x168224: 0x24030834  addiu       $v1, $zero, 0x834 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168220) {
            ctx->pc = 0x168DC0u;
            goto label_168dc0;
        }
    }
    ctx->pc = 0x168228u;
    // 0x168228: 0x120302df  beq         $s0, $v1, . + 4 + (0x2DF << 2)
    ctx->pc = 0x168228u;
    {
        const bool branch_taken_0x168228 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x168228) {
            ctx->pc = 0x168DA8u;
            goto label_168da8;
        }
    }
    ctx->pc = 0x168230u;
    // 0x168230: 0x240305dc  addiu       $v1, $zero, 0x5DC
    ctx->pc = 0x168230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x168234: 0x120302d6  beq         $s0, $v1, . + 4 + (0x2D6 << 2)
    ctx->pc = 0x168234u;
    {
        const bool branch_taken_0x168234 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x168238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168234u;
            // 0x168238: 0x240305c8  addiu       $v1, $zero, 0x5C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168234) {
            ctx->pc = 0x168D90u;
            goto label_168d90;
        }
    }
    ctx->pc = 0x16823Cu;
    // 0x16823c: 0x120302ce  beq         $s0, $v1, . + 4 + (0x2CE << 2)
    ctx->pc = 0x16823Cu;
    {
        const bool branch_taken_0x16823c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16823c) {
            ctx->pc = 0x168D78u;
            goto label_168d78;
        }
    }
    ctx->pc = 0x168244u;
    // 0x168244: 0x240305be  addiu       $v1, $zero, 0x5BE
    ctx->pc = 0x168244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1470));
    // 0x168248: 0x120302c5  beq         $s0, $v1, . + 4 + (0x2C5 << 2)
    ctx->pc = 0x168248u;
    {
        const bool branch_taken_0x168248 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16824Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168248u;
            // 0x16824c: 0x240305b4  addiu       $v1, $zero, 0x5B4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1460));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168248) {
            ctx->pc = 0x168D60u;
            goto label_168d60;
        }
    }
    ctx->pc = 0x168250u;
    // 0x168250: 0x120302bd  beq         $s0, $v1, . + 4 + (0x2BD << 2)
    ctx->pc = 0x168250u;
    {
        const bool branch_taken_0x168250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x168250) {
            ctx->pc = 0x168D48u;
            goto label_168d48;
        }
    }
    ctx->pc = 0x168258u;
    // 0x168258: 0x240305aa  addiu       $v1, $zero, 0x5AA
    ctx->pc = 0x168258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1450));
    // 0x16825c: 0x120302b4  beq         $s0, $v1, . + 4 + (0x2B4 << 2)
    ctx->pc = 0x16825Cu;
    {
        const bool branch_taken_0x16825c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x168260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16825Cu;
            // 0x168260: 0x240305a0  addiu       $v1, $zero, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16825c) {
            ctx->pc = 0x168D30u;
            goto label_168d30;
        }
    }
    ctx->pc = 0x168264u;
    // 0x168264: 0x120302ac  beq         $s0, $v1, . + 4 + (0x2AC << 2)
    ctx->pc = 0x168264u;
    {
        const bool branch_taken_0x168264 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x168264) {
            ctx->pc = 0x168D18u;
            goto label_168d18;
        }
    }
    ctx->pc = 0x16826Cu;
    // 0x16826c: 0x24030596  addiu       $v1, $zero, 0x596
    ctx->pc = 0x16826cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1430));
    // 0x168270: 0x120302a3  beq         $s0, $v1, . + 4 + (0x2A3 << 2)
    ctx->pc = 0x168270u;
    {
        const bool branch_taken_0x168270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x168274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168270u;
            // 0x168274: 0x2403058c  addiu       $v1, $zero, 0x58C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1420));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168270) {
            ctx->pc = 0x168D00u;
            goto label_168d00;
        }
    }
    ctx->pc = 0x168278u;
    // 0x168278: 0x1203029b  beq         $s0, $v1, . + 4 + (0x29B << 2)
    ctx->pc = 0x168278u;
    {
        const bool branch_taken_0x168278 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x168278) {
            ctx->pc = 0x168CE8u;
            goto label_168ce8;
        }
    }
    ctx->pc = 0x168280u;
    // 0x168280: 0x24030582  addiu       $v1, $zero, 0x582
    ctx->pc = 0x168280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1410));
    // 0x168284: 0x12030292  beq         $s0, $v1, . + 4 + (0x292 << 2)
    ctx->pc = 0x168284u;
    {
        const bool branch_taken_0x168284 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x168288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168284u;
            // 0x168288: 0x2403055a  addiu       $v1, $zero, 0x55A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1370));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168284) {
            ctx->pc = 0x168CD0u;
            goto label_168cd0;
        }
    }
    ctx->pc = 0x16828Cu;
    // 0x16828c: 0x1203028a  beq         $s0, $v1, . + 4 + (0x28A << 2)
    ctx->pc = 0x16828Cu;
    {
        const bool branch_taken_0x16828c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16828c) {
            ctx->pc = 0x168CB8u;
            goto label_168cb8;
        }
    }
    ctx->pc = 0x168294u;
    // 0x168294: 0x24030550  addiu       $v1, $zero, 0x550
    ctx->pc = 0x168294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1360));
    // 0x168298: 0x12030281  beq         $s0, $v1, . + 4 + (0x281 << 2)
    ctx->pc = 0x168298u;
    {
        const bool branch_taken_0x168298 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16829Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168298u;
            // 0x16829c: 0x24030546  addiu       $v1, $zero, 0x546 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168298) {
            ctx->pc = 0x168CA0u;
            goto label_168ca0;
        }
    }
    ctx->pc = 0x1682A0u;
    // 0x1682a0: 0x12030279  beq         $s0, $v1, . + 4 + (0x279 << 2)
    ctx->pc = 0x1682A0u;
    {
        const bool branch_taken_0x1682a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1682a0) {
            ctx->pc = 0x168C88u;
            goto label_168c88;
        }
    }
    ctx->pc = 0x1682A8u;
    // 0x1682a8: 0x2403053c  addiu       $v1, $zero, 0x53C
    ctx->pc = 0x1682a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1340));
    // 0x1682ac: 0x12030270  beq         $s0, $v1, . + 4 + (0x270 << 2)
    ctx->pc = 0x1682ACu;
    {
        const bool branch_taken_0x1682ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1682B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1682ACu;
            // 0x1682b0: 0x24030532  addiu       $v1, $zero, 0x532 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1330));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1682ac) {
            ctx->pc = 0x168C70u;
            goto label_168c70;
        }
    }
    ctx->pc = 0x1682B4u;
    // 0x1682b4: 0x12030268  beq         $s0, $v1, . + 4 + (0x268 << 2)
    ctx->pc = 0x1682B4u;
    {
        const bool branch_taken_0x1682b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1682b4) {
            ctx->pc = 0x168C58u;
            goto label_168c58;
        }
    }
    ctx->pc = 0x1682BCu;
    // 0x1682bc: 0x24030528  addiu       $v1, $zero, 0x528
    ctx->pc = 0x1682bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1320));
    // 0x1682c0: 0x1203025f  beq         $s0, $v1, . + 4 + (0x25F << 2)
    ctx->pc = 0x1682C0u;
    {
        const bool branch_taken_0x1682c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1682C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1682C0u;
            // 0x1682c4: 0x2403051e  addiu       $v1, $zero, 0x51E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1310));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1682c0) {
            ctx->pc = 0x168C40u;
            goto label_168c40;
        }
    }
    ctx->pc = 0x1682C8u;
    // 0x1682c8: 0x12030257  beq         $s0, $v1, . + 4 + (0x257 << 2)
    ctx->pc = 0x1682C8u;
    {
        const bool branch_taken_0x1682c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1682c8) {
            ctx->pc = 0x168C28u;
            goto label_168c28;
        }
    }
    ctx->pc = 0x1682D0u;
    // 0x1682d0: 0x240304c4  addiu       $v1, $zero, 0x4C4
    ctx->pc = 0x1682d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1220));
    // 0x1682d4: 0x1203024e  beq         $s0, $v1, . + 4 + (0x24E << 2)
    ctx->pc = 0x1682D4u;
    {
        const bool branch_taken_0x1682d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1682D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1682D4u;
            // 0x1682d8: 0x240304b0  addiu       $v1, $zero, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1682d4) {
            ctx->pc = 0x168C10u;
            goto label_168c10;
        }
    }
    ctx->pc = 0x1682DCu;
    // 0x1682dc: 0x12030246  beq         $s0, $v1, . + 4 + (0x246 << 2)
    ctx->pc = 0x1682DCu;
    {
        const bool branch_taken_0x1682dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1682dc) {
            ctx->pc = 0x168BF8u;
            goto label_168bf8;
        }
    }
    ctx->pc = 0x1682E4u;
    // 0x1682e4: 0x2403049c  addiu       $v1, $zero, 0x49C
    ctx->pc = 0x1682e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1180));
    // 0x1682e8: 0x1203023d  beq         $s0, $v1, . + 4 + (0x23D << 2)
    ctx->pc = 0x1682E8u;
    {
        const bool branch_taken_0x1682e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1682ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1682E8u;
            // 0x1682ec: 0x24030488  addiu       $v1, $zero, 0x488 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1682e8) {
            ctx->pc = 0x168BE0u;
            goto label_168be0;
        }
    }
    ctx->pc = 0x1682F0u;
    // 0x1682f0: 0x12030235  beq         $s0, $v1, . + 4 + (0x235 << 2)
    ctx->pc = 0x1682F0u;
    {
        const bool branch_taken_0x1682f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1682f0) {
            ctx->pc = 0x168BC8u;
            goto label_168bc8;
        }
    }
    ctx->pc = 0x1682F8u;
    // 0x1682f8: 0x24030474  addiu       $v1, $zero, 0x474
    ctx->pc = 0x1682f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1140));
    // 0x1682fc: 0x1203022c  beq         $s0, $v1, . + 4 + (0x22C << 2)
    ctx->pc = 0x1682FCu;
    {
        const bool branch_taken_0x1682fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x168300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1682FCu;
            // 0x168300: 0x24030460  addiu       $v1, $zero, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1682fc) {
            ctx->pc = 0x168BB0u;
            goto label_168bb0;
        }
    }
    ctx->pc = 0x168304u;
    // 0x168304: 0x12030224  beq         $s0, $v1, . + 4 + (0x224 << 2)
    ctx->pc = 0x168304u;
    {
        const bool branch_taken_0x168304 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x168304) {
            ctx->pc = 0x168B98u;
            goto label_168b98;
        }
    }
    ctx->pc = 0x16830Cu;
    // 0x16830c: 0x2403044c  addiu       $v1, $zero, 0x44C
    ctx->pc = 0x16830cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1100));
    // 0x168310: 0x1203021b  beq         $s0, $v1, . + 4 + (0x21B << 2)
    ctx->pc = 0x168310u;
    {
        const bool branch_taken_0x168310 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x168314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168310u;
            // 0x168314: 0x24030438  addiu       $v1, $zero, 0x438 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168310) {
            ctx->pc = 0x168B80u;
            goto label_168b80;
        }
    }
    ctx->pc = 0x168318u;
    // 0x168318: 0x12030213  beq         $s0, $v1, . + 4 + (0x213 << 2)
    ctx->pc = 0x168318u;
    {
        const bool branch_taken_0x168318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x168318) {
            ctx->pc = 0x168B68u;
            goto label_168b68;
        }
    }
    ctx->pc = 0x168320u;
    // 0x168320: 0x24030424  addiu       $v1, $zero, 0x424
    ctx->pc = 0x168320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1060));
    // 0x168324: 0x1203020a  beq         $s0, $v1, . + 4 + (0x20A << 2)
    ctx->pc = 0x168324u;
    {
        const bool branch_taken_0x168324 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x168328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168324u;
            // 0x168328: 0x240303f2  addiu       $v1, $zero, 0x3F2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1010));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168324) {
            ctx->pc = 0x168B50u;
            goto label_168b50;
        }
    }
    ctx->pc = 0x16832Cu;
    // 0x16832c: 0x12030202  beq         $s0, $v1, . + 4 + (0x202 << 2)
    ctx->pc = 0x16832Cu;
    {
        const bool branch_taken_0x16832c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16832c) {
            ctx->pc = 0x168B38u;
            goto label_168b38;
        }
    }
    ctx->pc = 0x168334u;
    // 0x168334: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x168334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x168338: 0x120301f9  beq         $s0, $v1, . + 4 + (0x1F9 << 2)
    ctx->pc = 0x168338u;
    {
        const bool branch_taken_0x168338 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16833Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168338u;
            // 0x16833c: 0x240303d4  addiu       $v1, $zero, 0x3D4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 980));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168338) {
            ctx->pc = 0x168B20u;
            goto label_168b20;
        }
    }
    ctx->pc = 0x168340u;
    // 0x168340: 0x120301f1  beq         $s0, $v1, . + 4 + (0x1F1 << 2)
    ctx->pc = 0x168340u;
    {
        const bool branch_taken_0x168340 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x168340) {
            ctx->pc = 0x168B08u;
            goto label_168b08;
        }
    }
    ctx->pc = 0x168348u;
    // 0x168348: 0x240303c0  addiu       $v1, $zero, 0x3C0
    ctx->pc = 0x168348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x16834c: 0x120301e8  beq         $s0, $v1, . + 4 + (0x1E8 << 2)
    ctx->pc = 0x16834Cu;
    {
        const bool branch_taken_0x16834c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x168350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16834Cu;
            // 0x168350: 0x240303ac  addiu       $v1, $zero, 0x3AC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 940));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16834c) {
            ctx->pc = 0x168AF0u;
            goto label_168af0;
        }
    }
    ctx->pc = 0x168354u;
    // 0x168354: 0x120301e0  beq         $s0, $v1, . + 4 + (0x1E0 << 2)
    ctx->pc = 0x168354u;
    {
        const bool branch_taken_0x168354 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x168354) {
            ctx->pc = 0x168AD8u;
            goto label_168ad8;
        }
    }
    ctx->pc = 0x16835Cu;
    // 0x16835c: 0x24030398  addiu       $v1, $zero, 0x398
    ctx->pc = 0x16835cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 920));
    // 0x168360: 0x120301d7  beq         $s0, $v1, . + 4 + (0x1D7 << 2)
    ctx->pc = 0x168360u;
    {
        const bool branch_taken_0x168360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x168364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168360u;
            // 0x168364: 0x24030384  addiu       $v1, $zero, 0x384 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168360) {
            ctx->pc = 0x168AC0u;
            goto label_168ac0;
        }
    }
    ctx->pc = 0x168368u;
    // 0x168368: 0x120301cf  beq         $s0, $v1, . + 4 + (0x1CF << 2)
    ctx->pc = 0x168368u;
    {
        const bool branch_taken_0x168368 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x168368) {
            ctx->pc = 0x168AA8u;
            goto label_168aa8;
        }
    }
    ctx->pc = 0x168370u;
    // 0x168370: 0x24030370  addiu       $v1, $zero, 0x370
    ctx->pc = 0x168370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 880));
    // 0x168374: 0x120301c6  beq         $s0, $v1, . + 4 + (0x1C6 << 2)
    ctx->pc = 0x168374u;
    {
        const bool branch_taken_0x168374 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x168378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168374u;
            // 0x168378: 0x2403035c  addiu       $v1, $zero, 0x35C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 860));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168374) {
            ctx->pc = 0x168A90u;
            goto label_168a90;
        }
    }
    ctx->pc = 0x16837Cu;
    // 0x16837c: 0x120301be  beq         $s0, $v1, . + 4 + (0x1BE << 2)
    ctx->pc = 0x16837Cu;
    {
        const bool branch_taken_0x16837c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16837c) {
            ctx->pc = 0x168A78u;
            goto label_168a78;
        }
    }
    ctx->pc = 0x168384u;
    // 0x168384: 0x24030348  addiu       $v1, $zero, 0x348
    ctx->pc = 0x168384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 840));
    // 0x168388: 0x120301b5  beq         $s0, $v1, . + 4 + (0x1B5 << 2)
    ctx->pc = 0x168388u;
    {
        const bool branch_taken_0x168388 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16838Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168388u;
            // 0x16838c: 0x24030316  addiu       $v1, $zero, 0x316 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168388) {
            ctx->pc = 0x168A60u;
            goto label_168a60;
        }
    }
    ctx->pc = 0x168390u;
    // 0x168390: 0x120301ad  beq         $s0, $v1, . + 4 + (0x1AD << 2)
    ctx->pc = 0x168390u;
    {
        const bool branch_taken_0x168390 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x168390) {
            ctx->pc = 0x168A48u;
            goto label_168a48;
        }
    }
    ctx->pc = 0x168398u;
    // 0x168398: 0x2403030c  addiu       $v1, $zero, 0x30C
    ctx->pc = 0x168398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 780));
    // 0x16839c: 0x120301a4  beq         $s0, $v1, . + 4 + (0x1A4 << 2)
    ctx->pc = 0x16839Cu;
    {
        const bool branch_taken_0x16839c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1683A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16839Cu;
            // 0x1683a0: 0x24030302  addiu       $v1, $zero, 0x302 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 770));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16839c) {
            ctx->pc = 0x168A30u;
            goto label_168a30;
        }
    }
    ctx->pc = 0x1683A4u;
    // 0x1683a4: 0x1203019c  beq         $s0, $v1, . + 4 + (0x19C << 2)
    ctx->pc = 0x1683A4u;
    {
        const bool branch_taken_0x1683a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1683a4) {
            ctx->pc = 0x168A18u;
            goto label_168a18;
        }
    }
    ctx->pc = 0x1683ACu;
    // 0x1683ac: 0x240302f8  addiu       $v1, $zero, 0x2F8
    ctx->pc = 0x1683acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 760));
    // 0x1683b0: 0x12030193  beq         $s0, $v1, . + 4 + (0x193 << 2)
    ctx->pc = 0x1683B0u;
    {
        const bool branch_taken_0x1683b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1683B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1683B0u;
            // 0x1683b4: 0x240302ee  addiu       $v1, $zero, 0x2EE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1683b0) {
            ctx->pc = 0x168A00u;
            goto label_168a00;
        }
    }
    ctx->pc = 0x1683B8u;
    // 0x1683b8: 0x1203018b  beq         $s0, $v1, . + 4 + (0x18B << 2)
    ctx->pc = 0x1683B8u;
    {
        const bool branch_taken_0x1683b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1683b8) {
            ctx->pc = 0x1689E8u;
            goto label_1689e8;
        }
    }
    ctx->pc = 0x1683C0u;
    // 0x1683c0: 0x240302e4  addiu       $v1, $zero, 0x2E4
    ctx->pc = 0x1683c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 740));
    // 0x1683c4: 0x12030182  beq         $s0, $v1, . + 4 + (0x182 << 2)
    ctx->pc = 0x1683C4u;
    {
        const bool branch_taken_0x1683c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1683C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1683C4u;
            // 0x1683c8: 0x240302da  addiu       $v1, $zero, 0x2DA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 730));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1683c4) {
            ctx->pc = 0x1689D0u;
            goto label_1689d0;
        }
    }
    ctx->pc = 0x1683CCu;
    // 0x1683cc: 0x1203017a  beq         $s0, $v1, . + 4 + (0x17A << 2)
    ctx->pc = 0x1683CCu;
    {
        const bool branch_taken_0x1683cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1683cc) {
            ctx->pc = 0x1689B8u;
            goto label_1689b8;
        }
    }
    ctx->pc = 0x1683D4u;
    // 0x1683d4: 0x240302d0  addiu       $v1, $zero, 0x2D0
    ctx->pc = 0x1683d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
    // 0x1683d8: 0x12030171  beq         $s0, $v1, . + 4 + (0x171 << 2)
    ctx->pc = 0x1683D8u;
    {
        const bool branch_taken_0x1683d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1683DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1683D8u;
            // 0x1683dc: 0x240302c6  addiu       $v1, $zero, 0x2C6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 710));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1683d8) {
            ctx->pc = 0x1689A0u;
            goto label_1689a0;
        }
    }
    ctx->pc = 0x1683E0u;
    // 0x1683e0: 0x12030169  beq         $s0, $v1, . + 4 + (0x169 << 2)
    ctx->pc = 0x1683E0u;
    {
        const bool branch_taken_0x1683e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1683e0) {
            ctx->pc = 0x168988u;
            goto label_168988;
        }
    }
    ctx->pc = 0x1683E8u;
    // 0x1683e8: 0x240302bc  addiu       $v1, $zero, 0x2BC
    ctx->pc = 0x1683e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
    // 0x1683ec: 0x12030160  beq         $s0, $v1, . + 4 + (0x160 << 2)
    ctx->pc = 0x1683ECu;
    {
        const bool branch_taken_0x1683ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1683F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1683ECu;
            // 0x1683f0: 0x240302b2  addiu       $v1, $zero, 0x2B2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 690));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1683ec) {
            ctx->pc = 0x168970u;
            goto label_168970;
        }
    }
    ctx->pc = 0x1683F4u;
    // 0x1683f4: 0x12030158  beq         $s0, $v1, . + 4 + (0x158 << 2)
    ctx->pc = 0x1683F4u;
    {
        const bool branch_taken_0x1683f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1683f4) {
            ctx->pc = 0x168958u;
            goto label_168958;
        }
    }
    ctx->pc = 0x1683FCu;
    // 0x1683fc: 0x240302a8  addiu       $v1, $zero, 0x2A8
    ctx->pc = 0x1683fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 680));
    // 0x168400: 0x1203014f  beq         $s0, $v1, . + 4 + (0x14F << 2)
    ctx->pc = 0x168400u;
    {
        const bool branch_taken_0x168400 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x168404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168400u;
            // 0x168404: 0x2403029e  addiu       $v1, $zero, 0x29E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 670));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168400) {
            ctx->pc = 0x168940u;
            goto label_168940;
        }
    }
    ctx->pc = 0x168408u;
    // 0x168408: 0x12030147  beq         $s0, $v1, . + 4 + (0x147 << 2)
    ctx->pc = 0x168408u;
    {
        const bool branch_taken_0x168408 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x168408) {
            ctx->pc = 0x168928u;
            goto label_168928;
        }
    }
    ctx->pc = 0x168410u;
    // 0x168410: 0x24030294  addiu       $v1, $zero, 0x294
    ctx->pc = 0x168410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 660));
    // 0x168414: 0x1203013e  beq         $s0, $v1, . + 4 + (0x13E << 2)
    ctx->pc = 0x168414u;
    {
        const bool branch_taken_0x168414 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x168418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168414u;
            // 0x168418: 0x2403028a  addiu       $v1, $zero, 0x28A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 650));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168414) {
            ctx->pc = 0x168910u;
            goto label_168910;
        }
    }
    ctx->pc = 0x16841Cu;
    // 0x16841c: 0x12030136  beq         $s0, $v1, . + 4 + (0x136 << 2)
    ctx->pc = 0x16841Cu;
    {
        const bool branch_taken_0x16841c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16841c) {
            ctx->pc = 0x1688F8u;
            goto label_1688f8;
        }
    }
    ctx->pc = 0x168424u;
    // 0x168424: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x168424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x168428: 0x1203012d  beq         $s0, $v1, . + 4 + (0x12D << 2)
    ctx->pc = 0x168428u;
    {
        const bool branch_taken_0x168428 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16842Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168428u;
            // 0x16842c: 0x24030276  addiu       $v1, $zero, 0x276 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168428) {
            ctx->pc = 0x1688E0u;
            goto label_1688e0;
        }
    }
    ctx->pc = 0x168430u;
    // 0x168430: 0x12030125  beq         $s0, $v1, . + 4 + (0x125 << 2)
    ctx->pc = 0x168430u;
    {
        const bool branch_taken_0x168430 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x168430) {
            ctx->pc = 0x1688C8u;
            goto label_1688c8;
        }
    }
    ctx->pc = 0x168438u;
    // 0x168438: 0x2403026c  addiu       $v1, $zero, 0x26C
    ctx->pc = 0x168438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 620));
    // 0x16843c: 0x1203011c  beq         $s0, $v1, . + 4 + (0x11C << 2)
    ctx->pc = 0x16843Cu;
    {
        const bool branch_taken_0x16843c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x168440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16843Cu;
            // 0x168440: 0x24030262  addiu       $v1, $zero, 0x262 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 610));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16843c) {
            ctx->pc = 0x1688B0u;
            goto label_1688b0;
        }
    }
    ctx->pc = 0x168444u;
    // 0x168444: 0x12030114  beq         $s0, $v1, . + 4 + (0x114 << 2)
    ctx->pc = 0x168444u;
    {
        const bool branch_taken_0x168444 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x168444) {
            ctx->pc = 0x168898u;
            goto label_168898;
        }
    }
    ctx->pc = 0x16844Cu;
    // 0x16844c: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x16844cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x168450: 0x1203010b  beq         $s0, $v1, . + 4 + (0x10B << 2)
    ctx->pc = 0x168450u;
    {
        const bool branch_taken_0x168450 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x168454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168450u;
            // 0x168454: 0x240301f4  addiu       $v1, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168450) {
            ctx->pc = 0x168880u;
            goto label_168880;
        }
    }
    ctx->pc = 0x168458u;
    // 0x168458: 0x12030103  beq         $s0, $v1, . + 4 + (0x103 << 2)
    ctx->pc = 0x168458u;
    {
        const bool branch_taken_0x168458 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x168458) {
            ctx->pc = 0x168868u;
            goto label_168868;
        }
    }
    ctx->pc = 0x168460u;
    // 0x168460: 0x240301ea  addiu       $v1, $zero, 0x1EA
    ctx->pc = 0x168460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 490));
    // 0x168464: 0x120300fa  beq         $s0, $v1, . + 4 + (0xFA << 2)
    ctx->pc = 0x168464u;
    {
        const bool branch_taken_0x168464 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x168468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168464u;
            // 0x168468: 0x240301e0  addiu       $v1, $zero, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168464) {
            ctx->pc = 0x168850u;
            goto label_168850;
        }
    }
    ctx->pc = 0x16846Cu;
    // 0x16846c: 0x120300f2  beq         $s0, $v1, . + 4 + (0xF2 << 2)
    ctx->pc = 0x16846Cu;
    {
        const bool branch_taken_0x16846c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16846c) {
            ctx->pc = 0x168838u;
            goto label_168838;
        }
    }
    ctx->pc = 0x168474u;
    // 0x168474: 0x240301d6  addiu       $v1, $zero, 0x1D6
    ctx->pc = 0x168474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 470));
    // 0x168478: 0x120300e9  beq         $s0, $v1, . + 4 + (0xE9 << 2)
    ctx->pc = 0x168478u;
    {
        const bool branch_taken_0x168478 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16847Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168478u;
            // 0x16847c: 0x240301cc  addiu       $v1, $zero, 0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168478) {
            ctx->pc = 0x168820u;
            goto label_168820;
        }
    }
    ctx->pc = 0x168480u;
    // 0x168480: 0x120300e1  beq         $s0, $v1, . + 4 + (0xE1 << 2)
    ctx->pc = 0x168480u;
    {
        const bool branch_taken_0x168480 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x168480) {
            ctx->pc = 0x168808u;
            goto label_168808;
        }
    }
    ctx->pc = 0x168488u;
    // 0x168488: 0x240301c2  addiu       $v1, $zero, 0x1C2
    ctx->pc = 0x168488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
    // 0x16848c: 0x120300d4  beq         $s0, $v1, . + 4 + (0xD4 << 2)
    ctx->pc = 0x16848Cu;
    {
        const bool branch_taken_0x16848c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x168490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16848Cu;
            // 0x168490: 0x240301b8  addiu       $v1, $zero, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16848c) {
            ctx->pc = 0x1687E0u;
            goto label_1687e0;
        }
    }
    ctx->pc = 0x168494u;
    // 0x168494: 0x120300c8  beq         $s0, $v1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x168494u;
    {
        const bool branch_taken_0x168494 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x168494) {
            ctx->pc = 0x1687B8u;
            goto label_1687b8;
        }
    }
    ctx->pc = 0x16849Cu;
    // 0x16849c: 0x240301ae  addiu       $v1, $zero, 0x1AE
    ctx->pc = 0x16849cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 430));
    // 0x1684a0: 0x120300bf  beq         $s0, $v1, . + 4 + (0xBF << 2)
    ctx->pc = 0x1684A0u;
    {
        const bool branch_taken_0x1684a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1684A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1684A0u;
            // 0x1684a4: 0x240301a4  addiu       $v1, $zero, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1684a0) {
            ctx->pc = 0x1687A0u;
            goto label_1687a0;
        }
    }
    ctx->pc = 0x1684A8u;
    // 0x1684a8: 0x120300b7  beq         $s0, $v1, . + 4 + (0xB7 << 2)
    ctx->pc = 0x1684A8u;
    {
        const bool branch_taken_0x1684a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1684a8) {
            ctx->pc = 0x168788u;
            goto label_168788;
        }
    }
    ctx->pc = 0x1684B0u;
    // 0x1684b0: 0x2403019a  addiu       $v1, $zero, 0x19A
    ctx->pc = 0x1684b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 410));
    // 0x1684b4: 0x120300ae  beq         $s0, $v1, . + 4 + (0xAE << 2)
    ctx->pc = 0x1684B4u;
    {
        const bool branch_taken_0x1684b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1684B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1684B4u;
            // 0x1684b8: 0x24030190  addiu       $v1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1684b4) {
            ctx->pc = 0x168770u;
            goto label_168770;
        }
    }
    ctx->pc = 0x1684BCu;
    // 0x1684bc: 0x120300a6  beq         $s0, $v1, . + 4 + (0xA6 << 2)
    ctx->pc = 0x1684BCu;
    {
        const bool branch_taken_0x1684bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1684bc) {
            ctx->pc = 0x168758u;
            goto label_168758;
        }
    }
    ctx->pc = 0x1684C4u;
    // 0x1684c4: 0x24030186  addiu       $v1, $zero, 0x186
    ctx->pc = 0x1684c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
    // 0x1684c8: 0x1203009d  beq         $s0, $v1, . + 4 + (0x9D << 2)
    ctx->pc = 0x1684C8u;
    {
        const bool branch_taken_0x1684c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1684CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1684C8u;
            // 0x1684cc: 0x2403017c  addiu       $v1, $zero, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1684c8) {
            ctx->pc = 0x168740u;
            goto label_168740;
        }
    }
    ctx->pc = 0x1684D0u;
    // 0x1684d0: 0x12030095  beq         $s0, $v1, . + 4 + (0x95 << 2)
    ctx->pc = 0x1684D0u;
    {
        const bool branch_taken_0x1684d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1684d0) {
            ctx->pc = 0x168728u;
            goto label_168728;
        }
    }
    ctx->pc = 0x1684D8u;
    // 0x1684d8: 0x24030172  addiu       $v1, $zero, 0x172
    ctx->pc = 0x1684d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
    // 0x1684dc: 0x1203008c  beq         $s0, $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x1684DCu;
    {
        const bool branch_taken_0x1684dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1684E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1684DCu;
            // 0x1684e0: 0x24030168  addiu       $v1, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1684dc) {
            ctx->pc = 0x168710u;
            goto label_168710;
        }
    }
    ctx->pc = 0x1684E4u;
    // 0x1684e4: 0x12030084  beq         $s0, $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x1684E4u;
    {
        const bool branch_taken_0x1684e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1684e4) {
            ctx->pc = 0x1686F8u;
            goto label_1686f8;
        }
    }
    ctx->pc = 0x1684ECu;
    // 0x1684ec: 0x2403015e  addiu       $v1, $zero, 0x15E
    ctx->pc = 0x1684ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x1684f0: 0x1203007b  beq         $s0, $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x1684F0u;
    {
        const bool branch_taken_0x1684f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1684F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1684F0u;
            // 0x1684f4: 0x24030154  addiu       $v1, $zero, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1684f0) {
            ctx->pc = 0x1686E0u;
            goto label_1686e0;
        }
    }
    ctx->pc = 0x1684F8u;
    // 0x1684f8: 0x12030073  beq         $s0, $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x1684F8u;
    {
        const bool branch_taken_0x1684f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1684f8) {
            ctx->pc = 0x1686C8u;
            goto label_1686c8;
        }
    }
    ctx->pc = 0x168500u;
    // 0x168500: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x168500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x168504: 0x1203006a  beq         $s0, $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x168504u;
    {
        const bool branch_taken_0x168504 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x168508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168504u;
            // 0x168508: 0x24030136  addiu       $v1, $zero, 0x136 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168504) {
            ctx->pc = 0x1686B0u;
            goto label_1686b0;
        }
    }
    ctx->pc = 0x16850Cu;
    // 0x16850c: 0x12030062  beq         $s0, $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x16850Cu;
    {
        const bool branch_taken_0x16850c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16850c) {
            ctx->pc = 0x168698u;
            goto label_168698;
        }
    }
    ctx->pc = 0x168514u;
    // 0x168514: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x168514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x168518: 0x12030059  beq         $s0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x168518u;
    {
        const bool branch_taken_0x168518 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16851Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168518u;
            // 0x16851c: 0x24030122  addiu       $v1, $zero, 0x122 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168518) {
            ctx->pc = 0x168680u;
            goto label_168680;
        }
    }
    ctx->pc = 0x168520u;
    // 0x168520: 0x12030051  beq         $s0, $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x168520u;
    {
        const bool branch_taken_0x168520 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x168520) {
            ctx->pc = 0x168668u;
            goto label_168668;
        }
    }
    ctx->pc = 0x168528u;
    // 0x168528: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x168528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x16852c: 0x12030048  beq         $s0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x16852Cu;
    {
        const bool branch_taken_0x16852c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x168530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16852Cu;
            // 0x168530: 0x2403010e  addiu       $v1, $zero, 0x10E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16852c) {
            ctx->pc = 0x168650u;
            goto label_168650;
        }
    }
    ctx->pc = 0x168534u;
    // 0x168534: 0x12030040  beq         $s0, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x168534u;
    {
        const bool branch_taken_0x168534 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x168534) {
            ctx->pc = 0x168638u;
            goto label_168638;
        }
    }
    ctx->pc = 0x16853Cu;
    // 0x16853c: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x16853cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x168540: 0x12030037  beq         $s0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x168540u;
    {
        const bool branch_taken_0x168540 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x168544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168540u;
            // 0x168544: 0x240300f0  addiu       $v1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168540) {
            ctx->pc = 0x168620u;
            goto label_168620;
        }
    }
    ctx->pc = 0x168548u;
    // 0x168548: 0x1203002f  beq         $s0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x168548u;
    {
        const bool branch_taken_0x168548 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x168548) {
            ctx->pc = 0x168608u;
            goto label_168608;
        }
    }
    ctx->pc = 0x168550u;
    // 0x168550: 0x240300e6  addiu       $v1, $zero, 0xE6
    ctx->pc = 0x168550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x168554: 0x12030026  beq         $s0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x168554u;
    {
        const bool branch_taken_0x168554 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x168558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168554u;
            // 0x168558: 0x240300dc  addiu       $v1, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168554) {
            ctx->pc = 0x1685F0u;
            goto label_1685f0;
        }
    }
    ctx->pc = 0x16855Cu;
    // 0x16855c: 0x1203001e  beq         $s0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x16855Cu;
    {
        const bool branch_taken_0x16855c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16855c) {
            ctx->pc = 0x1685D8u;
            goto label_1685d8;
        }
    }
    ctx->pc = 0x168564u;
    // 0x168564: 0x240300d2  addiu       $v1, $zero, 0xD2
    ctx->pc = 0x168564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x168568: 0x12030015  beq         $s0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x168568u;
    {
        const bool branch_taken_0x168568 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16856Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168568u;
            // 0x16856c: 0x240300c8  addiu       $v1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168568) {
            ctx->pc = 0x1685C0u;
            goto label_1685c0;
        }
    }
    ctx->pc = 0x168570u;
    // 0x168570: 0x1203000d  beq         $s0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x168570u;
    {
        const bool branch_taken_0x168570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x168570) {
            ctx->pc = 0x1685A8u;
            goto label_1685a8;
        }
    }
    ctx->pc = 0x168578u;
    // 0x168578: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x168578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16857c: 0x12030004  beq         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16857Cu;
    {
        const bool branch_taken_0x16857c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16857c) {
            ctx->pc = 0x168590u;
            goto label_168590;
        }
    }
    ctx->pc = 0x168584u;
    // 0x168584: 0x1000025c  b           . + 4 + (0x25C << 2)
    ctx->pc = 0x168584u;
    {
        const bool branch_taken_0x168584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168584) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x16858Cu;
    // 0x16858c: 0x0  nop
    ctx->pc = 0x16858cu;
    // NOP
label_168590:
    // 0x168590: 0xc05d004  jal         func_174010
    ctx->pc = 0x168590u;
    SET_GPR_U32(ctx, 31, 0x168598u);
    ctx->pc = 0x168594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168590u;
            // 0x168594: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174010u;
    if (runtime->hasFunction(0x174010u)) {
        auto targetFn = runtime->lookupFunction(0x174010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168598u; }
        if (ctx->pc != 0x168598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_bgm_0x174010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168598u; }
        if (ctx->pc != 0x168598u) { return; }
    }
    ctx->pc = 0x168598u;
    // 0x168598: 0xc056050  jal         func_158140
    ctx->pc = 0x168598u;
    SET_GPR_U32(ctx, 31, 0x1685A0u);
    ctx->pc = 0x158140u;
    if (runtime->hasFunction(0x158140u)) {
        auto targetFn = runtime->lookupFunction(0x158140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1685A0u; }
        if (ctx->pc != 0x1685A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RnnyuOk_0x158140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1685A0u; }
        if (ctx->pc != 0x1685A0u) { return; }
    }
    ctx->pc = 0x1685A0u;
    // 0x1685a0: 0x10000255  b           . + 4 + (0x255 << 2)
    ctx->pc = 0x1685A0u;
    {
        const bool branch_taken_0x1685a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1685a0) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x1685A8u;
label_1685a8:
    // 0x1685a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1685a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1685ac: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1685acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1685b0: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x1685B0u;
    SET_GPR_U32(ctx, 31, 0x1685B8u);
    ctx->pc = 0x1685B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1685B0u;
            // 0x1685b4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1685B8u; }
        if (ctx->pc != 0x1685B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1685B8u; }
        if (ctx->pc != 0x1685B8u) { return; }
    }
    ctx->pc = 0x1685B8u;
    // 0x1685b8: 0x1000024f  b           . + 4 + (0x24F << 2)
    ctx->pc = 0x1685B8u;
    {
        const bool branch_taken_0x1685b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1685b8) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x1685C0u;
label_1685c0:
    // 0x1685c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1685c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1685c4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1685c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1685c8: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x1685C8u;
    SET_GPR_U32(ctx, 31, 0x1685D0u);
    ctx->pc = 0x1685CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1685C8u;
            // 0x1685cc: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1685D0u; }
        if (ctx->pc != 0x1685D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1685D0u; }
        if (ctx->pc != 0x1685D0u) { return; }
    }
    ctx->pc = 0x1685D0u;
    // 0x1685d0: 0x10000249  b           . + 4 + (0x249 << 2)
    ctx->pc = 0x1685D0u;
    {
        const bool branch_taken_0x1685d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1685d0) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x1685D8u;
label_1685d8:
    // 0x1685d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1685d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1685dc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1685dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1685e0: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x1685E0u;
    SET_GPR_U32(ctx, 31, 0x1685E8u);
    ctx->pc = 0x1685E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1685E0u;
            // 0x1685e4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1685E8u; }
        if (ctx->pc != 0x1685E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1685E8u; }
        if (ctx->pc != 0x1685E8u) { return; }
    }
    ctx->pc = 0x1685E8u;
    // 0x1685e8: 0x10000243  b           . + 4 + (0x243 << 2)
    ctx->pc = 0x1685E8u;
    {
        const bool branch_taken_0x1685e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1685e8) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x1685F0u;
label_1685f0:
    // 0x1685f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1685f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1685f4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1685f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1685f8: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x1685F8u;
    SET_GPR_U32(ctx, 31, 0x168600u);
    ctx->pc = 0x1685FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1685F8u;
            // 0x1685fc: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168600u; }
        if (ctx->pc != 0x168600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168600u; }
        if (ctx->pc != 0x168600u) { return; }
    }
    ctx->pc = 0x168600u;
    // 0x168600: 0x1000023d  b           . + 4 + (0x23D << 2)
    ctx->pc = 0x168600u;
    {
        const bool branch_taken_0x168600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168600) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168608u;
label_168608:
    // 0x168608: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x168608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16860c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x16860cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x168610: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168610u;
    SET_GPR_U32(ctx, 31, 0x168618u);
    ctx->pc = 0x168614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168610u;
            // 0x168614: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168618u; }
        if (ctx->pc != 0x168618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168618u; }
        if (ctx->pc != 0x168618u) { return; }
    }
    ctx->pc = 0x168618u;
    // 0x168618: 0x10000237  b           . + 4 + (0x237 << 2)
    ctx->pc = 0x168618u;
    {
        const bool branch_taken_0x168618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168618) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168620u;
label_168620:
    // 0x168620: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x168620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168624: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x168624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x168628: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168628u;
    SET_GPR_U32(ctx, 31, 0x168630u);
    ctx->pc = 0x16862Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168628u;
            // 0x16862c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168630u; }
        if (ctx->pc != 0x168630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168630u; }
        if (ctx->pc != 0x168630u) { return; }
    }
    ctx->pc = 0x168630u;
    // 0x168630: 0x10000231  b           . + 4 + (0x231 << 2)
    ctx->pc = 0x168630u;
    {
        const bool branch_taken_0x168630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168630) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168638u;
label_168638:
    // 0x168638: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x168638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16863c: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16863cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x168640: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168640u;
    SET_GPR_U32(ctx, 31, 0x168648u);
    ctx->pc = 0x168644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168640u;
            // 0x168644: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168648u; }
        if (ctx->pc != 0x168648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168648u; }
        if (ctx->pc != 0x168648u) { return; }
    }
    ctx->pc = 0x168648u;
    // 0x168648: 0x1000022b  b           . + 4 + (0x22B << 2)
    ctx->pc = 0x168648u;
    {
        const bool branch_taken_0x168648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168648) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168650u;
label_168650:
    // 0x168650: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x168650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168654: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x168654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x168658: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168658u;
    SET_GPR_U32(ctx, 31, 0x168660u);
    ctx->pc = 0x16865Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168658u;
            // 0x16865c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168660u; }
        if (ctx->pc != 0x168660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168660u; }
        if (ctx->pc != 0x168660u) { return; }
    }
    ctx->pc = 0x168660u;
    // 0x168660: 0x10000225  b           . + 4 + (0x225 << 2)
    ctx->pc = 0x168660u;
    {
        const bool branch_taken_0x168660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168660) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168668u;
label_168668:
    // 0x168668: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x168668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16866c: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16866cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x168670: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168670u;
    SET_GPR_U32(ctx, 31, 0x168678u);
    ctx->pc = 0x168674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168670u;
            // 0x168674: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168678u; }
        if (ctx->pc != 0x168678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168678u; }
        if (ctx->pc != 0x168678u) { return; }
    }
    ctx->pc = 0x168678u;
    // 0x168678: 0x1000021f  b           . + 4 + (0x21F << 2)
    ctx->pc = 0x168678u;
    {
        const bool branch_taken_0x168678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168678) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168680u;
label_168680:
    // 0x168680: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x168680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168684: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x168684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x168688: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168688u;
    SET_GPR_U32(ctx, 31, 0x168690u);
    ctx->pc = 0x16868Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168688u;
            // 0x16868c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168690u; }
        if (ctx->pc != 0x168690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168690u; }
        if (ctx->pc != 0x168690u) { return; }
    }
    ctx->pc = 0x168690u;
    // 0x168690: 0x10000219  b           . + 4 + (0x219 << 2)
    ctx->pc = 0x168690u;
    {
        const bool branch_taken_0x168690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168690) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168698u;
label_168698:
    // 0x168698: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x168698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16869c: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x16869cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x1686a0: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x1686A0u;
    SET_GPR_U32(ctx, 31, 0x1686A8u);
    ctx->pc = 0x1686A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1686A0u;
            // 0x1686a4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1686A8u; }
        if (ctx->pc != 0x1686A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1686A8u; }
        if (ctx->pc != 0x1686A8u) { return; }
    }
    ctx->pc = 0x1686A8u;
    // 0x1686a8: 0x10000213  b           . + 4 + (0x213 << 2)
    ctx->pc = 0x1686A8u;
    {
        const bool branch_taken_0x1686a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1686a8) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x1686B0u;
label_1686b0:
    // 0x1686b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1686b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1686b4: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x1686b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x1686b8: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x1686B8u;
    SET_GPR_U32(ctx, 31, 0x1686C0u);
    ctx->pc = 0x1686BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1686B8u;
            // 0x1686bc: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1686C0u; }
        if (ctx->pc != 0x1686C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1686C0u; }
        if (ctx->pc != 0x1686C0u) { return; }
    }
    ctx->pc = 0x1686C0u;
    // 0x1686c0: 0x1000020d  b           . + 4 + (0x20D << 2)
    ctx->pc = 0x1686C0u;
    {
        const bool branch_taken_0x1686c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1686c0) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x1686C8u;
label_1686c8:
    // 0x1686c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1686c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1686cc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1686ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1686d0: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x1686D0u;
    SET_GPR_U32(ctx, 31, 0x1686D8u);
    ctx->pc = 0x1686D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1686D0u;
            // 0x1686d4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1686D8u; }
        if (ctx->pc != 0x1686D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1686D8u; }
        if (ctx->pc != 0x1686D8u) { return; }
    }
    ctx->pc = 0x1686D8u;
    // 0x1686d8: 0x10000207  b           . + 4 + (0x207 << 2)
    ctx->pc = 0x1686D8u;
    {
        const bool branch_taken_0x1686d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1686d8) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x1686E0u;
label_1686e0:
    // 0x1686e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1686e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1686e4: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x1686e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x1686e8: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x1686E8u;
    SET_GPR_U32(ctx, 31, 0x1686F0u);
    ctx->pc = 0x1686ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1686E8u;
            // 0x1686ec: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1686F0u; }
        if (ctx->pc != 0x1686F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1686F0u; }
        if (ctx->pc != 0x1686F0u) { return; }
    }
    ctx->pc = 0x1686F0u;
    // 0x1686f0: 0x10000201  b           . + 4 + (0x201 << 2)
    ctx->pc = 0x1686F0u;
    {
        const bool branch_taken_0x1686f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1686f0) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x1686F8u;
label_1686f8:
    // 0x1686f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1686f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1686fc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1686fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x168700: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168700u;
    SET_GPR_U32(ctx, 31, 0x168708u);
    ctx->pc = 0x168704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168700u;
            // 0x168704: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168708u; }
        if (ctx->pc != 0x168708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168708u; }
        if (ctx->pc != 0x168708u) { return; }
    }
    ctx->pc = 0x168708u;
    // 0x168708: 0x100001fb  b           . + 4 + (0x1FB << 2)
    ctx->pc = 0x168708u;
    {
        const bool branch_taken_0x168708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168708) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168710u;
label_168710:
    // 0x168710: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x168710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168714: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x168714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x168718: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168718u;
    SET_GPR_U32(ctx, 31, 0x168720u);
    ctx->pc = 0x16871Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168718u;
            // 0x16871c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168720u; }
        if (ctx->pc != 0x168720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168720u; }
        if (ctx->pc != 0x168720u) { return; }
    }
    ctx->pc = 0x168720u;
    // 0x168720: 0x100001f5  b           . + 4 + (0x1F5 << 2)
    ctx->pc = 0x168720u;
    {
        const bool branch_taken_0x168720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168720) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168728u;
label_168728:
    // 0x168728: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x168728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16872c: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x16872cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x168730: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168730u;
    SET_GPR_U32(ctx, 31, 0x168738u);
    ctx->pc = 0x168734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168730u;
            // 0x168734: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168738u; }
        if (ctx->pc != 0x168738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168738u; }
        if (ctx->pc != 0x168738u) { return; }
    }
    ctx->pc = 0x168738u;
    // 0x168738: 0x100001ef  b           . + 4 + (0x1EF << 2)
    ctx->pc = 0x168738u;
    {
        const bool branch_taken_0x168738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168738) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168740u;
label_168740:
    // 0x168740: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x168740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168744: 0x2405ffe7  addiu       $a1, $zero, -0x19
    ctx->pc = 0x168744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x168748: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168748u;
    SET_GPR_U32(ctx, 31, 0x168750u);
    ctx->pc = 0x16874Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168748u;
            // 0x16874c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168750u; }
        if (ctx->pc != 0x168750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168750u; }
        if (ctx->pc != 0x168750u) { return; }
    }
    ctx->pc = 0x168750u;
    // 0x168750: 0x100001e9  b           . + 4 + (0x1E9 << 2)
    ctx->pc = 0x168750u;
    {
        const bool branch_taken_0x168750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168750) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168758u;
label_168758:
    // 0x168758: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x168758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16875c: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16875cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x168760: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168760u;
    SET_GPR_U32(ctx, 31, 0x168768u);
    ctx->pc = 0x168764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168760u;
            // 0x168764: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168768u; }
        if (ctx->pc != 0x168768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168768u; }
        if (ctx->pc != 0x168768u) { return; }
    }
    ctx->pc = 0x168768u;
    // 0x168768: 0x100001e3  b           . + 4 + (0x1E3 << 2)
    ctx->pc = 0x168768u;
    {
        const bool branch_taken_0x168768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168768) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168770u;
label_168770:
    // 0x168770: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x168770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x168774: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x168774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x168778: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168778u;
    SET_GPR_U32(ctx, 31, 0x168780u);
    ctx->pc = 0x16877Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168778u;
            // 0x16877c: 0x2406fff1  addiu       $a2, $zero, -0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168780u; }
        if (ctx->pc != 0x168780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168780u; }
        if (ctx->pc != 0x168780u) { return; }
    }
    ctx->pc = 0x168780u;
    // 0x168780: 0x100001dd  b           . + 4 + (0x1DD << 2)
    ctx->pc = 0x168780u;
    {
        const bool branch_taken_0x168780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168780) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168788u;
label_168788:
    // 0x168788: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x168788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16878c: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16878cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x168790: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168790u;
    SET_GPR_U32(ctx, 31, 0x168798u);
    ctx->pc = 0x168794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168790u;
            // 0x168794: 0x2406fff1  addiu       $a2, $zero, -0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168798u; }
        if (ctx->pc != 0x168798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168798u; }
        if (ctx->pc != 0x168798u) { return; }
    }
    ctx->pc = 0x168798u;
    // 0x168798: 0x100001d7  b           . + 4 + (0x1D7 << 2)
    ctx->pc = 0x168798u;
    {
        const bool branch_taken_0x168798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168798) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x1687A0u;
label_1687a0:
    // 0x1687a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1687a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1687a4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1687a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1687a8: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x1687A8u;
    SET_GPR_U32(ctx, 31, 0x1687B0u);
    ctx->pc = 0x1687ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1687A8u;
            // 0x1687ac: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1687B0u; }
        if (ctx->pc != 0x1687B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1687B0u; }
        if (ctx->pc != 0x1687B0u) { return; }
    }
    ctx->pc = 0x1687B0u;
    // 0x1687b0: 0x100001d1  b           . + 4 + (0x1D1 << 2)
    ctx->pc = 0x1687B0u;
    {
        const bool branch_taken_0x1687b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1687b0) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x1687B8u;
label_1687b8:
    // 0x1687b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1687b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1687bc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1687bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1687c0: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x1687C0u;
    SET_GPR_U32(ctx, 31, 0x1687C8u);
    ctx->pc = 0x1687C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1687C0u;
            // 0x1687c4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1687C8u; }
        if (ctx->pc != 0x1687C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1687C8u; }
        if (ctx->pc != 0x1687C8u) { return; }
    }
    ctx->pc = 0x1687C8u;
    // 0x1687c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1687c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1687cc: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x1687ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x1687d0: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x1687D0u;
    SET_GPR_U32(ctx, 31, 0x1687D8u);
    ctx->pc = 0x1687D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1687D0u;
            // 0x1687d4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1687D8u; }
        if (ctx->pc != 0x1687D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1687D8u; }
        if (ctx->pc != 0x1687D8u) { return; }
    }
    ctx->pc = 0x1687D8u;
    // 0x1687d8: 0x100001c7  b           . + 4 + (0x1C7 << 2)
    ctx->pc = 0x1687D8u;
    {
        const bool branch_taken_0x1687d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1687d8) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x1687E0u;
label_1687e0:
    // 0x1687e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1687e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1687e4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1687e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1687e8: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x1687E8u;
    SET_GPR_U32(ctx, 31, 0x1687F0u);
    ctx->pc = 0x1687ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1687E8u;
            // 0x1687ec: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1687F0u; }
        if (ctx->pc != 0x1687F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1687F0u; }
        if (ctx->pc != 0x1687F0u) { return; }
    }
    ctx->pc = 0x1687F0u;
    // 0x1687f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1687f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1687f4: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x1687f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x1687f8: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x1687F8u;
    SET_GPR_U32(ctx, 31, 0x168800u);
    ctx->pc = 0x1687FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1687F8u;
            // 0x1687fc: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168800u; }
        if (ctx->pc != 0x168800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168800u; }
        if (ctx->pc != 0x168800u) { return; }
    }
    ctx->pc = 0x168800u;
    // 0x168800: 0x100001bd  b           . + 4 + (0x1BD << 2)
    ctx->pc = 0x168800u;
    {
        const bool branch_taken_0x168800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168800) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168808u;
label_168808:
    // 0x168808: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x168808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16880c: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16880cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x168810: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168810u;
    SET_GPR_U32(ctx, 31, 0x168818u);
    ctx->pc = 0x168814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168810u;
            // 0x168814: 0x2406fff6  addiu       $a2, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168818u; }
        if (ctx->pc != 0x168818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168818u; }
        if (ctx->pc != 0x168818u) { return; }
    }
    ctx->pc = 0x168818u;
    // 0x168818: 0x100001b7  b           . + 4 + (0x1B7 << 2)
    ctx->pc = 0x168818u;
    {
        const bool branch_taken_0x168818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168818) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168820u;
label_168820:
    // 0x168820: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x168820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x168824: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x168824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x168828: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168828u;
    SET_GPR_U32(ctx, 31, 0x168830u);
    ctx->pc = 0x16882Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168828u;
            // 0x16882c: 0x2406fff1  addiu       $a2, $zero, -0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168830u; }
        if (ctx->pc != 0x168830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168830u; }
        if (ctx->pc != 0x168830u) { return; }
    }
    ctx->pc = 0x168830u;
    // 0x168830: 0x100001b1  b           . + 4 + (0x1B1 << 2)
    ctx->pc = 0x168830u;
    {
        const bool branch_taken_0x168830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168830) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168838u;
label_168838:
    // 0x168838: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x168838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16883c: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x16883cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x168840: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168840u;
    SET_GPR_U32(ctx, 31, 0x168848u);
    ctx->pc = 0x168844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168840u;
            // 0x168844: 0x2406fff1  addiu       $a2, $zero, -0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168848u; }
        if (ctx->pc != 0x168848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168848u; }
        if (ctx->pc != 0x168848u) { return; }
    }
    ctx->pc = 0x168848u;
    // 0x168848: 0x100001ab  b           . + 4 + (0x1AB << 2)
    ctx->pc = 0x168848u;
    {
        const bool branch_taken_0x168848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168848) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168850u;
label_168850:
    // 0x168850: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x168850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x168854: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x168854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x168858: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168858u;
    SET_GPR_U32(ctx, 31, 0x168860u);
    ctx->pc = 0x16885Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168858u;
            // 0x16885c: 0x2406fff6  addiu       $a2, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168860u; }
        if (ctx->pc != 0x168860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168860u; }
        if (ctx->pc != 0x168860u) { return; }
    }
    ctx->pc = 0x168860u;
    // 0x168860: 0x100001a5  b           . + 4 + (0x1A5 << 2)
    ctx->pc = 0x168860u;
    {
        const bool branch_taken_0x168860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168860) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168868u;
label_168868:
    // 0x168868: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x168868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16886c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x16886cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x168870: 0xc077e00  jal         func_1DF800
    ctx->pc = 0x168870u;
    SET_GPR_U32(ctx, 31, 0x168878u);
    ctx->pc = 0x168874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168870u;
            // 0x168874: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF800u;
    if (runtime->hasFunction(0x1DF800u)) {
        auto targetFn = runtime->lookupFunction(0x1DF800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168878u; }
        if (ctx->pc != 0x168878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItemCareer_0x1df800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168878u; }
        if (ctx->pc != 0x168878u) { return; }
    }
    ctx->pc = 0x168878u;
    // 0x168878: 0x1000019f  b           . + 4 + (0x19F << 2)
    ctx->pc = 0x168878u;
    {
        const bool branch_taken_0x168878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168878) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168880u;
label_168880:
    // 0x168880: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x168880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x168884: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x168884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x168888: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168888u;
    SET_GPR_U32(ctx, 31, 0x168890u);
    ctx->pc = 0x16888Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168888u;
            // 0x16888c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168890u; }
        if (ctx->pc != 0x168890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168890u; }
        if (ctx->pc != 0x168890u) { return; }
    }
    ctx->pc = 0x168890u;
    // 0x168890: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x168890u;
    {
        const bool branch_taken_0x168890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168890) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168898u;
label_168898:
    // 0x168898: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x168898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16889c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x16889cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1688a0: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x1688A0u;
    SET_GPR_U32(ctx, 31, 0x1688A8u);
    ctx->pc = 0x1688A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1688A0u;
            // 0x1688a4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1688A8u; }
        if (ctx->pc != 0x1688A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1688A8u; }
        if (ctx->pc != 0x1688A8u) { return; }
    }
    ctx->pc = 0x1688A8u;
    // 0x1688a8: 0x10000193  b           . + 4 + (0x193 << 2)
    ctx->pc = 0x1688A8u;
    {
        const bool branch_taken_0x1688a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1688a8) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x1688B0u;
label_1688b0:
    // 0x1688b0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1688b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1688b4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1688b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1688b8: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x1688B8u;
    SET_GPR_U32(ctx, 31, 0x1688C0u);
    ctx->pc = 0x1688BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1688B8u;
            // 0x1688bc: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1688C0u; }
        if (ctx->pc != 0x1688C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1688C0u; }
        if (ctx->pc != 0x1688C0u) { return; }
    }
    ctx->pc = 0x1688C0u;
    // 0x1688c0: 0x1000018d  b           . + 4 + (0x18D << 2)
    ctx->pc = 0x1688C0u;
    {
        const bool branch_taken_0x1688c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1688c0) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x1688C8u;
label_1688c8:
    // 0x1688c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1688c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1688cc: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1688ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1688d0: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x1688D0u;
    SET_GPR_U32(ctx, 31, 0x1688D8u);
    ctx->pc = 0x1688D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1688D0u;
            // 0x1688d4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1688D8u; }
        if (ctx->pc != 0x1688D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1688D8u; }
        if (ctx->pc != 0x1688D8u) { return; }
    }
    ctx->pc = 0x1688D8u;
    // 0x1688d8: 0x10000187  b           . + 4 + (0x187 << 2)
    ctx->pc = 0x1688D8u;
    {
        const bool branch_taken_0x1688d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1688d8) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x1688E0u;
label_1688e0:
    // 0x1688e0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1688e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1688e4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1688e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1688e8: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x1688E8u;
    SET_GPR_U32(ctx, 31, 0x1688F0u);
    ctx->pc = 0x1688ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1688E8u;
            // 0x1688ec: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1688F0u; }
        if (ctx->pc != 0x1688F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1688F0u; }
        if (ctx->pc != 0x1688F0u) { return; }
    }
    ctx->pc = 0x1688F0u;
    // 0x1688f0: 0x10000181  b           . + 4 + (0x181 << 2)
    ctx->pc = 0x1688F0u;
    {
        const bool branch_taken_0x1688f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1688f0) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x1688F8u;
label_1688f8:
    // 0x1688f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1688f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1688fc: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1688fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x168900: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168900u;
    SET_GPR_U32(ctx, 31, 0x168908u);
    ctx->pc = 0x168904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168900u;
            // 0x168904: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168908u; }
        if (ctx->pc != 0x168908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168908u; }
        if (ctx->pc != 0x168908u) { return; }
    }
    ctx->pc = 0x168908u;
    // 0x168908: 0x1000017b  b           . + 4 + (0x17B << 2)
    ctx->pc = 0x168908u;
    {
        const bool branch_taken_0x168908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168908) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168910u;
label_168910:
    // 0x168910: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x168910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x168914: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x168914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x168918: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168918u;
    SET_GPR_U32(ctx, 31, 0x168920u);
    ctx->pc = 0x16891Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168918u;
            // 0x16891c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168920u; }
        if (ctx->pc != 0x168920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168920u; }
        if (ctx->pc != 0x168920u) { return; }
    }
    ctx->pc = 0x168920u;
    // 0x168920: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x168920u;
    {
        const bool branch_taken_0x168920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168920) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168928u;
label_168928:
    // 0x168928: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x168928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16892c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x16892cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x168930: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168930u;
    SET_GPR_U32(ctx, 31, 0x168938u);
    ctx->pc = 0x168934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168930u;
            // 0x168934: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168938u; }
        if (ctx->pc != 0x168938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168938u; }
        if (ctx->pc != 0x168938u) { return; }
    }
    ctx->pc = 0x168938u;
    // 0x168938: 0x1000016f  b           . + 4 + (0x16F << 2)
    ctx->pc = 0x168938u;
    {
        const bool branch_taken_0x168938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168938) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168940u;
label_168940:
    // 0x168940: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x168940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x168944: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x168944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x168948: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168948u;
    SET_GPR_U32(ctx, 31, 0x168950u);
    ctx->pc = 0x16894Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168948u;
            // 0x16894c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168950u; }
        if (ctx->pc != 0x168950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168950u; }
        if (ctx->pc != 0x168950u) { return; }
    }
    ctx->pc = 0x168950u;
    // 0x168950: 0x10000169  b           . + 4 + (0x169 << 2)
    ctx->pc = 0x168950u;
    {
        const bool branch_taken_0x168950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168950) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168958u;
label_168958:
    // 0x168958: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x168958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16895c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x16895cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x168960: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168960u;
    SET_GPR_U32(ctx, 31, 0x168968u);
    ctx->pc = 0x168964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168960u;
            // 0x168964: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168968u; }
        if (ctx->pc != 0x168968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168968u; }
        if (ctx->pc != 0x168968u) { return; }
    }
    ctx->pc = 0x168968u;
    // 0x168968: 0x10000163  b           . + 4 + (0x163 << 2)
    ctx->pc = 0x168968u;
    {
        const bool branch_taken_0x168968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168968) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168970u;
label_168970:
    // 0x168970: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x168970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x168974: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x168974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x168978: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168978u;
    SET_GPR_U32(ctx, 31, 0x168980u);
    ctx->pc = 0x16897Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168978u;
            // 0x16897c: 0x2406ffd3  addiu       $a2, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168980u; }
        if (ctx->pc != 0x168980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168980u; }
        if (ctx->pc != 0x168980u) { return; }
    }
    ctx->pc = 0x168980u;
    // 0x168980: 0x1000015d  b           . + 4 + (0x15D << 2)
    ctx->pc = 0x168980u;
    {
        const bool branch_taken_0x168980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168980) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168988u;
label_168988:
    // 0x168988: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x168988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16898c: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x16898cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x168990: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168990u;
    SET_GPR_U32(ctx, 31, 0x168998u);
    ctx->pc = 0x168994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168990u;
            // 0x168994: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168998u; }
        if (ctx->pc != 0x168998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168998u; }
        if (ctx->pc != 0x168998u) { return; }
    }
    ctx->pc = 0x168998u;
    // 0x168998: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x168998u;
    {
        const bool branch_taken_0x168998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168998) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x1689A0u;
label_1689a0:
    // 0x1689a0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1689a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1689a4: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x1689a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x1689a8: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x1689A8u;
    SET_GPR_U32(ctx, 31, 0x1689B0u);
    ctx->pc = 0x1689ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1689A8u;
            // 0x1689ac: 0x2406ffd3  addiu       $a2, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1689B0u; }
        if (ctx->pc != 0x1689B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1689B0u; }
        if (ctx->pc != 0x1689B0u) { return; }
    }
    ctx->pc = 0x1689B0u;
    // 0x1689b0: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x1689B0u;
    {
        const bool branch_taken_0x1689b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1689b0) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x1689B8u;
label_1689b8:
    // 0x1689b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1689b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1689bc: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x1689bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x1689c0: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x1689C0u;
    SET_GPR_U32(ctx, 31, 0x1689C8u);
    ctx->pc = 0x1689C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1689C0u;
            // 0x1689c4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1689C8u; }
        if (ctx->pc != 0x1689C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1689C8u; }
        if (ctx->pc != 0x1689C8u) { return; }
    }
    ctx->pc = 0x1689C8u;
    // 0x1689c8: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x1689C8u;
    {
        const bool branch_taken_0x1689c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1689c8) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x1689D0u;
label_1689d0:
    // 0x1689d0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1689d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1689d4: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x1689d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x1689d8: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x1689D8u;
    SET_GPR_U32(ctx, 31, 0x1689E0u);
    ctx->pc = 0x1689DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1689D8u;
            // 0x1689dc: 0x2406ffd3  addiu       $a2, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1689E0u; }
        if (ctx->pc != 0x1689E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1689E0u; }
        if (ctx->pc != 0x1689E0u) { return; }
    }
    ctx->pc = 0x1689E0u;
    // 0x1689e0: 0x10000145  b           . + 4 + (0x145 << 2)
    ctx->pc = 0x1689E0u;
    {
        const bool branch_taken_0x1689e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1689e0) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x1689E8u;
label_1689e8:
    // 0x1689e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1689e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1689ec: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x1689ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x1689f0: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x1689F0u;
    SET_GPR_U32(ctx, 31, 0x1689F8u);
    ctx->pc = 0x1689F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1689F0u;
            // 0x1689f4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1689F8u; }
        if (ctx->pc != 0x1689F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1689F8u; }
        if (ctx->pc != 0x1689F8u) { return; }
    }
    ctx->pc = 0x1689F8u;
    // 0x1689f8: 0x1000013f  b           . + 4 + (0x13F << 2)
    ctx->pc = 0x1689F8u;
    {
        const bool branch_taken_0x1689f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1689f8) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168A00u;
label_168a00:
    // 0x168a00: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x168a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x168a04: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x168a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x168a08: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168A08u;
    SET_GPR_U32(ctx, 31, 0x168A10u);
    ctx->pc = 0x168A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168A08u;
            // 0x168a0c: 0x2406ffd3  addiu       $a2, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A10u; }
        if (ctx->pc != 0x168A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A10u; }
        if (ctx->pc != 0x168A10u) { return; }
    }
    ctx->pc = 0x168A10u;
    // 0x168a10: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x168A10u;
    {
        const bool branch_taken_0x168a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168a10) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168A18u;
label_168a18:
    // 0x168a18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x168a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168a1c: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x168a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x168a20: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168A20u;
    SET_GPR_U32(ctx, 31, 0x168A28u);
    ctx->pc = 0x168A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168A20u;
            // 0x168a24: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A28u; }
        if (ctx->pc != 0x168A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A28u; }
        if (ctx->pc != 0x168A28u) { return; }
    }
    ctx->pc = 0x168A28u;
    // 0x168a28: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x168A28u;
    {
        const bool branch_taken_0x168a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168a28) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168A30u;
label_168a30:
    // 0x168a30: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x168a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x168a34: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x168a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x168a38: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168A38u;
    SET_GPR_U32(ctx, 31, 0x168A40u);
    ctx->pc = 0x168A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168A38u;
            // 0x168a3c: 0x2406ffd3  addiu       $a2, $zero, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A40u; }
        if (ctx->pc != 0x168A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A40u; }
        if (ctx->pc != 0x168A40u) { return; }
    }
    ctx->pc = 0x168A40u;
    // 0x168a40: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x168A40u;
    {
        const bool branch_taken_0x168a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168a40) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168A48u;
label_168a48:
    // 0x168a48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x168a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168a4c: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x168a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x168a50: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168A50u;
    SET_GPR_U32(ctx, 31, 0x168A58u);
    ctx->pc = 0x168A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168A50u;
            // 0x168a54: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A58u; }
        if (ctx->pc != 0x168A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A58u; }
        if (ctx->pc != 0x168A58u) { return; }
    }
    ctx->pc = 0x168A58u;
    // 0x168a58: 0x10000127  b           . + 4 + (0x127 << 2)
    ctx->pc = 0x168A58u;
    {
        const bool branch_taken_0x168a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168a58) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168A60u;
label_168a60:
    // 0x168a60: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x168a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x168a64: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x168a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x168a68: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168A68u;
    SET_GPR_U32(ctx, 31, 0x168A70u);
    ctx->pc = 0x168A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168A68u;
            // 0x168a6c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A70u; }
        if (ctx->pc != 0x168A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A70u; }
        if (ctx->pc != 0x168A70u) { return; }
    }
    ctx->pc = 0x168A70u;
    // 0x168a70: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x168A70u;
    {
        const bool branch_taken_0x168a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168a70) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168A78u;
label_168a78:
    // 0x168a78: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x168a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x168a7c: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x168a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x168a80: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168A80u;
    SET_GPR_U32(ctx, 31, 0x168A88u);
    ctx->pc = 0x168A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168A80u;
            // 0x168a84: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A88u; }
        if (ctx->pc != 0x168A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A88u; }
        if (ctx->pc != 0x168A88u) { return; }
    }
    ctx->pc = 0x168A88u;
    // 0x168a88: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x168A88u;
    {
        const bool branch_taken_0x168a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168a88) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168A90u;
label_168a90:
    // 0x168a90: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x168a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x168a94: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x168a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x168a98: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168A98u;
    SET_GPR_U32(ctx, 31, 0x168AA0u);
    ctx->pc = 0x168A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168A98u;
            // 0x168a9c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168AA0u; }
        if (ctx->pc != 0x168AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168AA0u; }
        if (ctx->pc != 0x168AA0u) { return; }
    }
    ctx->pc = 0x168AA0u;
    // 0x168aa0: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x168AA0u;
    {
        const bool branch_taken_0x168aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168aa0) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168AA8u;
label_168aa8:
    // 0x168aa8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x168aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x168aac: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x168aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x168ab0: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168AB0u;
    SET_GPR_U32(ctx, 31, 0x168AB8u);
    ctx->pc = 0x168AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168AB0u;
            // 0x168ab4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168AB8u; }
        if (ctx->pc != 0x168AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168AB8u; }
        if (ctx->pc != 0x168AB8u) { return; }
    }
    ctx->pc = 0x168AB8u;
    // 0x168ab8: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x168AB8u;
    {
        const bool branch_taken_0x168ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168ab8) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168AC0u;
label_168ac0:
    // 0x168ac0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x168ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x168ac4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x168ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x168ac8: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168AC8u;
    SET_GPR_U32(ctx, 31, 0x168AD0u);
    ctx->pc = 0x168ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168AC8u;
            // 0x168acc: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168AD0u; }
        if (ctx->pc != 0x168AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168AD0u; }
        if (ctx->pc != 0x168AD0u) { return; }
    }
    ctx->pc = 0x168AD0u;
    // 0x168ad0: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x168AD0u;
    {
        const bool branch_taken_0x168ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168ad0) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168AD8u;
label_168ad8:
    // 0x168ad8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x168ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x168adc: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x168adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x168ae0: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168AE0u;
    SET_GPR_U32(ctx, 31, 0x168AE8u);
    ctx->pc = 0x168AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168AE0u;
            // 0x168ae4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168AE8u; }
        if (ctx->pc != 0x168AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168AE8u; }
        if (ctx->pc != 0x168AE8u) { return; }
    }
    ctx->pc = 0x168AE8u;
    // 0x168ae8: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x168AE8u;
    {
        const bool branch_taken_0x168ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168ae8) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168AF0u;
label_168af0:
    // 0x168af0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x168af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x168af4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x168af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x168af8: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168AF8u;
    SET_GPR_U32(ctx, 31, 0x168B00u);
    ctx->pc = 0x168AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168AF8u;
            // 0x168afc: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B00u; }
        if (ctx->pc != 0x168B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B00u; }
        if (ctx->pc != 0x168B00u) { return; }
    }
    ctx->pc = 0x168B00u;
    // 0x168b00: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x168B00u;
    {
        const bool branch_taken_0x168b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168b00) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168B08u;
label_168b08:
    // 0x168b08: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x168b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x168b0c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x168b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x168b10: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168B10u;
    SET_GPR_U32(ctx, 31, 0x168B18u);
    ctx->pc = 0x168B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168B10u;
            // 0x168b14: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B18u; }
        if (ctx->pc != 0x168B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B18u; }
        if (ctx->pc != 0x168B18u) { return; }
    }
    ctx->pc = 0x168B18u;
    // 0x168b18: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x168B18u;
    {
        const bool branch_taken_0x168b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168b18) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168B20u;
label_168b20:
    // 0x168b20: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x168b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x168b24: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x168b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x168b28: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168B28u;
    SET_GPR_U32(ctx, 31, 0x168B30u);
    ctx->pc = 0x168B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168B28u;
            // 0x168b2c: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B30u; }
        if (ctx->pc != 0x168B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B30u; }
        if (ctx->pc != 0x168B30u) { return; }
    }
    ctx->pc = 0x168B30u;
    // 0x168b30: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x168B30u;
    {
        const bool branch_taken_0x168b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168b30) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168B38u;
label_168b38:
    // 0x168b38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x168b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b3c: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x168b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x168b40: 0xc077e00  jal         func_1DF800
    ctx->pc = 0x168B40u;
    SET_GPR_U32(ctx, 31, 0x168B48u);
    ctx->pc = 0x168B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168B40u;
            // 0x168b44: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF800u;
    if (runtime->hasFunction(0x1DF800u)) {
        auto targetFn = runtime->lookupFunction(0x1DF800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B48u; }
        if (ctx->pc != 0x168B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItemCareer_0x1df800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B48u; }
        if (ctx->pc != 0x168B48u) { return; }
    }
    ctx->pc = 0x168B48u;
    // 0x168b48: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x168B48u;
    {
        const bool branch_taken_0x168b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168b48) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168B50u;
label_168b50:
    // 0x168b50: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x168b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x168b54: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x168b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x168b58: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168B58u;
    SET_GPR_U32(ctx, 31, 0x168B60u);
    ctx->pc = 0x168B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168B58u;
            // 0x168b5c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B60u; }
        if (ctx->pc != 0x168B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B60u; }
        if (ctx->pc != 0x168B60u) { return; }
    }
    ctx->pc = 0x168B60u;
    // 0x168b60: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x168B60u;
    {
        const bool branch_taken_0x168b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168b60) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168B68u;
label_168b68:
    // 0x168b68: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x168b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x168b6c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x168b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x168b70: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168B70u;
    SET_GPR_U32(ctx, 31, 0x168B78u);
    ctx->pc = 0x168B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168B70u;
            // 0x168b74: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B78u; }
        if (ctx->pc != 0x168B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B78u; }
        if (ctx->pc != 0x168B78u) { return; }
    }
    ctx->pc = 0x168B78u;
    // 0x168b78: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x168B78u;
    {
        const bool branch_taken_0x168b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168b78) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168B80u;
label_168b80:
    // 0x168b80: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x168b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x168b84: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x168b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x168b88: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168B88u;
    SET_GPR_U32(ctx, 31, 0x168B90u);
    ctx->pc = 0x168B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168B88u;
            // 0x168b8c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B90u; }
        if (ctx->pc != 0x168B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B90u; }
        if (ctx->pc != 0x168B90u) { return; }
    }
    ctx->pc = 0x168B90u;
    // 0x168b90: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x168B90u;
    {
        const bool branch_taken_0x168b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168b90) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168B98u;
label_168b98:
    // 0x168b98: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x168b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x168b9c: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x168b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x168ba0: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168BA0u;
    SET_GPR_U32(ctx, 31, 0x168BA8u);
    ctx->pc = 0x168BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168BA0u;
            // 0x168ba4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168BA8u; }
        if (ctx->pc != 0x168BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168BA8u; }
        if (ctx->pc != 0x168BA8u) { return; }
    }
    ctx->pc = 0x168BA8u;
    // 0x168ba8: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x168BA8u;
    {
        const bool branch_taken_0x168ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168ba8) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168BB0u;
label_168bb0:
    // 0x168bb0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x168bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x168bb4: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x168bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x168bb8: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168BB8u;
    SET_GPR_U32(ctx, 31, 0x168BC0u);
    ctx->pc = 0x168BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168BB8u;
            // 0x168bbc: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168BC0u; }
        if (ctx->pc != 0x168BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168BC0u; }
        if (ctx->pc != 0x168BC0u) { return; }
    }
    ctx->pc = 0x168BC0u;
    // 0x168bc0: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x168BC0u;
    {
        const bool branch_taken_0x168bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168bc0) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168BC8u;
label_168bc8:
    // 0x168bc8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x168bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x168bcc: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x168bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x168bd0: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168BD0u;
    SET_GPR_U32(ctx, 31, 0x168BD8u);
    ctx->pc = 0x168BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168BD0u;
            // 0x168bd4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168BD8u; }
        if (ctx->pc != 0x168BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168BD8u; }
        if (ctx->pc != 0x168BD8u) { return; }
    }
    ctx->pc = 0x168BD8u;
    // 0x168bd8: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x168BD8u;
    {
        const bool branch_taken_0x168bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168bd8) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168BE0u;
label_168be0:
    // 0x168be0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x168be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x168be4: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x168be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x168be8: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168BE8u;
    SET_GPR_U32(ctx, 31, 0x168BF0u);
    ctx->pc = 0x168BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168BE8u;
            // 0x168bec: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168BF0u; }
        if (ctx->pc != 0x168BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168BF0u; }
        if (ctx->pc != 0x168BF0u) { return; }
    }
    ctx->pc = 0x168BF0u;
    // 0x168bf0: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x168BF0u;
    {
        const bool branch_taken_0x168bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168bf0) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168BF8u;
label_168bf8:
    // 0x168bf8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x168bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x168bfc: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x168bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x168c00: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168C00u;
    SET_GPR_U32(ctx, 31, 0x168C08u);
    ctx->pc = 0x168C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168C00u;
            // 0x168c04: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168C08u; }
        if (ctx->pc != 0x168C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168C08u; }
        if (ctx->pc != 0x168C08u) { return; }
    }
    ctx->pc = 0x168C08u;
    // 0x168c08: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x168C08u;
    {
        const bool branch_taken_0x168c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168c08) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168C10u;
label_168c10:
    // 0x168c10: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x168c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x168c14: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x168c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x168c18: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168C18u;
    SET_GPR_U32(ctx, 31, 0x168C20u);
    ctx->pc = 0x168C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168C18u;
            // 0x168c1c: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168C20u; }
        if (ctx->pc != 0x168C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168C20u; }
        if (ctx->pc != 0x168C20u) { return; }
    }
    ctx->pc = 0x168C20u;
    // 0x168c20: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x168C20u;
    {
        const bool branch_taken_0x168c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168c20) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168C28u;
label_168c28:
    // 0x168c28: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x168c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x168c2c: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x168c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x168c30: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168C30u;
    SET_GPR_U32(ctx, 31, 0x168C38u);
    ctx->pc = 0x168C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168C30u;
            // 0x168c34: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168C38u; }
        if (ctx->pc != 0x168C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168C38u; }
        if (ctx->pc != 0x168C38u) { return; }
    }
    ctx->pc = 0x168C38u;
    // 0x168c38: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x168C38u;
    {
        const bool branch_taken_0x168c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168c38) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168C40u;
label_168c40:
    // 0x168c40: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x168c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x168c44: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x168c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x168c48: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168C48u;
    SET_GPR_U32(ctx, 31, 0x168C50u);
    ctx->pc = 0x168C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168C48u;
            // 0x168c4c: 0x2406ffd6  addiu       $a2, $zero, -0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967254));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168C50u; }
        if (ctx->pc != 0x168C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168C50u; }
        if (ctx->pc != 0x168C50u) { return; }
    }
    ctx->pc = 0x168C50u;
    // 0x168c50: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x168C50u;
    {
        const bool branch_taken_0x168c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168c50) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168C58u;
label_168c58:
    // 0x168c58: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x168c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x168c5c: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x168c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x168c60: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168C60u;
    SET_GPR_U32(ctx, 31, 0x168C68u);
    ctx->pc = 0x168C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168C60u;
            // 0x168c64: 0x2406ffd4  addiu       $a2, $zero, -0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967252));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168C68u; }
        if (ctx->pc != 0x168C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168C68u; }
        if (ctx->pc != 0x168C68u) { return; }
    }
    ctx->pc = 0x168C68u;
    // 0x168c68: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x168C68u;
    {
        const bool branch_taken_0x168c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168c68) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168C70u;
label_168c70:
    // 0x168c70: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x168c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x168c74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168c78: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168C78u;
    SET_GPR_U32(ctx, 31, 0x168C80u);
    ctx->pc = 0x168C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168C78u;
            // 0x168c7c: 0x2406ffd2  addiu       $a2, $zero, -0x2E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967250));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168C80u; }
        if (ctx->pc != 0x168C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168C80u; }
        if (ctx->pc != 0x168C80u) { return; }
    }
    ctx->pc = 0x168C80u;
    // 0x168c80: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x168C80u;
    {
        const bool branch_taken_0x168c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168c80) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168C88u;
label_168c88:
    // 0x168c88: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x168c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x168c8c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x168c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168c90: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168C90u;
    SET_GPR_U32(ctx, 31, 0x168C98u);
    ctx->pc = 0x168C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168C90u;
            // 0x168c94: 0x2406ffd0  addiu       $a2, $zero, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168C98u; }
        if (ctx->pc != 0x168C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168C98u; }
        if (ctx->pc != 0x168C98u) { return; }
    }
    ctx->pc = 0x168C98u;
    // 0x168c98: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x168C98u;
    {
        const bool branch_taken_0x168c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168c98) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168CA0u;
label_168ca0:
    // 0x168ca0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x168ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x168ca4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x168ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x168ca8: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168CA8u;
    SET_GPR_U32(ctx, 31, 0x168CB0u);
    ctx->pc = 0x168CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168CA8u;
            // 0x168cac: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168CB0u; }
        if (ctx->pc != 0x168CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168CB0u; }
        if (ctx->pc != 0x168CB0u) { return; }
    }
    ctx->pc = 0x168CB0u;
    // 0x168cb0: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x168CB0u;
    {
        const bool branch_taken_0x168cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168cb0) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168CB8u;
label_168cb8:
    // 0x168cb8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x168cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x168cbc: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x168cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x168cc0: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168CC0u;
    SET_GPR_U32(ctx, 31, 0x168CC8u);
    ctx->pc = 0x168CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168CC0u;
            // 0x168cc4: 0x2406ffcc  addiu       $a2, $zero, -0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967244));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168CC8u; }
        if (ctx->pc != 0x168CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168CC8u; }
        if (ctx->pc != 0x168CC8u) { return; }
    }
    ctx->pc = 0x168CC8u;
    // 0x168cc8: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x168CC8u;
    {
        const bool branch_taken_0x168cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168cc8) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168CD0u;
label_168cd0:
    // 0x168cd0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x168cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x168cd4: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x168cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x168cd8: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168CD8u;
    SET_GPR_U32(ctx, 31, 0x168CE0u);
    ctx->pc = 0x168CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168CD8u;
            // 0x168cdc: 0x2406ffcc  addiu       $a2, $zero, -0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967244));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168CE0u; }
        if (ctx->pc != 0x168CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168CE0u; }
        if (ctx->pc != 0x168CE0u) { return; }
    }
    ctx->pc = 0x168CE0u;
    // 0x168ce0: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x168CE0u;
    {
        const bool branch_taken_0x168ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168ce0) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168CE8u;
label_168ce8:
    // 0x168ce8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x168ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x168cec: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x168cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x168cf0: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168CF0u;
    SET_GPR_U32(ctx, 31, 0x168CF8u);
    ctx->pc = 0x168CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168CF0u;
            // 0x168cf4: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168CF8u; }
        if (ctx->pc != 0x168CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168CF8u; }
        if (ctx->pc != 0x168CF8u) { return; }
    }
    ctx->pc = 0x168CF8u;
    // 0x168cf8: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x168CF8u;
    {
        const bool branch_taken_0x168cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168cf8) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168D00u;
label_168d00:
    // 0x168d00: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x168d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x168d04: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x168d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x168d08: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168D08u;
    SET_GPR_U32(ctx, 31, 0x168D10u);
    ctx->pc = 0x168D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168D08u;
            // 0x168d0c: 0x2406ffd0  addiu       $a2, $zero, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168D10u; }
        if (ctx->pc != 0x168D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168D10u; }
        if (ctx->pc != 0x168D10u) { return; }
    }
    ctx->pc = 0x168D10u;
    // 0x168d10: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x168D10u;
    {
        const bool branch_taken_0x168d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168d10) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168D18u;
label_168d18:
    // 0x168d18: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x168d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x168d1c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x168d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x168d20: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168D20u;
    SET_GPR_U32(ctx, 31, 0x168D28u);
    ctx->pc = 0x168D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168D20u;
            // 0x168d24: 0x2406ffd2  addiu       $a2, $zero, -0x2E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967250));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168D28u; }
        if (ctx->pc != 0x168D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168D28u; }
        if (ctx->pc != 0x168D28u) { return; }
    }
    ctx->pc = 0x168D28u;
    // 0x168d28: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x168D28u;
    {
        const bool branch_taken_0x168d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168d28) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168D30u;
label_168d30:
    // 0x168d30: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x168d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x168d34: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x168d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x168d38: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168D38u;
    SET_GPR_U32(ctx, 31, 0x168D40u);
    ctx->pc = 0x168D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168D38u;
            // 0x168d3c: 0x2406ffd4  addiu       $a2, $zero, -0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967252));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168D40u; }
        if (ctx->pc != 0x168D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168D40u; }
        if (ctx->pc != 0x168D40u) { return; }
    }
    ctx->pc = 0x168D40u;
    // 0x168d40: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x168D40u;
    {
        const bool branch_taken_0x168d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168d40) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168D48u;
label_168d48:
    // 0x168d48: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x168d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x168d4c: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x168d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x168d50: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168D50u;
    SET_GPR_U32(ctx, 31, 0x168D58u);
    ctx->pc = 0x168D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168D50u;
            // 0x168d54: 0x2406ffd6  addiu       $a2, $zero, -0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967254));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168D58u; }
        if (ctx->pc != 0x168D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168D58u; }
        if (ctx->pc != 0x168D58u) { return; }
    }
    ctx->pc = 0x168D58u;
    // 0x168d58: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x168D58u;
    {
        const bool branch_taken_0x168d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168d58) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168D60u;
label_168d60:
    // 0x168d60: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x168d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x168d64: 0x2405ffe7  addiu       $a1, $zero, -0x19
    ctx->pc = 0x168d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x168d68: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168D68u;
    SET_GPR_U32(ctx, 31, 0x168D70u);
    ctx->pc = 0x168D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168D68u;
            // 0x168d6c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168D70u; }
        if (ctx->pc != 0x168D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168D70u; }
        if (ctx->pc != 0x168D70u) { return; }
    }
    ctx->pc = 0x168D70u;
    // 0x168d70: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x168D70u;
    {
        const bool branch_taken_0x168d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168d70) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168D78u;
label_168d78:
    // 0x168d78: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x168d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x168d7c: 0x2405ffdd  addiu       $a1, $zero, -0x23
    ctx->pc = 0x168d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967261));
    // 0x168d80: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168D80u;
    SET_GPR_U32(ctx, 31, 0x168D88u);
    ctx->pc = 0x168D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168D80u;
            // 0x168d84: 0x2406ffda  addiu       $a2, $zero, -0x26 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967258));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168D88u; }
        if (ctx->pc != 0x168D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168D88u; }
        if (ctx->pc != 0x168D88u) { return; }
    }
    ctx->pc = 0x168D88u;
    // 0x168d88: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x168D88u;
    {
        const bool branch_taken_0x168d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168d88) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168D90u;
label_168d90:
    // 0x168d90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x168d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d98: 0xc077e00  jal         func_1DF800
    ctx->pc = 0x168D98u;
    SET_GPR_U32(ctx, 31, 0x168DA0u);
    ctx->pc = 0x168D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168D98u;
            // 0x168d9c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DF800u;
    if (runtime->hasFunction(0x1DF800u)) {
        auto targetFn = runtime->lookupFunction(0x1DF800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168DA0u; }
        if (ctx->pc != 0x168DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItemCareer_0x1df800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168DA0u; }
        if (ctx->pc != 0x168DA0u) { return; }
    }
    ctx->pc = 0x168DA0u;
    // 0x168da0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x168DA0u;
    {
        const bool branch_taken_0x168da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168da0) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168DA8u;
label_168da8:
    // 0x168da8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x168da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168dac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168db0: 0xc07495c  jal         func_1D2570
    ctx->pc = 0x168DB0u;
    SET_GPR_U32(ctx, 31, 0x168DB8u);
    ctx->pc = 0x168DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168DB0u;
            // 0x168db4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2570u;
    if (runtime->hasFunction(0x1D2570u)) {
        auto targetFn = runtime->lookupFunction(0x1D2570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168DB8u; }
        if (ctx->pc != 0x168DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_02_0x1d2570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168DB8u; }
        if (ctx->pc != 0x168DB8u) { return; }
    }
    ctx->pc = 0x168DB8u;
    // 0x168db8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x168DB8u;
    {
        const bool branch_taken_0x168db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168db8) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168DC0u;
label_168dc0:
    // 0x168dc0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x168dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x168dc4: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x168dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x168dc8: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168DC8u;
    SET_GPR_U32(ctx, 31, 0x168DD0u);
    ctx->pc = 0x168DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168DC8u;
            // 0x168dcc: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168DD0u; }
        if (ctx->pc != 0x168DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168DD0u; }
        if (ctx->pc != 0x168DD0u) { return; }
    }
    ctx->pc = 0x168DD0u;
    // 0x168dd0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x168dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x168dd4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x168dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x168dd8: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168DD8u;
    SET_GPR_U32(ctx, 31, 0x168DE0u);
    ctx->pc = 0x168DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168DD8u;
            // 0x168ddc: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168DE0u; }
        if (ctx->pc != 0x168DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168DE0u; }
        if (ctx->pc != 0x168DE0u) { return; }
    }
    ctx->pc = 0x168DE0u;
    // 0x168de0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x168DE0u;
    {
        const bool branch_taken_0x168de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168de0) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168DE8u;
label_168de8:
    // 0x168de8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x168de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x168dec: 0x2405ffe9  addiu       $a1, $zero, -0x17
    ctx->pc = 0x168decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967273));
    // 0x168df0: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168DF0u;
    SET_GPR_U32(ctx, 31, 0x168DF8u);
    ctx->pc = 0x168DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168DF0u;
            // 0x168df4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168DF8u; }
        if (ctx->pc != 0x168DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168DF8u; }
        if (ctx->pc != 0x168DF8u) { return; }
    }
    ctx->pc = 0x168DF8u;
    // 0x168df8: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x168df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x168dfc: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x168dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x168e00: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168E00u;
    SET_GPR_U32(ctx, 31, 0x168E08u);
    ctx->pc = 0x168E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168E00u;
            // 0x168e04: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E08u; }
        if (ctx->pc != 0x168E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E08u; }
        if (ctx->pc != 0x168E08u) { return; }
    }
    ctx->pc = 0x168E08u;
    // 0x168e08: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x168E08u;
    {
        const bool branch_taken_0x168e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168e08) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168E10u;
label_168e10:
    // 0x168e10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x168e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e14: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x168e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x168e18: 0xc07495c  jal         func_1D2570
    ctx->pc = 0x168E18u;
    SET_GPR_U32(ctx, 31, 0x168E20u);
    ctx->pc = 0x168E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168E18u;
            // 0x168e1c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2570u;
    if (runtime->hasFunction(0x1D2570u)) {
        auto targetFn = runtime->lookupFunction(0x1D2570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E20u; }
        if (ctx->pc != 0x168E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_02_0x1d2570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E20u; }
        if (ctx->pc != 0x168E20u) { return; }
    }
    ctx->pc = 0x168E20u;
    // 0x168e20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x168e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e24: 0x2405ffec  addiu       $a1, $zero, -0x14
    ctx->pc = 0x168e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x168e28: 0xc07495c  jal         func_1D2570
    ctx->pc = 0x168E28u;
    SET_GPR_U32(ctx, 31, 0x168E30u);
    ctx->pc = 0x168E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168E28u;
            // 0x168e2c: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2570u;
    if (runtime->hasFunction(0x1D2570u)) {
        auto targetFn = runtime->lookupFunction(0x1D2570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E30u; }
        if (ctx->pc != 0x168E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_02_0x1d2570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E30u; }
        if (ctx->pc != 0x168E30u) { return; }
    }
    ctx->pc = 0x168E30u;
    // 0x168e30: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x168E30u;
    {
        const bool branch_taken_0x168e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168e30) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168E38u;
label_168e38:
    // 0x168e38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x168e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168e3c: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x168e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x168e40: 0xc07434c  jal         func_1D0D30
    ctx->pc = 0x168E40u;
    SET_GPR_U32(ctx, 31, 0x168E48u);
    ctx->pc = 0x168E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168E40u;
            // 0x168e44: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D30u;
    if (runtime->hasFunction(0x1D0D30u)) {
        auto targetFn = runtime->lookupFunction(0x1D0D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E48u; }
        if (ctx->pc != 0x168E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_01_0x1d0d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E48u; }
        if (ctx->pc != 0x168E48u) { return; }
    }
    ctx->pc = 0x168E48u;
    // 0x168e48: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x168e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x168e4c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x168e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x168e50: 0xc07434c  jal         func_1D0D30
    ctx->pc = 0x168E50u;
    SET_GPR_U32(ctx, 31, 0x168E58u);
    ctx->pc = 0x168E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168E50u;
            // 0x168e54: 0x2406fff6  addiu       $a2, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D30u;
    if (runtime->hasFunction(0x1D0D30u)) {
        auto targetFn = runtime->lookupFunction(0x1D0D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E58u; }
        if (ctx->pc != 0x168E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_01_0x1d0d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E58u; }
        if (ctx->pc != 0x168E58u) { return; }
    }
    ctx->pc = 0x168E58u;
    // 0x168e58: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x168E58u;
    {
        const bool branch_taken_0x168e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168e58) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168E60u;
label_168e60:
    // 0x168e60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x168e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168e64: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x168e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x168e68: 0xc07434c  jal         func_1D0D30
    ctx->pc = 0x168E68u;
    SET_GPR_U32(ctx, 31, 0x168E70u);
    ctx->pc = 0x168E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168E68u;
            // 0x168e6c: 0x2406fff6  addiu       $a2, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D30u;
    if (runtime->hasFunction(0x1D0D30u)) {
        auto targetFn = runtime->lookupFunction(0x1D0D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E70u; }
        if (ctx->pc != 0x168E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_01_0x1d0d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E70u; }
        if (ctx->pc != 0x168E70u) { return; }
    }
    ctx->pc = 0x168E70u;
    // 0x168e70: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x168e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x168e74: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x168e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x168e78: 0xc07434c  jal         func_1D0D30
    ctx->pc = 0x168E78u;
    SET_GPR_U32(ctx, 31, 0x168E80u);
    ctx->pc = 0x168E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168E78u;
            // 0x168e7c: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D30u;
    if (runtime->hasFunction(0x1D0D30u)) {
        auto targetFn = runtime->lookupFunction(0x1D0D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E80u; }
        if (ctx->pc != 0x168E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_01_0x1d0d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E80u; }
        if (ctx->pc != 0x168E80u) { return; }
    }
    ctx->pc = 0x168E80u;
    // 0x168e80: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x168E80u;
    {
        const bool branch_taken_0x168e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168e80) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168E88u;
label_168e88:
    // 0x168e88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x168e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e8c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x168e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x168e90: 0xc07434c  jal         func_1D0D30
    ctx->pc = 0x168E90u;
    SET_GPR_U32(ctx, 31, 0x168E98u);
    ctx->pc = 0x168E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168E90u;
            // 0x168e94: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D30u;
    if (runtime->hasFunction(0x1D0D30u)) {
        auto targetFn = runtime->lookupFunction(0x1D0D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E98u; }
        if (ctx->pc != 0x168E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_01_0x1d0d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E98u; }
        if (ctx->pc != 0x168E98u) { return; }
    }
    ctx->pc = 0x168E98u;
    // 0x168e98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x168e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e9c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x168e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x168ea0: 0xc07434c  jal         func_1D0D30
    ctx->pc = 0x168EA0u;
    SET_GPR_U32(ctx, 31, 0x168EA8u);
    ctx->pc = 0x168EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168EA0u;
            // 0x168ea4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D30u;
    if (runtime->hasFunction(0x1D0D30u)) {
        auto targetFn = runtime->lookupFunction(0x1D0D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168EA8u; }
        if (ctx->pc != 0x168EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_01_0x1d0d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168EA8u; }
        if (ctx->pc != 0x168EA8u) { return; }
    }
    ctx->pc = 0x168EA8u;
    // 0x168ea8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x168ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168eac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168eb0: 0xc07434c  jal         func_1D0D30
    ctx->pc = 0x168EB0u;
    SET_GPR_U32(ctx, 31, 0x168EB8u);
    ctx->pc = 0x168EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168EB0u;
            // 0x168eb4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D30u;
    if (runtime->hasFunction(0x1D0D30u)) {
        auto targetFn = runtime->lookupFunction(0x1D0D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168EB8u; }
        if (ctx->pc != 0x168EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_01_0x1d0d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168EB8u; }
        if (ctx->pc != 0x168EB8u) { return; }
    }
    ctx->pc = 0x168EB8u;
    // 0x168eb8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x168eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ebc: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x168ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x168ec0: 0xc07434c  jal         func_1D0D30
    ctx->pc = 0x168EC0u;
    SET_GPR_U32(ctx, 31, 0x168EC8u);
    ctx->pc = 0x168EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168EC0u;
            // 0x168ec4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D30u;
    if (runtime->hasFunction(0x1D0D30u)) {
        auto targetFn = runtime->lookupFunction(0x1D0D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168EC8u; }
        if (ctx->pc != 0x168EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_01_0x1d0d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168EC8u; }
        if (ctx->pc != 0x168EC8u) { return; }
    }
    ctx->pc = 0x168EC8u;
    // 0x168ec8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x168ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ecc: 0x2405ffe2  addiu       $a1, $zero, -0x1E
    ctx->pc = 0x168eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x168ed0: 0xc07434c  jal         func_1D0D30
    ctx->pc = 0x168ED0u;
    SET_GPR_U32(ctx, 31, 0x168ED8u);
    ctx->pc = 0x168ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168ED0u;
            // 0x168ed4: 0x2406ffd8  addiu       $a2, $zero, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D30u;
    if (runtime->hasFunction(0x1D0D30u)) {
        auto targetFn = runtime->lookupFunction(0x1D0D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168ED8u; }
        if (ctx->pc != 0x168ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_01_0x1d0d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168ED8u; }
        if (ctx->pc != 0x168ED8u) { return; }
    }
    ctx->pc = 0x168ED8u;
    // 0x168ed8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x168ED8u;
    {
        const bool branch_taken_0x168ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168ed8) {
            ctx->pc = 0x168EF8u;
            goto label_168ef8;
        }
    }
    ctx->pc = 0x168EE0u;
label_168ee0:
    // 0x168ee0: 0xc05d004  jal         func_174010
    ctx->pc = 0x168EE0u;
    SET_GPR_U32(ctx, 31, 0x168EE8u);
    ctx->pc = 0x168EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168EE0u;
            // 0x168ee4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174010u;
    if (runtime->hasFunction(0x174010u)) {
        auto targetFn = runtime->lookupFunction(0x174010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168EE8u; }
        if (ctx->pc != 0x168EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_bgm_0x174010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168EE8u; }
        if (ctx->pc != 0x168EE8u) { return; }
    }
    ctx->pc = 0x168EE8u;
    // 0x168ee8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x168ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168eec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ef0: 0xc076e34  jal         func_1DB8D0
    ctx->pc = 0x168EF0u;
    SET_GPR_U32(ctx, 31, 0x168EF8u);
    ctx->pc = 0x168EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168EF0u;
            // 0x168ef4: 0x2406ffa6  addiu       $a2, $zero, -0x5A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967206));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8D0u;
    if (runtime->hasFunction(0x1DB8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168EF8u; }
        if (ctx->pc != 0x168EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateStageex2Boss_0x1db8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168EF8u; }
        if (ctx->pc != 0x168EF8u) { return; }
    }
    ctx->pc = 0x168EF8u;
label_168ef8:
    // 0x168ef8: 0x2a0105dd  slti        $at, $s0, 0x5DD
    ctx->pc = 0x168ef8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1501) ? 1 : 0);
    // 0x168efc: 0x14200026  bnez        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x168EFCu;
    {
        const bool branch_taken_0x168efc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x168F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168EFCu;
            // 0x168f00: 0x2a0107d0  slti        $at, $s0, 0x7D0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168efc) {
            ctx->pc = 0x168F98u;
            goto label_168f98;
        }
    }
    ctx->pc = 0x168F04u;
    // 0x168f04: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x168F04u;
    {
        const bool branch_taken_0x168f04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x168F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168F04u;
            // 0x168f08: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f04) {
            ctx->pc = 0x168F98u;
            goto label_168f98;
        }
    }
    ctx->pc = 0x168F0Cu;
    // 0x168f0c: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x168f0cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x168f10: 0x0  nop
    ctx->pc = 0x168f10u;
    // NOP
    // 0x168f14: 0x0  nop
    ctx->pc = 0x168f14u;
    // NOP
    // 0x168f18: 0x1810  mfhi        $v1
    ctx->pc = 0x168f18u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x168f1c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x168F1Cu;
    {
        const bool branch_taken_0x168f1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x168f1c) {
            ctx->pc = 0x168F50u;
            goto label_168f50;
        }
    }
    ctx->pc = 0x168F24u;
    // 0x168f24: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x168F24u;
    SET_GPR_U32(ctx, 31, 0x168F2Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168F2Cu; }
        if (ctx->pc != 0x168F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168F2Cu; }
        if (ctx->pc != 0x168F2Cu) { return; }
    }
    ctx->pc = 0x168F2Cu;
    // 0x168f2c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x168f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x168f30: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x168f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x168f34: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x168f34u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x168f38: 0x2406ffd8  addiu       $a2, $zero, -0x28
    ctx->pc = 0x168f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x168f3c: 0x0  nop
    ctx->pc = 0x168f3cu;
    // NOP
    // 0x168f40: 0x1010  mfhi        $v0
    ctx->pc = 0x168f40u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x168f44: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x168f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x168f48: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168F48u;
    SET_GPR_U32(ctx, 31, 0x168F50u);
    ctx->pc = 0x168F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168F48u;
            // 0x168f4c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168F50u; }
        if (ctx->pc != 0x168F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168F50u; }
        if (ctx->pc != 0x168F50u) { return; }
    }
    ctx->pc = 0x168F50u;
label_168f50:
    // 0x168f50: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x168f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x168f54: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x168f54u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x168f58: 0x0  nop
    ctx->pc = 0x168f58u;
    // NOP
    // 0x168f5c: 0x0  nop
    ctx->pc = 0x168f5cu;
    // NOP
    // 0x168f60: 0x1810  mfhi        $v1
    ctx->pc = 0x168f60u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x168f64: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x168F64u;
    {
        const bool branch_taken_0x168f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x168f64) {
            ctx->pc = 0x168F98u;
            goto label_168f98;
        }
    }
    ctx->pc = 0x168F6Cu;
    // 0x168f6c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x168F6Cu;
    SET_GPR_U32(ctx, 31, 0x168F74u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168F74u; }
        if (ctx->pc != 0x168F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168F74u; }
        if (ctx->pc != 0x168F74u) { return; }
    }
    ctx->pc = 0x168F74u;
    // 0x168f74: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x168f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x168f78: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x168f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x168f7c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x168f7cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x168f80: 0x2406ffd8  addiu       $a2, $zero, -0x28
    ctx->pc = 0x168f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x168f84: 0x0  nop
    ctx->pc = 0x168f84u;
    // NOP
    // 0x168f88: 0x1010  mfhi        $v0
    ctx->pc = 0x168f88u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x168f8c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x168f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x168f90: 0xc074f04  jal         func_1D3C10
    ctx->pc = 0x168F90u;
    SET_GPR_U32(ctx, 31, 0x168F98u);
    ctx->pc = 0x168F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168F90u;
            // 0x168f94: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C10u;
    if (runtime->hasFunction(0x1D3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1D3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168F98u; }
        if (ctx->pc != 0x168F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_0x1d3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168F98u; }
        if (ctx->pc != 0x168F98u) { return; }
    }
    ctx->pc = 0x168F98u;
label_168f98:
    // 0x168f98: 0x2a010a29  slti        $at, $s0, 0xA29
    ctx->pc = 0x168f98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2601) ? 1 : 0);
    // 0x168f9c: 0x14200026  bnez        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x168F9Cu;
    {
        const bool branch_taken_0x168f9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x168FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168F9Cu;
            // 0x168fa0: 0x2a010bb8  slti        $at, $s0, 0xBB8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f9c) {
            ctx->pc = 0x169038u;
            goto label_169038;
        }
    }
    ctx->pc = 0x168FA4u;
    // 0x168fa4: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x168FA4u;
    {
        const bool branch_taken_0x168fa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x168FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168FA4u;
            // 0x168fa8: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168fa4) {
            ctx->pc = 0x169038u;
            goto label_169038;
        }
    }
    ctx->pc = 0x168FACu;
    // 0x168fac: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x168facu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x168fb0: 0x0  nop
    ctx->pc = 0x168fb0u;
    // NOP
    // 0x168fb4: 0x0  nop
    ctx->pc = 0x168fb4u;
    // NOP
    // 0x168fb8: 0x1810  mfhi        $v1
    ctx->pc = 0x168fb8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x168fbc: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x168FBCu;
    {
        const bool branch_taken_0x168fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x168fbc) {
            ctx->pc = 0x168FF0u;
            goto label_168ff0;
        }
    }
    ctx->pc = 0x168FC4u;
    // 0x168fc4: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x168FC4u;
    SET_GPR_U32(ctx, 31, 0x168FCCu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168FCCu; }
        if (ctx->pc != 0x168FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168FCCu; }
        if (ctx->pc != 0x168FCCu) { return; }
    }
    ctx->pc = 0x168FCCu;
    // 0x168fcc: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x168fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x168fd0: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x168fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x168fd4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x168fd4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x168fd8: 0x2406ffd8  addiu       $a2, $zero, -0x28
    ctx->pc = 0x168fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x168fdc: 0x0  nop
    ctx->pc = 0x168fdcu;
    // NOP
    // 0x168fe0: 0x1010  mfhi        $v0
    ctx->pc = 0x168fe0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x168fe4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x168fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x168fe8: 0xc073a68  jal         func_1CE9A0
    ctx->pc = 0x168FE8u;
    SET_GPR_U32(ctx, 31, 0x168FF0u);
    ctx->pc = 0x168FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168FE8u;
            // 0x168fec: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE9A0u;
    if (runtime->hasFunction(0x1CE9A0u)) {
        auto targetFn = runtime->lookupFunction(0x1CE9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168FF0u; }
        if (ctx->pc != 0x168FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_05_0x1ce9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168FF0u; }
        if (ctx->pc != 0x168FF0u) { return; }
    }
    ctx->pc = 0x168FF0u;
label_168ff0:
    // 0x168ff0: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x168ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x168ff4: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x168ff4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x168ff8: 0x0  nop
    ctx->pc = 0x168ff8u;
    // NOP
    // 0x168ffc: 0x0  nop
    ctx->pc = 0x168ffcu;
    // NOP
    // 0x169000: 0x1810  mfhi        $v1
    ctx->pc = 0x169000u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x169004: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x169004u;
    {
        const bool branch_taken_0x169004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169004) {
            ctx->pc = 0x169038u;
            goto label_169038;
        }
    }
    ctx->pc = 0x16900Cu;
    // 0x16900c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x16900Cu;
    SET_GPR_U32(ctx, 31, 0x169014u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169014u; }
        if (ctx->pc != 0x169014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169014u; }
        if (ctx->pc != 0x169014u) { return; }
    }
    ctx->pc = 0x169014u;
    // 0x169014: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x169014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x169018: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x169018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16901c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x16901cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x169020: 0x2406ffd8  addiu       $a2, $zero, -0x28
    ctx->pc = 0x169020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x169024: 0x0  nop
    ctx->pc = 0x169024u;
    // NOP
    // 0x169028: 0x1010  mfhi        $v0
    ctx->pc = 0x169028u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x16902c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16902cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x169030: 0xc073a68  jal         func_1CE9A0
    ctx->pc = 0x169030u;
    SET_GPR_U32(ctx, 31, 0x169038u);
    ctx->pc = 0x169034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169030u;
            // 0x169034: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE9A0u;
    if (runtime->hasFunction(0x1CE9A0u)) {
        auto targetFn = runtime->lookupFunction(0x1CE9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169038u; }
        if (ctx->pc != 0x169038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_05_0x1ce9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169038u; }
        if (ctx->pc != 0x169038u) { return; }
    }
    ctx->pc = 0x169038u;
label_169038:
    // 0x169038: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16903c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16903cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169040: 0x3e00008  jr          $ra
    ctx->pc = 0x169040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169040u;
            // 0x169044: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168590u: goto label_168590;
            case 0x1685A8u: goto label_1685a8;
            case 0x1685C0u: goto label_1685c0;
            case 0x1685D8u: goto label_1685d8;
            case 0x1685F0u: goto label_1685f0;
            case 0x168608u: goto label_168608;
            case 0x168620u: goto label_168620;
            case 0x168638u: goto label_168638;
            case 0x168650u: goto label_168650;
            case 0x168668u: goto label_168668;
            case 0x168680u: goto label_168680;
            case 0x168698u: goto label_168698;
            case 0x1686B0u: goto label_1686b0;
            case 0x1686C8u: goto label_1686c8;
            case 0x1686E0u: goto label_1686e0;
            case 0x1686F8u: goto label_1686f8;
            case 0x168710u: goto label_168710;
            case 0x168728u: goto label_168728;
            case 0x168740u: goto label_168740;
            case 0x168758u: goto label_168758;
            case 0x168770u: goto label_168770;
            case 0x168788u: goto label_168788;
            case 0x1687A0u: goto label_1687a0;
            case 0x1687B8u: goto label_1687b8;
            case 0x1687E0u: goto label_1687e0;
            case 0x168808u: goto label_168808;
            case 0x168820u: goto label_168820;
            case 0x168838u: goto label_168838;
            case 0x168850u: goto label_168850;
            case 0x168868u: goto label_168868;
            case 0x168880u: goto label_168880;
            case 0x168898u: goto label_168898;
            case 0x1688B0u: goto label_1688b0;
            case 0x1688C8u: goto label_1688c8;
            case 0x1688E0u: goto label_1688e0;
            case 0x1688F8u: goto label_1688f8;
            case 0x168910u: goto label_168910;
            case 0x168928u: goto label_168928;
            case 0x168940u: goto label_168940;
            case 0x168958u: goto label_168958;
            case 0x168970u: goto label_168970;
            case 0x168988u: goto label_168988;
            case 0x1689A0u: goto label_1689a0;
            case 0x1689B8u: goto label_1689b8;
            case 0x1689D0u: goto label_1689d0;
            case 0x1689E8u: goto label_1689e8;
            case 0x168A00u: goto label_168a00;
            case 0x168A18u: goto label_168a18;
            case 0x168A30u: goto label_168a30;
            case 0x168A48u: goto label_168a48;
            case 0x168A60u: goto label_168a60;
            case 0x168A78u: goto label_168a78;
            case 0x168A90u: goto label_168a90;
            case 0x168AA8u: goto label_168aa8;
            case 0x168AC0u: goto label_168ac0;
            case 0x168AD8u: goto label_168ad8;
            case 0x168AF0u: goto label_168af0;
            case 0x168B08u: goto label_168b08;
            case 0x168B20u: goto label_168b20;
            case 0x168B38u: goto label_168b38;
            case 0x168B50u: goto label_168b50;
            case 0x168B68u: goto label_168b68;
            case 0x168B80u: goto label_168b80;
            case 0x168B98u: goto label_168b98;
            case 0x168BB0u: goto label_168bb0;
            case 0x168BC8u: goto label_168bc8;
            case 0x168BE0u: goto label_168be0;
            case 0x168BF8u: goto label_168bf8;
            case 0x168C10u: goto label_168c10;
            case 0x168C28u: goto label_168c28;
            case 0x168C40u: goto label_168c40;
            case 0x168C58u: goto label_168c58;
            case 0x168C70u: goto label_168c70;
            case 0x168C88u: goto label_168c88;
            case 0x168CA0u: goto label_168ca0;
            case 0x168CB8u: goto label_168cb8;
            case 0x168CD0u: goto label_168cd0;
            case 0x168CE8u: goto label_168ce8;
            case 0x168D00u: goto label_168d00;
            case 0x168D18u: goto label_168d18;
            case 0x168D30u: goto label_168d30;
            case 0x168D48u: goto label_168d48;
            case 0x168D60u: goto label_168d60;
            case 0x168D78u: goto label_168d78;
            case 0x168D90u: goto label_168d90;
            case 0x168DA8u: goto label_168da8;
            case 0x168DC0u: goto label_168dc0;
            case 0x168DE8u: goto label_168de8;
            case 0x168E10u: goto label_168e10;
            case 0x168E38u: goto label_168e38;
            case 0x168E60u: goto label_168e60;
            case 0x168E88u: goto label_168e88;
            case 0x168EE0u: goto label_168ee0;
            case 0x168EF8u: goto label_168ef8;
            case 0x168F50u: goto label_168f50;
            case 0x168F98u: goto label_168f98;
            case 0x168FF0u: goto label_168ff0;
            case 0x169038u: goto label_169038;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169048u;
}
