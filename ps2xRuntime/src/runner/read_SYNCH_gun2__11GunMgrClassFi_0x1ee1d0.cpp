#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: read_SYNCH_gun2__11GunMgrClassFi
// Address: 0x1ee1d0 - 0x1ee2a8
void read_SYNCH_gun2__11GunMgrClassFi_0x1ee1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("read_SYNCH_gun2__11GunMgrClassFi");


    ctx->pc = 0x1ee1d0u;

    // 0x1ee1d0: 0x27bdffc0
    ctx->pc = 0x1ee1d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ee1d4: 0x51080
    ctx->pc = 0x1ee1d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ee1d8: 0x7fbf0030
    ctx->pc = 0x1ee1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1ee1dc: 0x451821
    ctx->pc = 0x1ee1dcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ee1e0: 0x7fb20020
    ctx->pc = 0x1ee1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ee1e4: 0x7fb10010
    ctx->pc = 0x1ee1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ee1e8: 0x31080
    ctx->pc = 0x1ee1e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ee1ec: 0x621021
    ctx->pc = 0x1ee1ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ee1f0: 0x7fb00000
    ctx->pc = 0x1ee1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ee1f4: 0x21080
    ctx->pc = 0x1ee1f4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ee1f8: 0x70808e28
    ctx->pc = 0x1ee1f8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ee1fc: 0x828021
    ctx->pc = 0x1ee1fcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ee200: 0xc07b518
    ctx->pc = 0x1EE200u;
    SET_GPR_U32(ctx, 31, 0x1EE208u);
    ctx->pc = 0x1EE204u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ED460u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunBuffer__Fi_0x1ed460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE208u; }
        else if (ctx->pc != 0x1EE208u) { ctx->pc = 0x1EE208u; }
    }
    if (ctx->pc != 0x1EE208u) { return; }
    ctx->pc = 0x1EE208u;
    // 0x1ee208: 0x70409628
    ctx->pc = 0x1ee208u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ee20c: 0xc07b684
    ctx->pc = 0x1EE20Cu;
    SET_GPR_U32(ctx, 31, 0x1EE214u);
    ctx->pc = 0x1EE210u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EDA10u;
    {
        const uint32_t __entryPc = ctx->pc;
        gun_action__FP11Gun_Act_tag_0x1eda10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE214u; }
        else if (ctx->pc != 0x1EE214u) { ctx->pc = 0x1EE214u; }
    }
    if (ctx->pc != 0x1EE214u) { return; }
    ctx->pc = 0x1EE214u;
    // 0x1ee214: 0x8e44000c
    ctx->pc = 0x1ee214u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1ee218: 0x24030001
    ctx->pc = 0x1ee218u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee21c: 0x3405ffff
    ctx->pc = 0x1ee21cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1ee220: 0x4180a
    ctx->pc = 0x1ee220u;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
    // 0x1ee224: 0xa203000e
    ctx->pc = 0x1ee224u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ee228: 0x8643001c
    ctx->pc = 0x1ee228u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1ee22c: 0xa6030000
    ctx->pc = 0x1ee22cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ee230: 0x86430020
    ctx->pc = 0x1ee230u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1ee234: 0xa6030002
    ctx->pc = 0x1ee234u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ee238: 0x96030000
    ctx->pc = 0x1ee238u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ee23c: 0x14650009
    ctx->pc = 0x1EE23Cu;
    {
        const bool branch_taken_0x1ee23c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 5));
        ctx->pc = 0x1EE240u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ee23c) {
            ctx->pc = 0x1EE264u;
            goto label_1ee264;
        }
    }
    ctx->pc = 0x1EE244u;
    // 0x1ee244: 0x96030002
    ctx->pc = 0x1ee244u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1ee248: 0x10650003
    ctx->pc = 0x1EE248u;
    {
        const bool branch_taken_0x1ee248 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        ctx->pc = 0x1EE24Cu;
        SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ee248) {
            ctx->pc = 0x1EE258u;
            goto label_1ee258;
        }
    }
    ctx->pc = 0x1EE250u;
    // 0x1ee250: 0x10000003
    ctx->pc = 0x1EE250u;
    {
        const bool branch_taken_0x1ee250 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ee250) {
            ctx->pc = 0x1EE260u;
            goto label_1ee260;
        }
    }
    ctx->pc = 0x1EE258u;
label_1ee258:
    // 0x1ee258: 0x10000003
    ctx->pc = 0x1EE258u;
    {
        const bool branch_taken_0x1ee258 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EE25Cu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1ee258) {
            ctx->pc = 0x1EE268u;
            goto label_1ee268;
        }
    }
    ctx->pc = 0x1EE260u;
label_1ee260:
    // 0x1ee260: 0x24030001
    ctx->pc = 0x1ee260u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1ee264:
    // 0x1ee264: 0xa6030004
    ctx->pc = 0x1ee264u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
label_1ee268:
    // 0x1ee268: 0x86030004
    ctx->pc = 0x1ee268u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ee26c: 0x10600005
    ctx->pc = 0x1EE26Cu;
    {
        const bool branch_taken_0x1ee26c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EE270u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ee26c) {
            ctx->pc = 0x1EE284u;
            goto label_1ee284;
        }
    }
    ctx->pc = 0x1EE274u;
    // 0x1ee274: 0xc07b9a4
    ctx->pc = 0x1EE274u;
    SET_GPR_U32(ctx, 31, 0x1EE27Cu);
    ctx->pc = 0x1EE278u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EE690u;
    {
        const uint32_t __entryPc = ctx->pc;
        adjustVal_cz__11GunMgrClassFP4_gun_0x1ee690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE27Cu; }
        else if (ctx->pc != 0x1EE27Cu) { ctx->pc = 0x1EE27Cu; }
    }
    if (ctx->pc != 0x1EE27Cu) { return; }
    ctx->pc = 0x1EE27Cu;
    // 0x1ee27c: 0x10000005
    ctx->pc = 0x1EE27Cu;
    {
        const bool branch_taken_0x1ee27c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EE280u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1ee27c) {
            ctx->pc = 0x1EE294u;
            goto label_1ee294;
        }
    }
    ctx->pc = 0x1EE284u;
label_1ee284:
    // 0x1ee284: 0xa6000008
    ctx->pc = 0x1ee284u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ee288: 0xa600000a
    ctx->pc = 0x1ee288u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ee28c: 0xa600000c
    ctx->pc = 0x1ee28cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ee290: 0x7bbf0030
    ctx->pc = 0x1ee290u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ee294:
    // 0x1ee294: 0x7bb20020
    ctx->pc = 0x1ee294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee298: 0x7bb10010
    ctx->pc = 0x1ee298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee29c: 0x7bb00000
    ctx->pc = 0x1ee29cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee2a0: 0x3e00008
    ctx->pc = 0x1EE2A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE2A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EE258u: goto label_1ee258;
            case 0x1EE260u: goto label_1ee260;
            case 0x1EE264u: goto label_1ee264;
            case 0x1EE268u: goto label_1ee268;
            case 0x1EE284u: goto label_1ee284;
            case 0x1EE294u: goto label_1ee294;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EE2A8u;
}
